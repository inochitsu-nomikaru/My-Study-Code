#include <iostream>
using namespace std;

// Variabel global jumlah buku
int jumlah = 0;

// Fungsi untuk menambahkan buku
void input(string judul[], string pengarang[], string tahunterbit[]) {
    int jmlInput;
    // Input jumlah buku yang ingin diinput
    cout << "Masukkan jumlah buku yang ingin diinput : ";
    cin >> jmlInput;
    cin.ignore();

    // Input data buku
    for (int x = 0; x < jmlInput; x++) {
        cout << "Masukkan judul : ";
        getline(cin, judul[jumlah]);

        cout << "Masukkan pengarang : ";
        getline(cin, pengarang[jumlah]);

        cout << "Masukkan tahun terbit : ";
        getline(cin, tahunterbit[jumlah]);

        // Tambah jumlah buku yang tersimpan
        jumlah++;
    }
}

// Fungsi untuk menampilkan daftar buku
void tampil(string judul[], string pengarang[], string tahunterbit[]) {
    if (jumlah == 0) {
        cout << "Belum ada buku.\n";
        return;
    }

    // Tampilkan daftar buku
    cout << "\n=== DAFTAR BUKU ===\n";
    for (int x = 0; x < jumlah; x++) {
        cout << x + 1 << ". "
             << judul[x] << " | "
             << pengarang[x] << " | "
             << tahunterbit[x] << endl;
    }
}

// Fungsi untuk menghapus buku
void hapus(string judul[], string pengarang[], string tahunterbit[]) {
    tampil(judul, pengarang, tahunterbit);

    // Hapus buku
    int hapus;
    cout << "Pilih nomor buku yang ingin dihapus : ";
    cin >> hapus;
    cin.ignore();
    hapus--;

    // Validasi nomor buku
    if (hapus < 0 || hapus >= jumlah) {
        cout << "Nomor tidak valid!\n";
        return;
    }

    // Geser elemen setelahnya
    for (int x = hapus; x < jumlah - 1; x++) {
        judul[x] = judul[x+1];
        pengarang[x] = pengarang[x+1];
        tahunterbit[x] = tahunterbit[x+1];
    }

    // Kurangi jumlah buku
    jumlah--; 
    cout << "Buku berhasil dihapus!\n";
}

// Fungsi untuk mencari buku
void cari(string judul[], string pengarang[], string tahunterbit[]) {
    cin.ignore();
    string nama;
    cout << "Masukkan judul buku : ";
    getline(cin, nama);

    // Cari buku
    bool ditemukan = false;

    for (int x = 0; x < jumlah; x++) {
        if (judul[x] == nama) {
            cout << "Ditemukan: " << judul[x] << " | " << pengarang[x] 
                 << " | " << tahunterbit[x] << endl;
            ditemukan = true;
        }
    }

    // Buku tidak ditemukan
    if (!ditemukan) {
        cout << "Buku tidak ditemukan.\n";
    }
}

int main() {
    // Variabel
    int menu;
    bool kond = true;
    string judul[100];
    string pengarang[100];
    string tahunterbit[100];

    // Loop menu mengguanakan do while
    do {
        cout << "\n=== MENU ===\n";
        cout << "1. Tambah Buku\n";
        cout << "2. Lihat Daftar Buku\n";
        cout << "3. Hapus Buku\n";
        cout << "4. Cari Buku\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu : ";
        cin >> menu;

        switch (menu) {
            // Tambah buku
            case 1:
                input(judul, pengarang, tahunterbit);
                break;
            // Lihat daftar buku
            case 2:
                tampil(judul, pengarang, tahunterbit);
                break;
            // Hapus buku
            case 3:
                hapus(judul, pengarang, tahunterbit);
                break;
            // Cari buku
            case 4:
                cari(judul, pengarang, tahunterbit);
                break;
            // Keluar
            case 5:
                cout << "Keluar program. Terima kasih!\n";
                kond = false;
                break;
            // Pilihan tidak valid
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (kond);

return 0;
}