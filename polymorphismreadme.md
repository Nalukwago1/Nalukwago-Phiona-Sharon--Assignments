  Polymorphism

This project shows how runtime polymorphism works in C++ using a simple workplace payroll example. 

 What is Polymorphism?

Polymorphism means "many forms." In programming, it lets you treat different objects as if they are the same basic type, but they still act out their own unique behaviors when you run the code. 

Instead of writing separate lists and tracking rules for every single job title at a company, we can group everyone together under a single, generic Employee list. When we tell the program to calculate pay, C++ automatically looks at each individual person's actual job type at that exact second and runs the correct math. 

 How the Code Works

The program uses a shared blueprint to control two different employee types: 

* Employee: This is the main blueprint class. It forces any specific job class to include a pay calculation rule. It also includes a special cleanup function called a virtual destructor to make sure the computer's memory stays clean when items are deleted.
* Developer: This class uses the Employee blueprint but builds its own calculation rule to add a bug-fixing bonus to the base salary.
* Manager: This class also uses the Employee blueprint but builds its rule to add a team performance bonus to the base salary.

How to Run the Program

1. Open your terminal and compile the file:
g++ main.cpp -o polymorphism
2. Run the program:
./polymorphism