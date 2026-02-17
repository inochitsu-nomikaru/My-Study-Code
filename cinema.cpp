#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    // 2D Array to store seat status ('O' for available, 'X' for booked)
    char seats[5][8] = {
        {'O','O','O','O','O','O','O','O'},
        {'O','O','O','O','O','O','O','O'},
        {'O','O','O','O','O','O','O','O'},
        {'O','O','O','O','O','O','O','O'},
        {'O','O','O','O','O','O','O','O'}
    };

    // 2D Array to store customer names
    string customerNames[5][8];

    bool isRunning = true;
    // Menu Loop
    while (isRunning) {
        int menuOption;
        // Menu Input
        cout << "   ---MENU OPTIONS---" << endl;
        cout << "1. Display Seat Map" << endl 
             << "2. Book Ticket" << endl 
             << "3. Search Customer" << endl 
             << "4. Sales Report" << endl 
             << "5. Exit" << endl;
        cout << "Enter Selection: "; cin >> menuOption; cin.ignore();

        // Switch case for menu handling
        switch (menuOption) {
            // Display seat map
            case 1: {
                char rowLabel = 'A';
                cout << "  [---Cinema Screen---]" << endl;
                cout << "   1  2  3  4  5  6  7  8" << endl << endl;
                for (int i = 0; i < 5; i++) {
                    cout << rowLabel << "  ";
                    for (int j = 0; j < 8; j++) {
                        cout << seats[i][j] << "  ";
                    }
                    cout << endl;
                    rowLabel++;
                }
                break;
            }
            // Book a ticket
            case 2: {
                string seatInput;
                cout << "   [---Book Ticket---]" << endl;
                cout << "Enter seat to book (e.g., A1): "; cin >> seatInput; cin.ignore();

                if (seatInput.length() < 2) {
                    cout << "Invalid input format!" << endl;
                    break;
                }

                char rowChar = toupper(seatInput[0]);
                char colChar = seatInput[1];

                int row = rowChar - 'A';
                int col = colChar - '1';

                if (row >= 0 && row < 5 && col >= 0 && col < 8) {
                    if (seats[row][col] == 'O') {
                        seats[row][col] = 'X';
                        cout << "Seat booked successfully!" << endl << "Enter Customer Name: ";
                        getline(cin, customerNames[row][col]);
                    } else if (seats[row][col] == 'X') {
                        cout << "Sorry, this seat is already booked by " << customerNames[row][col] << endl;
                    }
                } else {
                    cout << "Please choose a valid seat. Are you booking a seat or ordering an offering?" << endl;
                }
                break;
            }
            // Search for a customer
            case 3: {
                string searchName; 
                bool found = false;
                cout << "   [---Search Customer---]" << endl;
                cout << "Enter Customer Name: "; getline(cin, searchName);
                
                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 8; j++) {
                        if (customerNames[i][j] == searchName) {
                            char row = i + 'A';
                            char col = j + '1';
                            cout << "Customer " << searchName << " found at " << row << col << endl;
                            found = true;
                            break;
                        }
                    }
                    if (found) break;
                }
                
                if (!found) {
                    cout << "Customer not found!" << endl;
                }
                break;
            }
            // Sales report
            case 4: {
                int sold = 0, available = 0;
                cout << "   [---Sales Report---]" << endl;
                cout << "Current Sales Figures:" << endl;
                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 8; j++) {
                        if (seats[i][j] == 'X') {
                            sold++;
                        } else {
                            available++;
                        }
                    }
                }
                int totalRevenue = sold * 50000;
                cout << "Tickets Sold      : " << sold << endl;
                cout << "Remaining Tickets: " << available << endl;
                cout << "Total Revenue     : Rp." << totalRevenue << endl;
                break;
            }
            // Exit
            case 5: {
                isRunning = false;
                cout << "   [---Exit---]" << endl;
                cout << "You have exited the system." << endl;
                break;
            }
            // Invalid selection
            default: {
                cout << "Invalid selection! Take a break and try again." << endl;
                break;
            }
        }
        cout << endl;
    }
    return 0;
}