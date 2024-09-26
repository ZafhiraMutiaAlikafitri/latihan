//program penjualan barang elektronik
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char nbrg[20],harga[20],jumlahjual[20],diskon[5];
	float gaji,pajak,pinjaman,gaber,tobar=0;
	
	cout<<"nama barang = ";
	cin>>nbrg;
	cout<<"harga ";
	cin>>harga;
	cout<<"jumlah jual";
	cin>>jumlahjual;
	cout<<"total harga"<<endl;
	cout<<"diskon";
	cin>>diskon;
	tobar=gaji-(pinjaman+pajak);
	cout<<"total bayar" <<tobar<<endl;
	return 0;
}
