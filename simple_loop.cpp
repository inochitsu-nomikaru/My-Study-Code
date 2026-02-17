#include <iostream>

using namespace std;

int main(){
 
    // Create a 8x8 grid of "*"
    int line_amount = 8;
    int repeat_amount = 8;
    
    // Print the grid
    for (int line = 0; line < line_amount; ++line) {
        for (int repeat = 0; repeat < repeat_amount; ++repeat) {
            cout << "*";
        } 
        cout << endl;
    }

    return 0;
}