#include <iostream>

using namespace std;

// demo front page...............

void showMenu() {
    cout << "========================================" << endl;
    cout << "       Employee Management System       " << endl;
    cout << "========================================" << endl;
    cout << "1. Admin Login" << endl;
    cout << "2. Employee Login" << endl;
    cout << "3. Exit" << endl;
    cout << "Please select an option: ";
}

int main() {
    int choice;
    while (true) {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Admin Login selected" << endl;
                // Add admin login functionality here
                break;
            case 2:
                cout << "Employee Login selected" << endl;
                // Add employee login functionality here
                break;
            case 3:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid option, please try again." << endl;
        }
    }

    return 0;
}
