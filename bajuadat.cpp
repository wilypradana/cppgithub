#include <iostream>
using namespace std;
int main()
{
    int ls, np, hup, hsp, tot, jmlh, kbln;
    int kode, mp;
    hsp = 5000;
    int up;
    cout << "=======usaha sewa pakaian adat======" << endl;
    cout << "1. pakaian adat jawa barat" << endl;
    cout << "2. pakaian adat jawa tengah" << endl;
    cout << "3. pakaian adat jawa timur" << endl;
    cout << "====================================" << endl;
    cout << "masukan pilihanmu: ";

    cin >> mp;
    switch (mp)
    {
    case 1:

        cout << "masukan ukuran pakaian adat(20,35,45,50): ";
        cin >> up;
        cout << "masukan lama sewa pakaian adat: ";
        cin >> ls;
        cout << "NAMA PAKAIAN ADAT:PAKAIAN ADAT JAWA BARAT " << endl;
        cout << "UKURAN PAKAIAN ADAT: " << up << endl;
        cout << "HARGA SEWA PERHARI: " << hsp << endl;
        tot = ls * hsp;
        cout << "JUMLAH SEWA YANG HARUS DIBAYAR: " << tot << endl;
        cout << "BAYAR SEKARANG: ";
        cin >> jmlh;
        if (jmlh < tot)
        {
            cout << "ups,jumlahnya kurang nih";
        }
        else
        {
            kbln = jmlh - tot;
            cout << "kembalian kamu: " << kbln;
        }
    }

    return 0;
}
