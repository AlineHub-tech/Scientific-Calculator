#include <iostream>
#include "operations.h"
#include "scientific.h"

using namespace std;

int main() {
    int choice;
    double a, b;

    do {
        cout << "\n--- Scientific Calculator ---\n";
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
        cout << "5. Power\n6. Square Root\n7. Sine\n8. Cosine\n9. Tangent\n0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << add(a,b) << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << subtract(a,b) << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << multiply(a,b) << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << divide(a,b) << endl;
                break;
            case 5:
                cout << "Enter base and exponent: ";
                cin >> a >> b;
                cout << "Result: " << power(a,b) << endl;
                break;
            case 6:
                cout << "Enter number: ";
                cin >> a;
                cout << "Result: " << squareRoot(a) << endl;
                break;
            case 7:
                cout << "Enter angle in radians: ";
                cin >> a;
                cout << "Result: " << sine(a) << endl;
                break;
            case 8:
                cout << "Enter angle in radians: ";
                cin >> a;
                cout << "Result: " << cosine(a) << endl;
                break;
            case 9:
                cout << "Enter angle in radians: ";
                cin >> a;
                cout << "Result: " << tangent(a) << endl;
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 0);

    return 0;
}
