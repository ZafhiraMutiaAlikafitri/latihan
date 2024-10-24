#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    cout << fixed << setprecision(2);
    const int maxpgw = 20;
    string namapeg[maxpgw], gol[maxpgw], kode[maxpgw], jbtn[maxpgw];
    float gaji[maxpgw], tnjngn[maxpgw], pinjaman[maxpgw], pajak[maxpgw], tolgaktr[maxpgw], tolgabrh[maxpgw];
    char lagi;
    int nopepgw = 0;
    float total_biaya = 0;

    cout << "GAJI PEGAWAI PT. TELKOM\n--------------------------------------------------------\n";

    do {
        cout << "Pegawai ke-" << nopepgw + 1 << endl;
        cout << "Nama Pegawai              : ";
        cin >> namapeg[nopepgw]; 
        cout << "Golongan                  : ";
        cin >> gol[nopepgw];
        cout << "Kode Jabatan              : ";
        cin >> kode[nopepgw];

        if (gol[nopepgw] == "Ia") {
            gaji[nopepgw] = 500000;
        } else if (gol[nopepgw] == "IIa") {
            gaji[nopepgw] = 750000;
        } else if (gol[nopepgw] == "IIIa") {
            gaji[nopepgw] = 1000000;
        } else if (gol[nopepgw] == "Ib") {
            gaji[nopepgw] = 1500000;
        } else if (gol[nopepgw] == "IIb") {
            gaji[nopepgw] = 1750000;
        } else if (gol[nopepgw] == "IIIb") {
            gaji[nopepgw] = 2500000;
        } else {
            cout << "Golongan tidak dikenal!" << endl;
            continue;
        }

        // Mengatur jabatan dan tunjangan berdasarkan kode
        if (kode[nopepgw] == "Dir") {
            jbtn[nopepgw] = "Direktur";
            tnjngn[nopepgw] = 4500000;
        } else if (kode[nopepgw] == "Sek") {
            jbtn[nopepgw] = "Sekretaris";
            tnjngn[nopepgw] = 3000000;
        } else if (kode[nopepgw] == "Wak") {
            jbtn[nopepgw] = "Wakil Direktur";
            tnjngn[nopepgw] = 3750000;
        } else if (kode[nopepgw] == "Stf") {
            jbtn[nopepgw] = "Staf Administrasi";
            tnjngn[nopepgw] = 2000000;
        } else {
            cout << "Kode jabatan tidak dikenal!" << endl;
            continue;
        }

        cout << "Pinjaman : "; 
        cin >> pinjaman[nopepgw];

        pajak[nopepgw] = gaji[nopepgw] * 0.05;
        tolgaktr[nopepgw] = gaji[nopepgw] + tnjngn[nopepgw];
        tolgabrh[nopepgw] = tolgaktr[nopepgw] - pinjaman[nopepgw] - pajak[nopepgw];

        // Output detail gaji pegawai
        cout << left;
        cout << setw(20) << "Jabatan: " << jbtn[nopepgw] << endl;
        cout << setw(20) << "Gaji: " << gaji[nopepgw] << endl;
        cout << setw(20) << "Tunjangan: " << tnjngn[nopepgw] << endl;
        cout << setw(20) << "Pinjaman: " << pinjaman[nopepgw] << endl;
        cout << setw(20) << "Pajak: " << pajak[nopepgw] << endl;
        cout << setw(20) << "Total Kotor: " << tolgaktr[nopepgw] << endl;
        cout << setw(20) << "Total Bersih: " << tolgabrh[nopepgw] << endl;
        cout << "--------------------------------------------------------\n";
        
        total_biaya += tolgabrh[nopepgw];

        nopepgw++;
        
        cout << "Lanjut? [Y/T]: "; 
        cin >> lagi;
        cout << endl;

    } while (lagi == 'Y' || lagi == 'y' && nopepgw < maxpgw);
    
    cout << left;
    cout << setw(5) << "No"
         << setw(15) << "Nama"
         << setw(10) << "Golongan"
         << setw(15) << "Jabatan"
         << setw(15) << "Gaji"
         << setw(15) << "Tunjangan"
         << setw(15) << "Pinjaman"
         << setw(15) << "Pajak"
         << setw(15) << "Gaji Kotor"
         << setw(15) << "Gaji Bersih" << endl;

    cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < nopepgw; i++) {
        cout << setw(5) << i + 1
             << setw(15) << namapeg[i]
             << setw(10) << gol[i]
             << setw(15) << jbtn[i]
             << setw(15) << gaji[i]
             << setw(15) << tnjngn[i]
             << setw(15) << pinjaman[i]
             << setw(15) << pajak[i]
             << setw(15) << tolgaktr[i]
             << setw(15) << tolgabrh[i] << endl;
    }

    cout << endl;
    cout << "Total biaya yang dibayar perusahaan ke semua pegawai:                                                               Rp " << total_biaya << endl;
    cout << endl;

    return 0;
}
