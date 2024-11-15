#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<iomanip>
//tentang string
using namespace std;
int main(){
	char kd[3];
	char nama[20]="";
	float harga=0;
	int jml,hasil= 0;
	cout<<setprecision(15);
	cout<<"penjualan komputer STMIK PENUSA\n";
	cout<<"--------------------------------------------------------------------------------\n";
	cout<<"input kode : ";
	cin>>kd;
	hasil = strcmp(kd, "PII");
	if (hasil==0)
	{
		strcpy(nama,"komp PENTIUM III");
		harga = 2500000;
	}
	hasil = strcmp(kd, "PIV");
	if (hasil==0)
	{
		strcpy(nama,"komp PENTIUM IV");
		harga = 3500000;
	}
	cout<<"nama :" << nama << endl;
	cout<<"harga :" << setw(9) << harga << endl;
	cout<<"jumlah jual :";
	cin>>jml;
	long tharga = jml * harga;
	cout<<"total harga :" << setw(9) << tharga << endl;
	cout<<"---------------------------------------------------------------------------------\n";
	return 0;
}
