#include <iostream>
using namespace std;

int main() {
    float power, time, energy;
    float totalEnergy = 0;

    for(int i = 1; i <= 8; i++) {
        cout << "\nAppliance " << i << endl;

        cout << "Enter Power (W): ";
        cin >> power;

        cout << "Enter Time (h): ";
        cin >> time;

        energy = power * time;
        totalEnergy += energy;
    }

    cout << "\nTotal Energy = " << totalEnergy << " Wh";

    return 0;
}
