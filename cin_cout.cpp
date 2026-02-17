#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main () {
    // Declare variables
    int id;
    string name;
    string plug;

    // Input data
    cout << "Input Data" << endl;
    cout << "ID : ";
    // Input ID
    cin >> id;
    cin.ignore(); // ignore the newline character after cin >> id
    cout << "Name : ";
    // Input Name
    getline(cin, name);
    cout << "Plug : ";
    // Input Plug
    getline(cin, plug);
    cout << endl;

    // Output data
    cout << "Here is your data" << endl;
    cout << "ID : " << id << endl;
    cout << "Name : " << name << endl;
    cout << "Plug : " << plug << endl << endl;

    // Output data in table format
    cout << "In table format" << endl;
    cout << "=========================================" << endl;
    cout << left << setw(12) << "ID" << "|";
    cout << left << setw(20) << "Name" << "|";
    cout << left << setw(4) << "Plug" << endl;
    cout << "=========================================" << endl;
    cout << left << setw(12) << id << "|";
    cout << left << setw(20) << name << "|";
    cout << left << setw(4) << plug << endl;
    cout << "-----------------------------------------" << endl;

    return 0;
}