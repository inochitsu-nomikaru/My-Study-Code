#include <iostream>
#include <string>
using namespace std;

// Function to check the number of digits
int countDigits(int n) {
    int temp = n;
    int count = 0;
    while (temp > 0) {
        temp = temp / 10;
        count++;
    }
    return count;
}

// Function to find the largest number
int findMax(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

// Function to calculate BMI
float calculateBMI(float height, float weight) {
    float result;
    result = weight / (height * height);
    return result;
}

int main() {
    // Menu
    int menuOption, repeat = 1;
    while (repeat == 1) {
        cout << "--Select Menu--" << endl 
             << "1. Check Number of Digits" << endl 
             << "2. Check Largest Number" << endl 
             << "3. Calculate BMI" << endl 
             << "4. Exit" << endl;
        cout << "Selection: "; cin >> menuOption;

        switch (menuOption) {
            // Case Check Number of Digits
            case 1 : {
                int number;
                cout << "Check Number of Digits" << endl;
                cout << "Enter a number > 0: "; cin >> number;
                int result = countDigits(number);
                if (result <= 0) {
                    cout << "Please... Input must be greater than 0!" << endl << endl;
                } else {
                    cout << "Number of Digits: " << result << endl << endl;
                }
                break;
            }

            // Case Check Largest Number
            case 2 : {
                int num1, num2;
                cout << "Check Largest Number" << endl;
                cout << "Enter the first number: "; cin >> num1;
                cout << "Enter the second number: "; cin >> num2;
                int maxNum = findMax(num1, num2);
                cout << "The largest number is: " << maxNum << endl << endl;
                break;
            }

            // Case Calculate BMI
            case 3: {
                float height, weight; string condition;
                cout << "BMI Calculator" << endl;
                cout << "Enter Height (m): "; cin >> height;
                cout << "Enter Weight (kg): "; cin >> weight;
                float bmiValue = calculateBMI(height, weight);
                if (bmiValue < 18.5) {
                    condition = "(Underweight)";
                } else if (bmiValue >= 18.5 && bmiValue < 25) {
                    condition = "(Normal)";
                } else if (bmiValue >= 25 && bmiValue < 30 ) {
                    condition = "(Overweight)";
                } else if (bmiValue >= 30) {
                    condition = "(Obese)";
                }

                if (bmiValue > 0) {
                    cout << "Your BMI is: " << bmiValue << " " << condition << endl << endl;
                } else {
                    cout << "That's nonsense, negative values are not allowed. Trying to be a hot air balloon? :v" << endl << endl;
                }
                break;
            }

            // Case Exit
            case 4: {
                cout << "You have exited the menu." << endl;
                repeat = 0;
                break;
            }

            default: {
                cout << "Menu option not available!" << endl << endl;
                break;
            }
        }
    }
    return 0;
}