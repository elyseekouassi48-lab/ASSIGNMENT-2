#include <iostream>
using namespace std;

int main() {
    int choice;
    float PT, ST, PV, SV, TR;

    cout << "1. Calculate Turns Ratio\n";
    cout << "2. Calculate Secondary Voltage\n";
    cout << "3. Calculate Primary Voltage\n";

    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter Primary Turns: ";
            cin >> PT;
            cout << "Enter Secondary Turns: ";
            cin >> ST;
            TR = PT / ST;
            cout << "Turns Ratio = " << TR;
            break;

        case 2:
            cout << "Enter Primary Voltage: ";
            cin >> PV;
            cout << "Enter Primary Turns: ";
            cin >> PT;
            cout << "Enter Secondary Turns: ";
            cin >> ST;
            SV = (PV * ST) / PT;
            cout << "Secondary Voltage = " << SV << " V";
            break;

        case 3:
            cout << "Enter Secondary Voltage: ";
            cin >> SV;
            cout << "Enter Primary Turns: ";
            cin >> PT;
            cout << "Enter Secondary Turns: ";
            cin >> ST;
            PV = (SV * PT) / ST;
            cout << "Primary Voltage = " << PV << " V";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
