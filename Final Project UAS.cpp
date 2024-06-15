// Final Project UAS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void header();
void daftarJurusan();
void jurusan();
void daftarKelas();
void kelas();
void mangkat();
void daftarJam();
void pilihJam();
void dafHari();
void tiket();
void bayar();
void footer();

int harga, pilihan, jam, jmlTiket, uang, sisaKurang, no;
string ojurusan, tamJam, tamKls, otHari, nama;


int main() {
	char ulangi;
	int i = 0;
	do {

		cout << "\n\n\t\t================== System Pembelian Tiket Bus =======================+\n\n";
		cout << "Masukkan Nama      :";
		cin >> nama;
		cout << "masukkan no telepon:";
		cin >> no;
		cout << endl;
		cout << "\t  Jurusan Bus";


		daftarJurusan();
		jurusan();
		system("cls");
		daftarKelas();
		kelas();
		system("cls");
		dafHari();
		mangkat();
		tiket();
		system("cls");
		daftarJam();
		pilihJam();
		system("cls");

		header();
		cout << "\n\nNama\t:" << nama;
		cout << "\nNo. HP\t:" << no;
		cout << "\njurusan\t:" << ojurusan;
		cout << "\nKelas\t:" << tamKls;
		cout << "\nJam\t:" << tamJam;
		cout << "\nHari\t:" << otHari;
		cout << "\nTotal\t:" << harga << endl;
		cout << "\n+================================================+\n";
		bayar();

		cout << "Apakah Mau Membeli Lagi ?:";
		cout << "Jawab (y/t) :";
		cin >> ulangi;
		i++;
	} while (ulangi == 'y' || ulangi == 'Y');

	system("cls");
	header();
	cout << "\n\nNama\t:" << nama;
	cout << "\nNo. HP\t:" << no;
	cout << "\njurusan\t:" << ojurusan;
	cout << "\nKelas\t:" << tamKls;
	cout << "\nJam\t:" << tamJam;
	cout << "\nHari\t:" << otHari;
	cout << "\nTotal\t:" << harga << endl;
	cout << "\n+================================================+\n";
	footer();
	cout << "\n\n\n\n";
}


void daftarJurusan() {
	cout << "\n+-------------------------------------+";
	cout << "\n| No.|  Pilih Jurusan    |   Harga    |";
	cout << "\n|-------------------------------------|";
	cout << "\n|  1.|  Jogja-Magelang   | Rp 60.000  |";
	cout << "\n|  2.|  Jogja-Semarang   | Rp 110.000 |";
	cout << "\n|  3.|  Jogja-Kebumen    | Rp 90.000  |";
	cout << "\n+-------------------------------------+\n";
}
//harga 1 ng kene 
void jurusan() {


	while (true) {
		cout << "Pilih Jurusan :";
		cin >> pilihan;

		switch (pilihan)
		{
		case 1:
			ojurusan = "Jogja-Magelang";
			harga = 60000;
			cout << "Anda Memilih Jurusan :";
			cout << "\n+-------------------------------------+";
			cout << "\n|  1.|  Jogja-Magelang   | Rp 60.000  |";
			cout << "\n+-------------------------------------+";
			break;
		case 2:
			ojurusan = "Jogja-Semarang";
			harga = 110000;
			cout << "Anda Memilih Jurusan :";
			cout << "\n+-------------------------------------+";
			cout << "\n|  2.|  Jogja-Semarang   | Rp 110.000 |";
			cout << "\n+-------------------------------------+";
			break;
		case 3:
			ojurusan = "Jogja-Kebumen";
			harga = 90000;
			cout << "Anda Memilih Jurusan :";
			cout << "\n+-------------------------------------+";
			cout << "\n|  3.|  Jogja-Kebumen    | Rp 90.000  |";
			cout << "\n+-------------------------------------+";
			break;
		default:
			cout << "masukan anda salah,mohon ulangi !!\n\n";
			continue;
		}

		break;

	}

}
void header() {
	cout << "\n+================================================+";
	cout << "\n|          Agen Pembelian Tiket BUS              |";
	cout << "\n|                 MEKAR JAYA                     |";
	cout << "\n|     Jl.Perkutut NO.2, Kotabaru, Yogyakarta     |";
	cout << "\n+================================================+";
}
void daftarKelas() {
	cout << "\n+--------------------------------------------------------+";
	cout << "\n| No.|  Pilih Kelas  |        Harga & Benefit            |";
	cout << "\n|--------------------------------------------------------|";
	cout << "\n|  1.|  Ekonomi      | Rp 0 + Minum                      |";
	cout << "\n|  2.|  VIP          | Rp 30.000 + Makan & Minum         |";
	cout << "\n|  3.|  VVIP         | Rp 50.000  + Makan, Minum, & AC   |";
	cout << "\n+--------------------------------------------------------+\n";
}
void kelas() {
	int kls;
	while (true) {
		cout << "\nPilih Grade Bus :";
		cin >> kls;
		switch (kls) {
		case 1:
			harga += 0;
			tamKls = "Ekonomi | Rp 0 + Minum";
			cout << "Anda Memilih Grade :";
			cout << "\n+--------------------------+";
			cout << "\n|  Ekonomi | Rp 0 + Minum  |";
			cout << "\n+--------------------------+";
			break;
		case 2:
			harga += 30000;
			tamKls = "VIP | Rp 30.000 + Makan & Minum";
			cout << "Anda Memilih Grade :";
			cout << "\n+----------------------------------+";
			cout << "\n|  VIP | Rp 30.000 + Makan & Minum	|";
			cout << "\n+----------------------------------+";
			break;
		case 3:
			harga += 50000;
			tamKls = "VVIP | Rp 50.000  + Makan, Minum, & AC";
			cout << "Anda Memilih Grade :";
			cout << "\n+-----------------------------------------+";
			cout << "\n|  VVIP | Rp 50.000  + Makan, Minum, & AC |";
			cout << "\n+-----------------------------------------+";
			break;
		default:
			cout << "masukan anda salah,mohon ulangi !!\n\n";
			continue;
		}
		break;
	}
}
void daftarJam() {
	cout << "\n+--------------------------------------------------------+";
	cout << "\n| No.|              Waktu Keberangkatan                  |";
	cout << "\n|--------------------------------------------------------|";
	cout << "\n|  1.|  08.15 (pagi)                                     |";
	cout << "\n|  2.|  10.15 (pagi)                                     |";
	cout << "\n|  3.|  13.15 (siang)                                    |";
	cout << "\n|  4.|  14.15 (siang)                                    |";
	cout << "\n|  5.|  15.30 (sore)                                     |";
	cout << "\n|  6.|  18.30 (Malam)                                    |";
	cout << "\n|  7.|  19.30 (Malam)                                    |";
	cout << "\n+--------------------------------------------------------+\n";
}
void pilihJam() {

	while (true) {
		cout << "Pilih Waktu Keberangkatan :";
		cin >> jam;
		switch (jam)
		{
		case 1:
			tamJam = "08.15 (pagi)";
			cout << "Anda Memilih Jam:";
			cout << "\n08.15 (pagi)";
			break;
		case 2:
			tamJam = "10.15 (pagi)";
			cout << "Anda Memilih Jam:";
			cout << "\n10.15 (pagi)";
			break;
		case 3:
			tamJam = "13.15 (siang)";
			cout << "Anda Memilih Jam:";
			cout << "\n13.15 (siang)";
			break;
		case 4:
			tamJam = "14.15 (siang)";
			cout << "Anda Memilih Jam:";
			cout << "\n08.15 (pagi)";
			break;
		case 5:
			tamJam = "14.15 (siang)";
			cout << "Anda Memilih Jam:";
			cout << "\n14.15 (siang)";
			break;
		case 6:
			tamJam = "18.30 (Malam)";
			cout << "Anda Memilih Jam:";
			cout << "\n18.30 (Malam)";
			break;
		case 7:
			tamJam = "19.30 (Malam)";
			cout << "Anda Memilih Jam:";
			cout << "\n19.30 (Malam)";
			break;
		default:
			cout << "Masukan Anda Salah Mohon Ulangi\n\n";
			continue;
		}
		break;

	}
}
void dafHari() {
	cout << "\n+-------------------------+";
	cout << "\n| No.|       Hari         |";
	cout << "\n|-------------------------|";
	cout << "\n|  1.|      Senin         |";
	cout << "\n|  2.|      Selasa        |";
	cout << "\n|  3.|      Rabu          |";
	cout << "\n|  4.|      Kamis         |";
	cout << "\n|  5.|      Jumat         |";
	cout << "\n|  6.|      Sabtu         |";
	cout << "\n|  7.|      Minggu        |";
	cout << "\n+-------------------------+\n";
}
void mangkat() {
	int kpnMangkat;
	while (true) {
		cout << "pilih No Hari Keberangkatan:";
		cin >> kpnMangkat;
		switch (kpnMangkat)
		{
		case 1:
			otHari = "Senin";
			cout << "Anda Memilih Hari\t:" << otHari << endl;
			break;
		case 2:
			otHari = "Selasa";
			cout << "Anda Memilih Hari\t:" << otHari << endl;
			break;
		case 3:
			otHari = "Rabu";
			cout << "Anda Memilih Hari\t:" << otHari << endl;
			break;
		case 4:
			otHari = "Kamis";
			cout << "Anda Memilih Hari\t:" << otHari << endl;
			break;
		case 5:
			otHari = "Jumat";
			cout << "Anda Memilih Hari\t:" << otHari << endl;
			break;
		case 6:
			otHari = "Sabtu";
			cout << "Anda Memilih Hari\t:" << otHari << endl;
			break;
		case 7:
			otHari = "Minggu";
			cout << "Anda Memilih Hari\t:" << otHari << endl;
			break;
		default:
			cout << "Masukan Anda Salah Mohon Ulangi\n\n";
			continue;
		}
		break;

	}
}
void tiket() {
	cout << "Masukkan Jumlah Tiket :";
	cin >> jmlTiket;
	harga *= jmlTiket;
}
void bayar() {


	while (true) {
		cout << "\nMasukkan Uangmu :";
		cin >> uang;
		sisaKurang = uang - harga;

		if (sisaKurang > 0) {
			cout << "Uang Kau sisa :" << sisaKurang << endl;
		}
		else if (sisaKurang == 0) {
			cout << "Uang Kau Pas !\n";
		}
		else {
			cout << "Uang Kau Kurang :" << sisaKurang << endl;
			continue;
		}
		cout << endl;
		break;
	}

}
void footer() {
	cout << "\n+================================================+";
	cout << "\n|                                                 |";
	cout << "\n| TERIMAKASIH SEMOGA PERJALANAN ANDA MENYENANGKAN |";
	cout << "\n|                     (^_^)                       |";
	cout << "\n+================================================+";
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
