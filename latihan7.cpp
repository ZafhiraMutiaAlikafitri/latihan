#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char namamhs [30],nim [10],nhuruf;
	float nhadir,ntugas,nuts,nuas,nakhir;
	
	cout<<"DAFTAR NILAI MAHASISWA"<<endl;
	cout<<"Mata Kuliah : Algoritma Pemrograman"<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"Nama Mahasiswa  :  ";
	cin>>namamhs;
	cout<<"NIM  : ";
	cin>>nim;
	cout<<"Nilai Hadir  :  ";
	cin>>nhadir;
	cout<<"NILAI UTS    :  ";
	cin>>nuts;
	cout<<"NILAI UAS    :  ";
	cin>>nuas;
	nakhir = (0.1*nhadir)+(0.15*ntugas)+(0.35*nuts)+(0.4*nuas);
	if(nhadir>=85 && nakhir<=100){
		nhuruf='A';
	} else if (nhadir>=70 && nakhir<=85){
		nhuruf='B'; 
	} else if (nhadir>=60 && nakhir<=70){
		nhuruf='C';
	} else if (nhadir>=50 && nakhir<=60){
		nhuruf='D';
	} else if (nhadir>=0 && nakhir<=50){
		nhuruf='E';
    } else{
    	nhuruf='-';
	}
	cout<<"Nilai Akhir = "<<nakhir<<endl;
	cout<<"Nilai Akhir = "<<nhuruf<<endl;
	return 0;
}
