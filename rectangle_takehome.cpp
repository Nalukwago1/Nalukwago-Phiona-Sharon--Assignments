#include <iostream>
using namespace std; 

class Rectangle {
private:
    // Private data members
    double width;
    double length;

public:
    // Constructor to initialize default values
    Rectangle() : width(0.0), length(0.0) {}

    // Setter functions (mutators)
    void setWidth(double w) {
        if (w >= 0) {
            width = w;
        } else {
            cout << "Error: Width cannot be negative.\n";
        }
    }

    void setLength(double l) {
        if (l >= 0) {
            length = l;
        } else {
            cout << "Error: Length cannot be negative.\n";
        }
    }

    // Getter functions (accessors)
    double getWidth() const {
        return width;
    }

    double getLength() const {
        return length;
    }

    // Functions to calculate area and perimeter
    double calculateArea() const {
        return width * length;
    }

    double calculatePerimeter() const {
        return 2 * (width + length);
    }
};

int main() {
    // 1. Create a Rectangle object
    Rectangle rect;

    // 2. Set dimensions using setter functions
    rect.setWidth(5.5);
    rect.setLength(10.0);

    // 3. Retrieve dimensions using getter functions
    cout << "--- Rectangle Dimensions ---" << endl;
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Length: " << rect.getLength() << endl;

    // 4. Calculate and display area and perimeter
    cout << "\n--- Calculations ---" << endl;
    cout << "Area: " << rect.calculateArea() << endl;
    cout << "Perimeter: " << rect.calculatePerimeter() << endl;

    return 0;
}
