#include <iostream>
#include <string>

using namespace std;

int main() {

    // Variables
    int isLoggedIn = 0, menuChoice;
    string username, password;
    char repeatChoice = ' ';
    int attemptsLeft = 3;

    // Input Username and Password
    cout << "Username: "; cin >> username; 
    cout << "Password: "; cin >> password; 
    cin.ignore(2, '\n');

    // Username and Password Loop
    while (attemptsLeft > 0) {
        if (username == "ino" && password == "5353") {
            isLoggedIn = 1;
            break;
        } else {
            --attemptsLeft;
            if (attemptsLeft > 0) {
                cout << "Incorrect Username or Password!" << endl;
                cout << "Remaining Attempts: " << attemptsLeft << endl;
                cout << "Username: "; cin >> username; 
                cout << "Password: "; cin >> password; 
                cin.ignore(2, '\n');
            } else {
                cout << "Out of attempts. Program terminated." << endl;
                return 0;
            }
        }
    }

    // Main Menu Loop
    while (isLoggedIn == 1 || repeatChoice == 'y') {
        cout << endl << endl << "Main Menu" << endl 
             << "1. Ticket Prices" << endl 
             << "2. Buy Tickets" << endl 
             << "3. Exit" << endl;
        cout << "Choose Option: "; cin >> menuChoice; cin.ignore();

        // Menu Choices
        switch (menuChoice) {
            // Ticket Prices
            case 1: {
            cout << endl << endl << "Ticket Prices" << endl 
                 << "1. Festival A: Rp. 95.000" << endl 
                 << "2. Festival B: Rp. 65.000" << endl 
                 << "3. Regular   : Rp. 35.000" << endl;
            break;
        }
            // Buy Tickets
            case 2: {
            string buyerName;
            int ticketCategory;

            cout << "Buyer Name: "; getline(cin, buyerName);
            cout << endl << endl << "Select Ticket Category" << endl 
                 << "1. Festival A" << endl 
                 << "2. Festival B" << endl 
                 << "3. Regular" << endl;
            cout << "Option: "; cin >> ticketCategory; cin.ignore();

            cout << endl << endl << "Buyer Name: " << buyerName << endl;
            cout << "Ticket Selection: " << ticketCategory << endl;
            
            if (ticketCategory == 1) {
                cout << "Festival A: Rp. 95.000";
            } else if (ticketCategory == 2) {
                cout << "Festival B: Rp. 65.000";
            } else if (ticketCategory == 3) {
                cout << "Regular: Rp. 35.000";
            } else {
                cout << "Invalid Category";
            }

            cout << endl << endl << "Would you like to buy another ticket? (y/n): "; 
            cin >> repeatChoice; cin.ignore();
            
            if (repeatChoice == 'y') {
                isLoggedIn = 1;
            } else {
                isLoggedIn = 0;
            }
            break;
        }
            // Exit
            case 3: {
            cout << endl << endl << "You chose to exit." << endl;
            isLoggedIn = 0;
            repeatChoice = 'n';
            break;
        }

        // Invalid Input
        default:
            cout << endl << endl << "Invalid input. Option does not exist." << endl;
            break;
        }
    }

    return 0;
}
