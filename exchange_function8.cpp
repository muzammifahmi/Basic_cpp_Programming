#include <iostream>
using namespace std;

int main()
{
    string nama_hari[] = {"senin", "selasa", "rabu", "kamis", "jumat", "sabtu", "minggu", "kode hari SALAH!"};
    string *pilih;
    int hari, x;

    cout << "hari (1-7) : ";
    cin >> hari;

    if (hari >= 1 && hari <= 7)
    {
        x = hari - 1;
        pilih = nama_hari;
        cout << "hari ke-" << hari << " adalah hari " << *(pilih + x) << endl;
    }
    else
    {
        x = 7;
        pilih = nama_hari;
        cout << "hari ke-" << hari << " adalah hari " << *(pilih + x) << endl;
    }

    return 0;
}
