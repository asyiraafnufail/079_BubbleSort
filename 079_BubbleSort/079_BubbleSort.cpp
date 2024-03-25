// bubble sort adalah membandingkan elemen dari terbesar dengan terkecil

#include <iostream>
#include <string>
using namespace std;

int rafa[79];	// Deklarasi variabel global array rafa dengan ukuran 79
int n;			// Deklarasi variabel global n untuk menyimpan banyaknya elemen array

void input() { // Prosedur untuk input
    while (true) {
        cout << "Masukkan banyaknya elemen pada array (maksimal jumhlah 79): ";
        cin >> n;

        if (n <= 79) // jika n kurang dari / sama dengan 79
            break; // keluar dari loop
        else // jika n lebih dari 79
            cout << "\nArray hanya dapat mempunyai maksimal 79 elemen.\n";
    }

    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) { // // looping dengan 1 dimulai dari 0 hingga n-1
		cout << "data ke-" << (i + i) << "; "; // output ke layar
        cin >> rafa[i]; // output dari user/pengguna
    }
}


void bubbleSortArray() { // procedur untuk mengurutkan array dengan metode bubble sort
	int pass = 1; // step 1

	do {
		for (int j = 0; j <= n - 1 - pass; j++) { // step 2
			if (rafa[j] > rafa[j + 1]) { // step 2
				int temp;
				temp = rafa[j];
				rafa[j] = rafa[j + 1];
				rafa[j + 1] = temp;
			}
		}
		pass = pass + 1; // step 4
		cout << "\nPass" << pass - 1 << "; "; // number of pass
		for (int k = 0; k < n; k++) {
			cout << rafa[k] << " "; // menampilkan data pada number of pass
		
		}
		cout << endl;
	} while (pass <= n - 1); // step 5
}



void display() {
    cout << endl;
    cout << "================================" << endl;
    cout << "Elemen Array yang telah tersusun" << endl;
    cout << "================================" << endl;
    cout << endl;

    for (int j = 0; j < n; j++) {
        cout << rafa[j];
        if (j < n - 1)
            cout << "-->";
    }

    cout << endl;
    cout << endl;
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;
}

int main() {
    input();
    bubbleSortArray();
    display();

    system("pause");
    return 0;
}