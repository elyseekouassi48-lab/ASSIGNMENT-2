#include <iostream>
#include <string>
using namespace std;

int main() {
    string code;
    string correctCode = "BEE208";
    int attempts = 0;

    while(attempts < 3) {
        cout << "Enter laboratory access code: ";
        cin >> code;

        if(code == correctCode) {
            cout << "Access granted";
            return 0;
        }

        attempts++;
    }

    cout << "Access denied. Maximum attempts reached.";

    return 0;
}
