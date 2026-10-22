 Chained Inheritance in C++

This project shows how chained inheritance works in C++ using a real-world tech example. 

What is Chained Inheritance?

Inheritance means one class passes its features down to another class. Chained inheritance happens when a class inherits from a class that is already inheriting from another class. It forms a step-by-step chain. 

It is important to avoid using human family analogies like Grandparent, Parent, and Child because coding inheritance relies on an "IS-A" rule. A real child is not a type of father. Instead, we use clear technical categories: 

1. An Electric Car IS A type of Car.
2. A Car IS A type of Vehicle.

 How the Code Works

The program is built using three classes connected in a straight chain: 

* Vehicle: This is the starting class. It holds basic information that any vehicle has, like the brand name and top speed.
* Car: This class inherits everything from the Vehicle class. It reuses that code and adds car-specific details, like the number of doors.
* ElectricCar: This is the final class in the chain. It automatically gets everything from both Vehicle and Car, and then adds electric features like battery size.

 How to Run the Program

1. Open your terminal and compile the file:
g++ main.cpp -o chained_inheritance
2. Run the program:
./chained_inheritance