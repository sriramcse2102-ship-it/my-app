#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string username, password;
    string user, pass;
    int choice;

    cout << "1. Register\n2. Login\n";
    cout << "Enter choice: ";
    cin >> choice;

    if(choice == 1) {
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        ofstream file("users.txt", ios::app);
        file << username << " " << password << endl;
        file.close();

        cout << "Registration Successful";
    }

    else if(choice == 2) {
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        ifstream file("users.txt");

        bool found = false;

        while(file >> user >> pass) {
            if(user == username && pass == password) {
                found = true;
                break;
            }
        }

        file.close();

        if(found)
            cout << "Login Successful";
        else
            cout << "Invalid Username or Password";
    }

    else {
        cout << "Invalid Choice";
    }

    return 0;
}