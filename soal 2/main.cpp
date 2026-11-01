#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    stack S;
    createStack(S);
    int pilihan;
    infotype x;

    do {
        cout << "\nMENU STACK POINTER" << endl;
        cout << "1. Tambah Terurut" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Tampilkan" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan bilangan: ";
                cin >> x;
                pushAscending(S, x);
                cout << x << " berhasil ditambahkan." << endl;
                break;
            case 2:
                if (pop(S, x))
                    cout << "Nilai yang di-pop: " << x << endl;
                else
                    cout << "Pop ditolak: stack kosong." << endl;
                break;
            case 3:
                printInfo(S);
                break;
            case 4:
                clearStack(S);
                cout << "Semua node dilepas. Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 4);

    return 0;
}