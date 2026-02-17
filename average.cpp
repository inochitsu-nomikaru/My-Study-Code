#include <iostream>
using namespace std;

main () {
    // Deklarasi variabel
    int x, hitung, total1, total2, min1, min2, max1, max2, rat1, rat2;
    // Inisialisasi array
    // Boleh diisi dengan nilai yang diinginkan
    int nilai1[4] = {100, 54, 75, 70};
    int nilai2[4] = {80, 65, 85, 65};

    // Inisialisasi variabel
    hitung = 0; x = 0; total1 = 0; total2= 0; min1 = nilai1[0]; min2 = nilai2[0]; max1 = nilai1[0]; max2 = nilai2[0];

    // Output nilai 1
    cout << "Nilai 1 : ";
    while (hitung < 4) {
        cout << nilai1[x] << " ";
        hitung++; x++;
    }

    // Inisialisasi variabel
    hitung = 0; x = 0;

    // Output nilai 2
    cout << endl << "Nilai 2 : ";
    while (hitung < 4) {
        cout << nilai2[x] << " ";
        hitung++; x++;
    }
    cout << endl << endl;
    hitung = 0; x = 0;

    // Hitung total dan nilai terendah/tertinggi
    while (hitung < 4) {
        total1 = total1 + nilai1[x];
        total2 = total2 + nilai2[x];

        if (nilai1[x] < min1) {
            min1 = nilai1[x];
        }
        if (nilai2[x] < min2) {
            min2 = nilai2[x];
        }

        if (nilai1[x] > max1) {
            max1 = nilai1[x];
        }
        if (nilai2[x] > max2) {
            max2 = nilai2[x];
        }
        x++; hitung++;
    }

    // Hitung rata-rata
    rat1 = total1 / 4;
    rat2 = total2 / 4;

    // Output hasil
    cout << "Rata Nilai 1 : " << rat1 << endl;
    cout << "Rata Nilai 2 : " << rat2 << endl;
    cout << endl;
    cout << "Nilai 1 Terendah : " << min1 << endl;
    cout << "Nilai 2 Terendah : " << min2 << endl;
    cout << endl;
    cout << "Nilai 2 Tertinggi : " << max1 << endl;
    cout << "Nilai 2 Tertinggi : " << max2 << endl;
}