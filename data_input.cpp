#include <iostream>
using namespace std;

// Function to count the total and average score
void count(float data, float total, float amount, float i, float score) {
        for(i = 1; i <= data; i++) {
        cout << "Input Score " << i << " : ";
        cin >> score;
        total = total + score;
        amount = total / data;
        }
        cout << endl << "Total Score : " << total;
        cout << endl << "Average Score : " << amount;
}

// Main function
main() {
    // Variable declaration
    float data;
    float total;
    float amount;
    float i;
    float score;
    amount = 1;
    total = 0;

    // Input data
    cout << "Input Data You Want To Use : "; 
    cin >> data;

    // Call function
    count(data, total, amount, i, score);
}