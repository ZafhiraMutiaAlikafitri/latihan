#include<iostream>
using namespace std;

int main() {
	int jumlahData, jumlahBarang, totalPenjualan = 0;
	
	cout<<"Masukan Jumlah data ";
	cin>>jumlahData;
	
	for (int i = 1; 1 <= jumlahData; i++){
		cout<<"Masukan jumlah barang yang terjual di toko " << i << ":";
		cin>>jumlahBarang;
		
		//totalpenjualan += jumlahbarang;
	}
	cout<<"Total barang yang terjual di toko adalah: " <<totalPenjualan<<endl;
	
	return 0;
}
