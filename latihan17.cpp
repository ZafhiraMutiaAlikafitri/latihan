#include<iostream>
using namespace std;

int main() {
	int nilai[10], total = 0;
	float rataRata;
	
	// input nilai
	for (int i = 0; i < 10; i++) {
		cout << "Masukan nilai ke-" << i + 1 << ": ";
		cin >> nilai[i];
		total += nilai[i]; //menghitung total
		 //total = total + nilai[i]
	}
	
	//menghitung rata-rata
	rataRata = total / 10.0;
	
	//menampilkan hasil
	cout << "Total nilai: " << total << endl;
	cout << "Rata-rata nilai: " << rataRata << endl;
	
	return 0;
}
