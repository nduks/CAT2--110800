/* Admission number 110800
Introduction to Programming*/

#include<iostream>
using namespace std;

bool Prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int x = 2; x * x <= num; x++) {
        if (num % x == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Prime numbers are: ";
    for (int x = 2; x <= num; x++) {
        if (Prime(x)) {
            cout << x << " ";
        }
    }
    return 0;
}