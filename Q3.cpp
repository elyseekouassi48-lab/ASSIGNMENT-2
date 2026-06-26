#include <iostream>
using namespace std;

int main() {
    float rated, starting;

    cout << "Enter rated current: ";
    cin >> rated;

    cout << "Enter starting current: ";
    cin >> starting;

    if (starting > 3 * rated)
        cout << "High starting current";
    else
        cout << "Starting current is acceptable";

    return 0;
}
