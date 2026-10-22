#include <iostream>
#include <string>
#include <vector>

// 1. Abstract Base Class
class Employee {
protected:
    std::string name;
    double baseSalary;

public:
    Employee(std::string n, double salary) : name(n), baseSalary(salary) {}
    
    // Virtual destructor ensures safe memory cleanup via base-class pointers
    virtual ~Employee() {}

    // Pure virtual function enforcing an interface contract
    virtual void calculatePay() const = 0; 
};

// 2. Concrete Derived Class A
class Developer : public Employee {
private:
    double bugBonus;

public:
    Developer(std::string n, double salary, double bonus) 
        : Employee(n, salary), bugBonus(bonus) {}

    // Overriding the virtual function interface
    void calculatePay() const override {
        double total = baseSalary + bugBonus;
        std::cout << "Developer " << name << " total pay: $" << total << "\n";
    }
};

// 3. Concrete Derived Class B
class Manager : public Employee {
private:
    double performanceBonus;

public:
    Manager(std::string n, double salary, double bonus) 
        : Employee(n, salary), performanceBonus(bonus) {}

    // Overriding the virtual function interface
    void calculatePay() const override {
        double total = baseSalary + performanceBonus;
        std::cout << "Manager " << name << " total pay: $" << total << "\n";
    }
};

int main() {
    std::cout << "=== Runtime Polymorphism Demonstration ===\n";

    // Manage distinct derived objects uniformly using a collection of Base pointers
    std::vector<Employee*> staff;
    
    staff.push_back(new Developer("Alice", 7000, 850));
    staff.push_back(new Manager("Bob", 9500, 2100));
    staff.push_back(new Developer("Charlie", 7200, 400));

    // Dynamic Dispatch: The same function call triggers completely different 
    // internal behaviors depending on the actual concrete instance type.
    for (const auto& emp : staff) {
        emp->calculatePay(); 
    }

    // Clean up allocated heap memory safely via virtual destructor
    for (auto emp : staff) {
        delete emp;
    }
    staff.clear();

    return 0;
}