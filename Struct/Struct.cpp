#include <iostream>
using namespace std;

struct Mahasiswa	//Membuat struktur mahasiswa untuk menyimpan data data dari seeorang mahasiswa
{
	string nim;
	string nama;
	string alamat;
	string umur;
};

int main()
{
	Mahasiswa mhs;					//membuat objek/variabel untuk mewakili struktur mahasiswa
	cout << "Nomor Mahasiswa : ";
	cin >> mhs.nim;
	cout << "Nama Mahasiswa : ";
	cin >> mhs.nama;
	cout << "Alamat Mahasiswa : ";
	cin >> mhs.alamat;
	cout << "Umur Mahasiswa : ";
	cin >> mhs.umur;
}