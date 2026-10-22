#include <iostream>
#include <string>

// 1. Base Class
class Vehicle {
protected:
    std::string brand;
    int maxSpeed;

public:
    Vehicle(std::string b, int speed) : brand(b), maxSpeed(speed) {}
    
    void displayVehicleInfo() const {
        std::cout << "Brand: " << brand << ", Max Speed: " << maxSpeed << " km/h\n";
    }
};

// 2. Intermediate Derived Class
class Car : public Vehicle {
protected:
    int numDoors;

public:
    Car(std::string b, int speed, int doors) 
        : Vehicle(b, speed), numDoors(doors) {}

    void openTrunk() const {
        std::cout << "The trunk of this " << brand << " is now open.\n";
    }
};

// 3. Ultimate Derived Class
class ElectricCar : public Car {
private:
    int batteryCapacity; // in kWh

public:
    ElectricCar(std::string b, int speed, int doors, int battery)
        : Car(b, speed, doors), batteryCapacity(battery) {}

    void chargeBattery() const {
        std::cout << "Charging the " << brand << "... Battery capacity: " 
                  << batteryCapacity << " kWh.\n";
    }

    void showFullSpecs() const {
        // Accessing inherited members up the inheritance chain
        displayVehicleInfo(); // Inherited from Base Class
        std::cout << "Doors: " << numDoors << "\n"; // Inherited from Intermediate Class
        std::cout << "Battery: " << batteryCapacity << " kWh\n"; // Defined Locally
    }
};

int main() {
    std::cout << "=== Chained Inheritance Demonstration ===\n";
    
    // Instantiate the ultimate derived class
    ElectricCar myTesla("Tesla Model S", 250, 4, 100);

    // 1. Demonstrate usage of Base Class member
    myTesla.displayVehicleInfo();

    // 2. Demonstrate usage of Intermediate Derived Class member
    myTesla.openTrunk();

    // 3. Demonstrate usage of locally defined member
    myTesla.chargeBattery();
    
    std::cout << "\n--- Complete Specifications ---\n";
    myTesla.showFullSpecs();

    return 0;
}ss