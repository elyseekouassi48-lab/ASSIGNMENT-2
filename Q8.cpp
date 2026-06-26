#include <iostream>
using namespace std;

int main() {
    float L1, L2, L3, avg;

    for(int i = 1; i <= 6; i++) {
        cout << "\nSet " << i << endl;

        cout << "Enter Line 1 Current: ";
        cin >> L1;

        cout << "Enter Line 2 Current: ";
        cin >> L2;

        cout << "Enter Line 3 Current: ";
        cin >> L3;

        avg = (L1 + L2 + L3) / 3;

        cout << "Average Current = " << avg << " A" << endl;
    }

    return 0;
}
