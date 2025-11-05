#include <iostream>
using namespace std;

int main() {
	int jam, menit, sisa;
    long dtk;
    
	cout << "+===========================================+" << endl;
	cout << "|               KONVERSI WAKTU              |" << endl;
	cout << "+===========================================+" << endl;
    cout << "Masukkannlah bilangan (dalam satuan detik): ";
    cin >> dtk;

    jam = dtk/ 3600;
    sisa = dtk % 3600;
    menit = sisa / 60;
    sisa = sisa % 60;

    cout << endl;
    cout << "|              Hasil Konversi:              |" <<endl; 
    cout << dtk << " detik = " << jam << " Jam, " << menit 
         << " Menit, " << sisa << " Detik." << endl;
    cout << "*********************************************"<<endl;

    return 0;
}
