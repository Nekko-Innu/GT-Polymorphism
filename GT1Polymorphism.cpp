#include <iostream>
using namespace std;

class Calculator {
    public:
    void add(int a, int b) {
        cout << "Result Sum: " << a + b << endl;
    }
    void add(int a, int b, int c) {
        cout << "Result Sum: " << a + b + c << endl;
    }
    void add(float a, float b) {
        cout << "Result Sum: " << a + b << endl;
    }
    void subtract(int a, int b){
        cout << "Result Difference: " << a - b << endl;
    }
    void multiply(int a, int b){
        cout << "Result Product: " << a * b << endl;
    }
    void divide(int a, int b){
        cout << "Result Quotient: " << a / b << endl;
    }
};

int main(){
    Calculator calc;

    cout << "======Simple Calculator======" << endl;
    cout << "1. Add 2 Integer" << endl;
    cout << "2. Add 3 Integer" << endl;
    cout << "3. Add 2 Float" << endl;
    cout << "4. Subtract 2 Integer" << endl;
    cout << "5. Multiply 2 Integer" << endl;
    cout << "6. Divide 2 Integer" << endl;
    cout << "Enter your option(1-6): ";
    int option;
    cin >> option;
    int a, b, c;
    cout << "Enter two integers: ";
    cin >> a >> b;
    switch(option){
        case 1:
            calc.add(a, b);
            break;
        case 2:
            cout << "Enter third integer: ";
            cin >> c;
            calc.add(a, b, c);
            break;
        case 3:
            calc.add((float)a, (float)b);
            break;
        case 4:
            calc.subtract(a, b);
            break;
        case 5:
            calc.multiply(a, b);
            break;
        case 6:
            if (b == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
            calc.divide(a, b);
            }
            break;
        default:
            cout << "Invalid option!" << endl;
    }
    return 0;
}

