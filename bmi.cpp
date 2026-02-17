#include <iostream>
#include <string>
using namespace std;

// Function to calculate BMI
float calculate(float *weight, float *height, int count) {
    int x = 0; string category;

    // Loop to get weight and height
    while (x < count) {
        cout << "Enter Weight of Person #" << x+1 << " (kg) : "; cin >> weight[x];
        cout << "Enter Height of Person #" << x+1 << " (cm) : "; cin >> height[x];
        x++;
    }

    cout << endl;
    x = 0;

    // Loop to calculate and print BMI
    while (x < count) {
        float bmi = weight[x] / ((height[x]/100)*(height[x]/100));
        if (bmi < 18.5) category = "Underweight";
        else if (bmi >= 18.5 && bmi < 24) category = "Normal";
        else if (bmi >= 24 && bmi < 27) category = "Overweight";
        else category = "Obese";
        cout << "Person #" << x+1 << " Weight : " << weight[x] << "kg" << endl;
        cout << "Person #" << x+1 << " Height : " << height[x] << "cm" << endl;
        cout << "BMI : " << bmi << endl;
        cout << "Category : " << category << endl;
        cout << endl;
        x++;
    }
}

int main() {
    int count;

    // Get the number of people to be weighed
    cout << "Number of people to be weighed: "; cin >> count;
    float weight[count]; float height[count];

    // Call the function to calculate and print BMI
    calculate(weight, height, count);
    return 0;
}