#include<iostream>
using namespace std;

 int main()
 {
 	
 	string namaBarang;
 	float harga,totalharga,diskon,totalbayar;
 	int jumlahjual;
 	
 	
 	cout<<"NamaBarang:";
 	cin>>namaBarang;
 	cout<<"Harga Barang:";
 	cin>>harga;
 	cout<<"Jumlah Jual:";
 	cin>>jumlahjual;
 	totalharga = harga*jumlahjual;
 	diskon=totalharga-diskon;
 	cout<<"PENJUALAN BARANG ELEKTRONIK"<<endl;
 	cout<<"Harga per Barang:";
 	cout<<"Total Harga:";
 	cout<<"diskon 10%:";
 	cout<<"Total Bayar: Rp"<<totalbayar<<endl;
 	return 0;
}
