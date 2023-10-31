#include <iostream>
#include <unistd.h>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    string name;
    string thing;

    while (true) {
        cout << "What's your name?" << endl;
        cin >> name;

        if (name == "princess") {
            cout << "Welcome " << name << endl;
        } else {
            break;
        }

        for (int j = 0; j < 3; j++) {
            cout << ".";
            sleep(1);
            cout.flush();
        }

        cout << endl;
        cout << "I am Lan, your Assistant" << endl;

        for (int i = 0; i < 5; i++) {
            cout << ".";
            sleep(1);
            cout.flush();
        }

        cout << " " << endl;
        cout << "What would you like me to do for you?" << endl;
        cout << "Press 1 for combination (nCr)" << endl;
        cin >> thing;

        if (thing == "1") {
            int n, r;
            cout << "Enter n: ";
            cin >> n;
            cout << "Enter r: ";
            cin >> r;

            if (r <= n) {
                int combination = factorial(n) / (factorial(r) * factorial(n - r));
                cout << n << "C" << r << " = " << combination << endl;
            } else {
                cout << "Invalid input: r should be less than or equal to n." << endl;
            }
        } else {
            cout << "I can't do that." << endl;
            break;
        }
    }

    return 0;
}
