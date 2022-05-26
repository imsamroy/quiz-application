# quiz-application

![GitHub license](https://img.shields.io/github/license/imsamroy/quiz-application)
![GitHub issues](https://img.shields.io/github/issues/imsamroy/quiz-application)
![GitHub stars](https://img.shields.io/github/stars/imsamroy/quiz-application)
![GitHub forks](https://img.shields.io/github/forks/imsamroy/quiz-application)

This is a simple CLI MCQ Quiz application made using C++.  

This CLI application even allows you to add your own set of questions via the attached JSON file in a particular order. (Instructions are provided below on how to do it- https://github.com/imsamroy/quiz-application#how-to-add-your-own-questions-through-the-json-file)

# Running on GNU/Linux distributions

![GitHub release](https://img.shields.io/github/release/imsamroy/quiz-application)

- Go to the releases page (https://github.com/imsamroy/quiz-application/releases)  

- Download the **"Linux-Quiz-Application.zip"** file and extract it as a folder. Inside the extracted folder open a terminal and run: `./Linux-Quiz-Application`  

**NOTE: Before running the executable, right click the file and go to properties then permissions and make sure it is allowed to run as program**

# Running the game on Windows

![GitHub release](https://img.shields.io/github/release/imsamroy/quiz-application)

- Go to the releases page (https://github.com/imsamroy/quiz-application/releases)  

- Download the **"Windows-Quiz-Application.zip"** file and extract it as a folder. Then open the extracted folder and run the **"Windows-Quiz-Application.exe"** file.  

**NOTE: If you get a message like: "Windows Protected your PC" then ignore it and click "More info" then click the Run anyway option (Any exe not recognised by the Microsoft database gets that message even if it is not suspicious, you can search about it online if you want to)**

# How to add your own questions through the JSON file

The qData.json file will look like this-  

![image](https://user-images.githubusercontent.com/92716271/166941945-bcdb6c26-00c8-4332-bde3-0994ddd88d67.png)

This order needs to be maintained for the application to work properly. Basically the 3 lines in yellow represent the data of 3 questions, the first element "Who created the Linux Kernel?" is the text of the question. The next one "Elon Musk" represents text of Option A, "Bill Gates" text of Option B, "Linus Torvalds" text of Option C. Then finally the last element "C" represents the answer of the question i.e. Option C. Please put the commas accordingly after each element and if there is another question then after the last element you need to put a comma again like there is comma after "C" because there is another question after it. Also, all the data of the questions need to be inside the "[ ]" brackets. And you need to specify the number of questions you added in the "number of questions" place where by default 3 is given. So another example of 4 questions would be- 

![image](https://user-images.githubusercontent.com/92716271/166945924-f92910d0-686e-49f3-804a-21537c345dda.png)
