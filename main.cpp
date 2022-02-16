#include <iostream>
using namespace std;

void circumference() {
    const double pi = 3.14159;
    while(true) {//loop
        float radius;
        float answer;
        cout << "Enter the radius in cm \n";
        cin >> radius;
        answer = 2 * pi * radius;
        cout << "the circumference of the circle is : "<< answer << "cm\n";
    }
}

void area() {
    const double pi = 3.14159;
    while(true) {//loop
        float radius;
        float answer;
        cout << "Enter the radius in cm \n";
        cin >> radius;
        answer = pi * (radius * radius);
        cout << "the area of the circle is : "<< answer << "cm square\n";
    }
}

int main() {
    while (true) {
        int enter;
        cout << "Calculator\n";
        cout << "Enter the number to perform the specific calculations\n";
        cout << "1 : Calculate the circumference of a circle\n2 : Calculate the area of a circle\n";
        cin >> enter;
        switch (enter) {
            case 1:
                cout<< "Circumference\n";
                circumference();
                break;
            case 2:
                cout << "area\n";
                area();
                break;
        }
        return 0;
    }
}
