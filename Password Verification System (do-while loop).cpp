#include <iostream>
using namespace std;
int main() {
    const string USERNAME = "admin";
    const string PASSWORD = "pass123";

    string enteredUsername, enteredPassword;
    do {
        cout << "\nEnter username: ";
        cin >> enteredUsername;
        cout << "Enter password: ";
        cin >> enteredPassword;

        if (enteredUsername ==USERNAME && enteredPassword ==PASSWORD) 
		{
            cout << "Access Granted" << endl;
            break; 
        } 
		else
		 {
            cout << "Incorrect credentials, try again" << endl;
        }

    } while (true);

    return 0;
}