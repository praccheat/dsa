#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num;
    cout << "Enter a number to find its factorial: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;

    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> num;
    cout << "Fibonacci series up to " << num << " terms: ";
    for (int i = 0; i < num; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
