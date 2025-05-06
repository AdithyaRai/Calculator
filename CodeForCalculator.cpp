#include<iostream>
using namespace std;

class Calculator {
    public:
        int add(int a, int b) {
            return a + b;
        }
        int subtract(int a, int b) {
            return a - b;
        }
        int multiply(int a, int b) {
            return a * b;
        }
        double divide(int a, int b) {
            if (b == 0) {
                cout << "Error: Division by zero" << endl;
                return 0;
            }
            return (double)a / b;
        }
        void diplay() {
            cout << "List of the Operation: " << endl;
            cout << "1. Add" << endl;
            cout << "2. Subtract" << endl;
            cout << "3. Multiply" << endl;
            cout << "4. Divide" << endl;
            cout << "5. Exit" << endl;
        }
};

int main() {
    Calculator calc;
    int choice, a, b;

    cout << "Welcome to the Calculator!" << endl;

    while (true) { // Loop until the user selects "Exit"
        calc.diplay();
        cout << "Enter your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers to add: ";
                cin >> a >> b;
                cout << "Result: " << calc.add(a, b) << endl;
                break;

            case 2:
                cout << "Enter two numbers to subtract: ";
                cin >> a >> b;
                cout << "Result: " << calc.subtract(a, b) << endl;
                break;

            case 3:
                cout << "Enter two numbers to multiply: ";
                cin >> a >> b;
                cout << "Result: " << calc.multiply(a, b) << endl;
                break;

            case 4:
                cout << "Enter two numbers to divide: ";
                cin >> a >> b;
                cout << "Result: " << calc.divide(a, b) << endl;
                break;

            case 5:
                cout << "Exiting the calculator......" << endl;
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}