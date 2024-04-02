#include <iostream>
using namespace std;

struct DetailAlamat
{
	string desa;
	string kota;
};

struct Mahasiswa	//deklarasi struktur mahasiswa
{
	string nim;
	string nama;
	DetailAlamat alamat;	//struktur lain yang menyimpan informasi terkait alamat, yaitu desa dan kota
	string umur;
};

int main()				// fungsi main, titik masuk utama dari program yang akan dieksekusi terlebih dahulu saat program dijalankan
{
	Mahasiswa mhs;
	cout << "Nomor Mahasiswa : ";
	cin >> mhs.nim;
	cout << "Nama Mahasiswa : ";
	cin >> mhs.nama;

	cout << "Alamat Mahasiswa : " << endl;
	cout << "\t Nama Desa : ";
	cin >> mhs.alamat.desa;
	cout << "\t Nama Kota : ";
	cin >> mhs.alamat.kota;

	cout << "Umur Mahasiswa : ";
	cin >> mhs.umur;
}