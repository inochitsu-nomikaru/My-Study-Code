#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

//constant value that don't change anything happened except play
const float min_pos = -10;
const float max_pos = 10;
const float speed = 1;
bool play = true;

//input handler
void input(char& key, float& x, float& z) {
    cout << "Masukin input WASD" << endl << "Input : ";
    key = getch();
    key = tolower(key);
    switch (key) {
        case 'w': z += speed; break;
        case 's': z -= speed; break;
        case 'a': x -= speed; break;
        case 'd': x += speed; break;
        case 27: mulai = false; break;
    }
}

//collosion checker
void collision(float& x, float& z){
    if (x < min_pos) {
        x = min_pos;
    }
    if (x > max_pos) {
        x = max_pos;
    }
    if (z < min_pos) {
        z = min_pos;
    }
    if (z > max_pos) {
        z = max_pos;
    }
}

//trigger any logic
void logic(float& x, float& z){
    collision(x, z);
}

//how the code will be display
void display(float& x, float& z){
    for (float i = max_pos; i >= min_pos; i -= 1) {
        for (float j = min_pos; j <= max_pos; j += 1) {
            if (i == z && j == x) {
                cout << "X";
            } else {
                cout << "o";
            }
        }
        cout << endl;
    }
}

//how code will be display
void render(char& key, float& x, float& z){
    system("cls");
    cout << "HKey that you click" << key << endl;
    cout << "X : " << x << endl;
    cout << "Z : " << z << endl;
    display(x, z);
}

//main code
int main() {
    char key;
    float x = 0, z = 0;

    //three main loop
    while (play) {
    input(key, x, z);
    logic(x, z);
    render(key, x, z);
    }

}

