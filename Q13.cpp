#include <iostream>
using namespace std;

int main() {
    float resistance;

    cout << "Enter resistance: ";
    cin >> resistance;

    while(resistance <= 5) {
        cout << "Enter resistance: ";
        cin >> resistance;
    }

    cout << "Earth resistance too high. Improve earthing system.";

    return 0;
}
