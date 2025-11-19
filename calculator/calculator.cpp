#include <iostream>
#include <cmath>
using namespace std;

void menu() {
    cout << "\n====== SCIENTIFIC CALCULATOR ======\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power (x^y)\n";
    cout << "6. Square Root\n";
    cout << "7. Modulo\n";
    cout << "8. sin(x)\n";
    cout << "9. cos(x)\n";
    cout << "10. tan(x)\n";
    cout << "0. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    int choice;
    double a, b;

    while (true) {
        menu();
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting calculator...\n";
            break;
        }

        switch (choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a + b << endl;
            break;

        case 2:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a - b << endl;
            break;

        case 3:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a * b << endl;
            break;

        case 4:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            if (b == 0) cout << "Error: Division by zero!\n";
            else cout << "Result = " << a / b << endl;
            break;

        case 5:
            cout << "Enter base and exponent: ";
            cin >> a >> b;
            cout << "Result = " << pow(a, b) << endl;
            break;

        case 6:
            cout << "Enter a number: ";
            cin >> a;
            cout << "Square Root = " << sqrt(a) << endl;
            break;

        case 7:
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "Result = " << (int)a % (int)b << endl;
            break;

        case 8:
            cout << "Enter angle in radians: ";
            cin >> a;
            cout << "sin(x) = " << sin(a) << endl;
            break;

        case 9:
            cout << "Enter angle in radians: ";
            cin >> a;
            cout << "cos(x) = " << cos(a) << endl;
            break;

        case 10:
            cout << "Enter angle in radians: ";
            cin >> a;
            cout << "tan(x) = " << tan(a) << endl;
            break;

        default:
            cout << "Invalid option! Try again.\n";
        }
    }

    return 0;
}

