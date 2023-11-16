#include <iostream>

using namespace std;
typedef int (*OperationFunction)(int, int);


int addition(int a, int b) {
    return a + b;
}


int subtraction(int a, int b) {
    return a - b;
}

int main() {
    int num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the operation (+ or -): ";
    cin >> operation;

    cout << "Enter the second number: ";
    cin >> num2;

  
    OperationFunction operationFunc;
    if (operation == '+') {
        operationFunc = addition;
    }
    else if (operation == '-') {
        operationFunc = subtraction;
    }
    else {
          cerr << "Invalid operation. Please use + or -." <<endl;
        return 1;
    }

    
    int result = operationFunc(num1, num2);

    cout << "Result: " << result << endl;

    return 0;
}
