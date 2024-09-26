#include<iostream>
#include<string>
using namespace std;

int main()
{
int gajiperjam=500,gajiharian=0,jamkerja=0,jambonus=7;
	cout<<"Gaji Perjam : "<<gajiperjam<<endl;
	cin>>gajiperjam;
	cout<<"Masukan Jumlah/Lama Jam Kerja : ";
	cin>>jamkerja;
	gajiharian=jamkerja*gajiperjam;
	cout<<"Gaji Pokok: "<<gajiharian<<endl;
	switch(jamkerja > jambonus){
	case true : {
		break;
	int jamsisa=jamkerja-jambonus;
	int gajilembur=(int)(jamsisa*1.5*gajiperjam);
	gajiharian+=gajilembur;
	cout<<"Gaji Lembur : "<<gajilembur<<endl;
}
}
    cout<<"Total Gaji Harian Pegawai : "<<gajiharian;
}
