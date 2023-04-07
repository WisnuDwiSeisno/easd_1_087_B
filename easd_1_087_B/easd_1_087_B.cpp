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
			cout << "\nMasukan Panjang array adalah 20" << endl;
	}

	cout << "\n===================" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n===================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "<" << (i + i) << ">";
		cin >> seis[i];
	}
}

