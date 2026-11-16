#include <iostream>
using namespace std;

int fib(int n, int arr[]) {
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    if (arr[n] != -1)
        return arr[n];

    arr[n] = fib(n - 1, arr) + fib(n - 2, arr);

    return arr[n];
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int arr[100];

    for (int i = 0; i < 100; i++)
        arr[i] = -1;

    cout << "Fibonacci = " << fib(n, arr);

    return 0;
}