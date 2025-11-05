#include <iostream>
using namespace std;

int main() {
	int jam, menit, sisa;
    long long hari, dtk;
    
    cout << "+===========================================+" << endl;
	cout << "|               KONVERSI WAKTU              |" << endl;
	cout << "+===========================================+" << endl;
	cout << "|Haiii aku Talitha Yamilla Syahla           |" << endl;
	cout << "|Nim ku 2500018032                          |" << endl;
	cout << "*********************************************" << endl;
    cout << "Masukkannlah bilangan (dalam satuan detik):  " << endl;
    cin >> dtk;
    
    hari = dtk / 86400;
    sisa = dtk % 86400;
    jam = sisa / 3600;
    sisa = dtk % 3600;
    menit = sisa / 60;
    sisa = sisa % 60;
    
    cout << endl;
    cout << "|              Hasil Konversi:              |" <<endl; 
    cout << dtk << " detik = "<< hari << " hari, " << jam << " Jam, " << menit 
         << " Menit, " << sisa << " Detik." << endl;
    cout << "*********************************************"<<endl;
}
