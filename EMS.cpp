#include <iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

//adding admin login.....

struct Employee
{
    int id;
    string name;
    int age;
    string depertment;
    double salary;
    int workingYears;
    string phnumber;
    string email;
};

vector <Employee> employees;

bool login(string username, string password)
{
    const string adminUsername = "admin";
    const string adminPassword = "1234";
    return (username == adminUsername && password == adminPassword);
}

void adminMenu()
{
    int choice;
    while (true)
    {
        cout << "1. Add Employee" << endl;
        cout << "2. Update Employee" << endl;
        cout << "3. Search Employee" << endl;
        cout << "4. Delete Employee" << endl;
        cout << "5. Show All Employees" << endl;
        cout << "6. Save Profiles" << endl;
        cout << "7. Load Profiles" << endl;
        cout << "8. Logout" << endl;
        cout << "Please select an option: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            //addEmployee();
            break;
        case 2:
            //updateEmployee();
            break;
        case 3:
            //searchEmployee();
            break;
        case 4:
            //deleteEmployee();
            break;
        case 5:
            //showEmployees();
            break;
        case 6:
            //saveProfiles();
            break;
        case 7:
            //loadProfiles();
            break;
        case 8:
            return;
        default:
            cout << "Invalid option, please try again." << endl;
        }
    }
}


void showMenu()
{
    cout << "========================================" << endl;
    cout << "       Employee Management System       " << endl;
    cout << "========================================" << endl;
    cout << "1. Admin Login" << endl;
    cout << "2. Employee Login" << endl;
    cout << "3. Exit" << endl;
    cout << "Please select an option: ";
}

int main()
{
    int choice;
    while (true)
    {
        showMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Admin Login selected" << endl;
            string username, password;
            cout << "Enter Admin Username: ";
            cin >> username;
            cout << "Enter Admin Password: ";
            cin >> password;
            if (login(username, password))
            {
                adminMenu();
            }
            else
            {
                cout << "Invalid login credentials." << endl;
            }
            break;

        }

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
