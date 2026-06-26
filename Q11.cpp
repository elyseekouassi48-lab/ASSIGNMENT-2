#include <iostream>
using namespace std;

int main() {
    float temp;

    cout << "Enter temperature: ";
    cin >> temp;

    while(temp <= 90) {
        cout << "Enter temperature: ";
        cin >> temp;
    }

    cout << "Motor temperature unsafe. Stop motor test.";

    return 0;
}
