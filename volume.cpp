#include <iostream>
using namespace std;

// Volume of Cylinder
void cylinder(float height, float radius) {
    float volume;
    volume = 3.14 * radius * radius * height;
    cout << "Cylinder Volume: " << volume;
}

// Volume of Cone
void cone(float height, float radius) {
    float volume;
    volume = 3.14 * radius * radius * height * 0.33;
    cout << "Volume: " << volume;
}

// Area and Perimeter of Triangle
void triangle(float base, float height) {
    float area;
    float perimeter;
    area = base * height * 0.5;
    perimeter = height * 2 + base;
    cout << " Area: " << area << endl << "Perimeter: " << perimeter;
}

// Area and Perimeter of Rectangle
void rectangle(float length, float width) {
    float perimeter;
    float area;
    area = length * width;
    perimeter = length * 2 + width * 2;

    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area;
}

int main() {
    int choice;

    // Menu
    cout << "What do you want to calculate?" << endl
         << "1. Cylinder Volume" << endl
         << "2. Cone Volume" << endl
         << "3. Perimeter and Area of Triangle" << endl
         << "4. Perimeter and Area of Rectangle" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    cout << endl;

    switch (choice) {
    case 1: {
        float h;
        float r;

        // Input
        cout << "Enter cylinder height: ";
        cin >> h;
        cout << "Enter circle radius: ";
        cin >> r;
        cout << endl;

        // Output
        cylinder(h, r);
        break;
    }

    case 2: {
        float h;
        float r;
        
        // Input
        cout << "Enter cone height: ";
        cin >> h;
        cout << "Enter cone base radius: ";
        cin >> r;
        cout << endl;

        // Output
        cone(h, r);
        break;
    }

    case 3: {
        float b;
        float h;

        // Input
        cout << "Enter base: ";
        cin >> b;
        cout << "Enter height: ";
        cin >> h;
        cout << endl;

        // Output
        triangle(b, h);
        break;
    }

    case 4: {
        float l;
        float w;

        // Input
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter width: ";
        cin >> w;
        cout << endl;

        // Output
        rectangle(l, w);
        break;
    }

    default:
        // Mwehehe
        cout << "Whatever, I'm tired." << endl << "Bye.";
        break;
    }
}