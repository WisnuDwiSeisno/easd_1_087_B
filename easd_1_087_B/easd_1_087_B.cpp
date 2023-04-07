#include <iostream>
using namespace std;

int seis[107];
int n;

void input() {
	while (true) {
		cout << "Masukan panjang element array : ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMasukan Panjang array adalah 107" << endl;
	}

	cout << "\n===================" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n===================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "<" << (i + i) << ">";
		cin >> seis[i];
	}
}

void mergesort(int low, int mid,int high) {
	int mid, i, WU, k;
	if (low >= high)
		return;

	mid = low + high / 2;

	i = low;
	WU = mid + 1;
	k = low;

	while (i > mid || WU > high) {
		if (seis[i] <= seis[WU]) {

		}
	}
}


//1.	Jelaskan, mengapa suatu algorithma dibutuhkan untuk menyelesaikan suatu masalah.
// Karena memberikan efisiensi yang maksimum tentunya dengan memilih struktur data yang sesuai dan tepat.
//2.	Dalam algorithma, di klassifikasikan menjadi 2 data struktur.Sebutkan 2 data struktur tersebut.dynamic contohnya Linked List, dan Static contohnya Array
//3.	Untuk mengurkur sebuah efisiensi waktu suatu algoritma dibutuhkan beberapa faktor.Sebutkan faktor - faktor yang mempengaruhi mempengaruhi efisiensi waktu eksekusi suatu program!Speed of machine, compiler, operating systems, Proggramming language, size of the input
//4.	Dari 6 algorithma yang sudah dipelajari.Algortihma manakah yang paling mudah dipahami dan diimplementasikan untuk mengurutkan data yang ukurannya besar.Jelaskan kenapa anda memilih itu.Merge sort, karena efektif waktu nya O(n log n) cara kerja nya yang membuat lebih cepat yaitu di jadikan satu per satu, tidak ada worst case, jadi semua kondisi waktu nya tetap O(n log n).
//5.	Sebutkan dari algorithma yang telah dipelajari mana yang termasuk kedalam Quadratic dan mana yang termasuk kedalam Loglinear.Yang termasuk quadratic O(n ^ 2) yaitu bubble sort dan insertion sort sedangkan loglinear O(n log n) quick sort, merge sort.
