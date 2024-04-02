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
	
}