#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    Stack S;
    createStack(S);
    int pilihan;
    infotype x;

    do {
        cout << "\nMENU STACK ARRAY" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Tampilkan" << endl;
        cout << "4. Balik Stack" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan bilangan: ";
                cin >> x;
                if (push(S, x))
                    cout << x << " berhasil di-push." << endl;
                else
                    cout << "Push ditolak: stack penuh (maks " << MAKS << " elemen)." << endl;
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
                balikStack(S);
                cout << "Stack dibalik." << endl;
                printInfo(S);
                break;
            case 5:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 5);

    return 0;
}