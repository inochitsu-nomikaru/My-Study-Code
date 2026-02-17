#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int menu;

    cout << "====================" << endl;
    cout << left << setw(8) << "|";
    cout << "Menu";
    cout << right << setw(8) << "|" << endl;
    cout << "====================" << endl;
    cout << left << setw(8) << "|";
    cout << right << setw(8) << "|" << endl;

    cout << left << setw(10) << "|1. Shopping";
    cout << right << setw(9) << "|" << endl;
    cout << left << setw(10) << "|2. Parking";
    cout << right << setw(10) << "|" << endl;
    cout << left << setw(10) << "|3. Exit";
    cout << right << setw(10) << "|" << endl;

    cout << "====================" << endl;

    cout << "Select 1-3 : ";
    cin >> menu;

    switch (menu) {
        case 1: {
            float price;
            float discount;
            float activeDiscount;
            float activePrice;
            float finalPrice;
            char isActiveChar = 'n';
            string description;
            string activeDescription;

            cout << endl << "Enter Total Shopping Amount : ";
            cin >> price;
            cout << "Are you an active student? (y/n) : ";
            cin >> isActiveChar;

            if (price >= 200000) {
                discount = price * 0.25;
                finalPrice = price - discount;
                description = "25%";
            } else if (price >= 100000) {
                discount = price * 0.2;
                finalPrice = price - discount;
                description = "20%";
            } else if (price >= 50000) {
                discount = price * 0.1;
                finalPrice = price - discount;
                description = "10%";
            } else {
                discount = 0;
                finalPrice = price;
                description = "0%";
            }

            if (isActiveChar == 'y' && price >= 200000) {
                activeDiscount = finalPrice * 0.05;
                activePrice = finalPrice - activeDiscount;
                activeDescription = "5%";
            } else {
                activeDiscount = 0;
                activePrice = finalPrice;
                activeDescription = "0%";
            }

            cout << endl << "===========================================" << endl;
            cout << left << setw(19) << "|";
            cout << "Shopping Receipt";
            cout << right << setw(15) << "|";
            cout << endl << "===========================================" << endl;

            cout << left << setw(30) << "| Total Before Discount" << ": Rp." << price << endl;
            cout << left << setw(30) << "| Main Discount" << ": Rp." << discount << " / " << description << endl;
            cout << left << setw(30) << "| Active Student Discount" << ": Rp." << activeDiscount << " / " << activeDescription << endl;
            cout << left << setw(30) << "| Total to Pay" << ": Rp." << activePrice << endl;
            cout << "===========================================" << endl;
            cout << "Please Come Again!" << endl;
            break;
        }

        case 2: {
            int vehicleType;
            int duration;
            int baseFee;
            int totalFee;
            string vehicleName;
            string status;

            cout << "Enter Vehicle Type (1. Motorcycle/2. Car) : ";
            cin >> vehicleType;
            if (vehicleType >= 3) {
                cout << endl << "What kind of vehicle is that? Are you riding a dinosaur?" << endl;
                break;
            }
            cout << "Parking Duration (Hours) : ";
            cin >> duration;

            if (vehicleType == 1) {
                vehicleName = "Motorcycle";
                baseFee = duration * 2000;
            } else if (vehicleType == 2) {
                vehicleName = "Car";
                baseFee = duration * 5000;
            }

            if (duration >= 6) {
                totalFee = baseFee + 10000;
            } else {
                totalFee = baseFee;
            }

            if (duration >= 10) {
                status = "You've been parking for too long, boss";
            } else {
                status = "Normal Parking";
            }

            cout << endl << "===========================================" << endl;
            cout << left << setw(18) << "|";
            cout << "Parking Receipt";
            cout << right << setw(17) << "|";
            cout << endl << "===========================================" << endl;
            cout << left << setw(30) << "| Vehicle Type" << ": " << vehicleName << endl;
            cout << left << setw(30) << "| Duration (Hours)" << ": " << duration << " Hours" << endl;
            cout << left << setw(30) << "| Base Fee" << ": Rp." << baseFee << endl;
            cout << left << setw(30) << "| Total to Pay" << ": Rp." << totalFee << endl;
            cout << left << setw(30) << "| Status" << ": " << status << endl;
            cout << "===========================================" << endl;
            cout << "Please Come Again!" << endl;
            break;
        }

        case 3:
            cout << endl << "You have exited the system." << endl;
            break;

        default:
            cout << endl << "Menu Not Available!" << endl;
            break;
    }

    return 0;
}