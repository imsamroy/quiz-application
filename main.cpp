#include <iostream>
#include <fstream>
#include <vector>
#include "json.hpp"
#include <string>

using namespace std;

struct Option
{
    string oName;
    string oNum;
};

struct Question
{
    string qName;
    int qNum;
    Option a, b, c;
    string ansNum;
};

void printQuestion(Question q, string userChoice) {
    cout << "Q" << q.qNum << ") " << q.qName << endl;
    cout << q.a.oNum << ") " << q.a.oName << endl;
    cout << q.b.oNum << ") "<< q.b.oName << endl;
    cout << q.c.oNum << ") "<< q.c.oName << endl;
    cout << "Your answer (A-C): ";

    cin >> userChoice;
    if (userChoice == q.ansNum)
    {
        cout << "Correct!" << endl << endl;
    }
    else {
        cout << "Incorrect!" << endl << endl;
    }
    
}   

int main() {
    string userChoice;
    int qCount;
    
    cout << "Quiz Application (v1.0.0)" << endl;
    cout << "This is a simple CLI MCQ quiz application made using C++" << endl << endl;

    fstream jsonFileVar;
    jsonFileVar.open("qData.json", ios::in); //read mode
    
    //parsing the json
    stringstream s;
    s << jsonFileVar.rdbuf();
    string data = s.str();
    jsonFileVar.close();
    nlohmann::json qData = nlohmann::json::parse(data);

    //using json data to create and print questions
    qCount = qData["number of questions"];

    vector<Question> qSet;
    for (int k = 0; k < qCount; ++k)
    {
        qSet.push_back(Question());
    }

    int z = 0;
    for (int i = 0; i < qCount; i++)
    {
        qSet[i].qNum = i+1;
        qSet[i].a.oNum = "A";
        qSet[i].b.oNum = "B";
        qSet[i].c.oNum = "C";
        qSet[i].qName = qData["questions"][z];
        qSet[i].a.oName = qData["questions"][z+1];
        qSet[i].b.oName = qData["questions"][z+2];
        qSet[i].c.oName = qData["questions"][z+3];
        qSet[i].ansNum = qData["questions"][z+4];
        
        z = z+5;

        printQuestion(qSet[i], userChoice);
    }
 cout << "Press enter to exit (if you are on a Windows machine)" << endl;
}
