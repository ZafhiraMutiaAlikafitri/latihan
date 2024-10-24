#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	const int maxKaryawan = 50;
	string namaKaryawan[maxKaryawan];
	int jamKerja[maxKaryawan];
	float gajiPerjam[maxKaryawan];
	float totalGaji[maxKaryawan];
	int jumlahKaryawan = 0;
	char lagi;
	
	
	do {
		cout << "Masukan nama karyawan ke-" << jumlahKaryawan + 1 << ": ";
		cin >> namaKaryawan[jumlahKaryawan];
		cout << "Masukan jumlah jam kerja" << namaKaryawan[jumlahKaryawan] << ": ";
		cin >> jamKerja[jumlahKaryawan];
		cout << "Masukan gaji per jam untuk " << namaKaryawan[jumlahKaryawan] << ": ";
		cin >> gajiPerjam[jumlahKaryawan];
		
		totalGaji[jumlahKaryawan] = jamKerja[jumlahKaryawan] * gajiPerjam[jumlahKaryawan];
		
		jumlahKaryawan++;
		
		cout << "Apakah anda ingin input data lagi? (Y/T): ";
		cin >> lagi;
		
	} while (lagi == 'y' || lagi == 'Y');
	
	
	  cout <<
	"\n=========================================================================\n";
	  cout << setw(15) << left << "Nama"
	       << setw(15) << "Jam Kerja"
	       << setw(15) << "Gaji Per Jam"
	       << setw(15) << "Gaji Total" << endl;
	  cout <<
    "===========================================================================\n";
	  for (int i = 0; i < jumlahKaryawan; i++) {
	  	  cout << setw(15) << left << namaKaryawan[i]
	  	       << setw(15) << jamKerja[i]
	           << setw(15) << gajiPerjam[i]
	           << setw(15) << totalGaji[i] << endl;
	           
	  }
	  
	  cout <<
	"===========================================================================\n";
	
	 return 0;     
}
