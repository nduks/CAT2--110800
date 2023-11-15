/* Admission number 110800
Introduction to Programming*/

#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers to find the maximum number: " << endl;
    cin >> num1 >> num2 >> num3;

    switch (1) {
        case 1:
            if (num1 >= num2 && num1 >= num3) {
                cout << "The maximum number is: " << num1 << endl;
            } else {
                switch (2) {
                    case 2:
                        if (num2 >= num1 && num2 >= num3) {
                            cout << "The maximum number is: " << num2 << endl;
                        } else {
                            cout << "The maximum number is: " << num3 << endl;
                        }
                        break;
                }
            }
            break;
    }

    return 0;
}
