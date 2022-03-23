#include <iostream>
#include <cstring>

using namespace std;

#define diskon 0.10

int main ()
{
    int order, jumlah, subtotal, total = 0, j = 0;
    char list[100], ulang;
    int p1 = 0, p2 = 0, harga[2] = { 17000, 21000};
    string menu[2] = {"Ayam Goreng Rp17000" , "Ayam Bakar  Rp21000"};
    cout << "============================================" << endl;
    cout << "  HALO SELAMAT DATANG DI WARUNG MAKAN MALAM " << endl;
    cout << "============================================" << endl;
    cout << "      ~ Silahkan pilih orderan anda ~       " << endl;
    cout << endl;
    reuse:
    for (int i = 0; i <= 1; i++)
    {
        cout << "  [" << i+1 << "]   " << menu[i] << endl;
    }
    cout << endl;
    cout << "\t( Masukkan berdasarkan nomor )" << endl;
    cout << "  [-]\tPilih orderan anda\t\t: ";
    cin >> order;
    cout << "  [-]\tJumlah orderan\t\t\t: ";
    cin >> jumlah;

    switch(order)
    {
        case 1:
        strcpy (list,"Ayam Goreng");
        p1+=jumlah;
        break;

        case 2:
        strcpy (list,"Ayam Bakar");
        p2+=jumlah;
        j = 1;
        break;

        default:
        cerr << "\n[!][!]    MENU TIDAK TERDAFTAR      [!][!] " << endl;
        cout << " --- Silahkan order sesuai dengan menu ---\n" << endl;
        cout << endl;
        goto reuse;
        break;
    }
    cout << "  [#]\tAnda memilih " << list << endl;
    total = harga[j]*jumlah;
    cout << "  [-]\tHarga Total\t\t\t: Rp" << total << endl;
    if (total >= 45000)
    {
        cout << "Selamat Anda mendapatkan diskon sebesar : " << total*diskon << endl;
        subtotal = total*diskon;
        total = total - subtotal;
    }
    cout << "  [-]\tHarga setelah diskon \t\t: Rp" << total << endl;
    return 0;
}
