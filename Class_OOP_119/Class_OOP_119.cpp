#include <iostream>
using namespace std;

class mahasiswa {
public:
	string nim;
	string nama;
public: void cetak() {
	cout << "NIM = " << nim;
	cout << "\nNama = " << nama;
	}
};

class matakuliah {
private:
	string kode;
	string namaM;
	int sks;
public:
	void input() {
		cout << "masukkan kode matakuliah : ";
		cin >> kode;
		cout << "masukkan Nama matakuliah :";
		cin >> namaM;
		cout << "jumlah sks :";
		cin >> sks;
	}
void tampil() {
			cout << "kode matakuliah : " << kode;
			cout << "nama matakuliah : " << namaM;
			cout << "sks : " << sks;
		}
	};



int main() {
	mahasiswa mhs1;
	matakuliah mk;

	cout << "masukkan nim : ";
	cin >> mhs1.nim;
	cout << " masukkan nama : ";
	cin >> mhs1.nama;
	mhs1.cetak();

	mk.input();
	mk.tampil();
}