#include <iostream>

using namespace std;

int main() {

    // Declarate variable
    int attemp ;
    char kond;
    string username, password;
    attemp = 3;

    // Input username and password
    while (attemp > 0) {
        cout << "Username : "; cin >> username;
        cout << "Password : "; cin >> password;

        // Check username and password
        if (username == "ino" && password == "5353") {
            kond = 'y';
            break;
        } else {
            cout << "Username or Password is wrong, you have " << attemp << " try left." << endl << endl; 
            --attemp;
        }
    }

    // Check if attemp is 0
    if (attemp == 0) {
        cout << "You are blocked because of suspicious activity.";
    }

    // Looping if username and password is correct
    if (kond == 'y') {
        cout << "Cinderella is sleeping at night." << endl << "Your guess is correct.";
    }
return 0;    

};
