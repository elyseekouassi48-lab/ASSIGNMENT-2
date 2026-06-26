#include <iostream>
using namespace std;

int main() {
    int choice;
    double value, result;

    cout << "1. Volts to Millivolts\n";
    cout << "2. Amperes to Milliamperes\n";
    cout << "3. Kilowatts to Watts\n";
    cout << "4. Ohms to Kilo-ohms\n";

    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter value: ";
    cin >> value;

    switch(choice) {
        case 1:
            result = value * 1000;
            cout << result << " mV";
            break;
        case 2:
            result = value * 1000;
            cout << result << " mA";
            break;
        case 3:
            result = value * 1000;
            cout << result << " W";
            break;
        case 4:
            result = value / 1000;
            cout << result << " kOhms";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}
