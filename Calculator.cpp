#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter expression (e.g. 5 + 3): ";
    cin >> a >> op >> b;

    double result;

    if (op == '+') result = a + b;
    else if (op == '-') result = a - b;
    else if (op == '*') result = a * b;
    else if (op == '/') {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 1;
        }
        result = a / b;
    } else {
        cout << "Invalid operator!" << endl;
        return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}
