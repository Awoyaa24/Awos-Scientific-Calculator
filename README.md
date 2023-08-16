# Awos-Scientific-Calculator
AWOS SCIENTIFIC CALCULATOR README

NAME: AWO YAA ESSIAW 
INDEX NUMBER: UEB3217522 
CLASS: IT B
LEVEL: 100

PROJECT OVERVIEW
Welcome to Awos Scientific Calculator project, developed by a student at the University of Energy and Natural Resources (UENR) with Index Number UEB3217522. This C++ project is made for simple mathematical computations. It also executes a few difficult to solve trigonometric and logarithmic functions. The calculator will evaluate any mathematical operation entered using infix notation which will then provide a result. 

In addition, it supports addition, subtraction, multiplication, division and modulo. This calculator allows keyboard entry. The C++ class is used to defined the data of the calculator and the various types of functions it can perform such as addition, subtraction, multiplication, division and modulo. 

The project also uses classes that handle different exceptions when an illegal input is received or when an operation results in a singular value such as an imaginary number. The technology used for this program is Object Oriented Program which provided the flexibility necessary for the implementation of the various operations.   
FEATURES 
1.	Calculation Functionality 
2.	User Interaction 
3.	Modular Structure
4.	Switch Cases
5.	Error Handling

CODE STRUCTURE 
Header Files:
#include <iostream>: This includes the input/output stream library for input and output operations.
#include <cmath>: This includes the math library for mathematical functions like log and round.

Namespace:
using namespace std;: This allows the program to access standard C++ library functions without explicitly using the std:: prefix.
Main Function:
int main() { ... }: This is the main entry point of the program.

Variables and Data Types used in the project
int choice, Num[2];: Integer variables to store the user's choices and numbers.
double sum, num1, num2, lnum1, lnum2, base1, base2, figure1, figure2, log_answer;: Double variables to store calculation results and input values.

char opra;: Character variable to store operation choices ('+', '-', '*', '/', '%', 'Y', 'N', etc.).

Output Statements:
cout << "...": Output statements for displaying text messages to the user.

User Input:
cin >> ...: Input statements for getting user input values.

Decision Structures (Switch and if-else):
The program uses switch and if-else statements to determine the flow of the program based on user choices.
For example, there is a switch case for the main menu, another for simple calculations, and nested switch cases for logarithmic calculations.

Loops:
The program uses for and while loops to handle repetitive operations.
For example, there's a loop to repeat simple calculations up to 5 times and another loop to handle the logarithmic calculations.
Labels and Goto Statements:
The program uses labels (e.g., question:, menu:, sim_cal:, log_cal:, etc.) and goto statements to control the flow of execution, which is considered a poor practice in modern programming.
Calculation Logic:
The code contains logic for basic calculations like addition, subtraction, multiplication, division, and modulo. It also contains logic for logarithmic calculations using the log function from the math library.
Exit Point:
exit: label is used to define the exit point of the program after the user chooses to exit.

End of Program:
return 0;: The program returns 0 to indicate successful execution to the operating system.

GETTING STARTED 
1.	Clone the project repository to your local machine 
2.	Ensure you have a C++ compiler and development environment set up. 
3.	Compile the ‘main.cpp’ source code using your compiler. 
4.	Run the compiled executable to interact with the Awos Scientific Calculator 

USAGE 
1.	Run the compiled executable to start the Awos Scientific Calculator 
2.	Follow the on-screen prompts to choose between simple calculation and logarithm calculations 
3.	If you choose simple calculation, enter your 1st number and indicate your operation symbol (+, -, *, /, & %) you want. 
4.	Else if you choose logarithmic calculation, you will be asked to choose between forms or types of operation set you want. 


CONTACT INFORMATION  
For questions or concerns, please reach out to the project’s author: 
Email: awoyaaaduessiaw@gmail.com
Contact: 0503822299
