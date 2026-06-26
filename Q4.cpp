#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "1. 5A Fuse\n";
    cout << "2. 10A Fuse\n";
    cout << "3. 13A Fuse\n";
    cout << "4. 20A Fuse\n";
    cout << "5. 32A Fuse\n";

    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Used for lighting circuits";
            break;
        case 2:
            cout << "Used for small appliances";
            break;
        case 3:
            cout << "Used for socket outlets";
            break;
        case 4:
            cout << "Used for water heaters";
            break;
        case 5:
            cout << "Used for industrial motors";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}
