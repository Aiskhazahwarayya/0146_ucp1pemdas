#include <iostream>
#include <string>
using namespace std;

struct DetailStatus {
    string Tidaksehat;
    string sehat;
};

struct Kualitasudara {
    string Namakota;
    int Sensor;
    DetailStatus status;
};

int main()
{
    Kualitasudara ku;
    cout << "Namakota Kualitasudara : ";
    cin >> ku.Namakota;

    cout << "status kualiatas udara : " << endl;
    cout << "\t Tidaksehat : ";
    cin >> ku.status.Tidaksehat;
    cout << "\t sehat : ";
    cin >> ku.status.sehat;

    cout << "sensor Kualitasudara : ";
    cin >> ku.Sensor;

    cout << endl;
    cout << "\n Namakota : " << ku.Namakota;
    cout << "\n Status : ";
    cout << "\n \t Tidaksehat : " << ku.status.Tidaksehat;
    cout << "\n \t sehat : " << ku.status.sehat;
    cout << "\n Sensor : " << ku.Sensor;
}



// 1. 
// 2. pembelian mie,telor, dan air
// 3. Pengulangan pada nama
// 4. ganjil, genap
// 5.  pada struktur mahasiswa tunggal
