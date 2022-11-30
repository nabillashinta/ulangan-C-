#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    cout << "Inputan";
    cout << "Kehadiran";
    int angka1;
    cin >> angka1;
    
    cout << "Tugas";
    int nilai2;
    cin >> nilai2;
    
    cout << "UTS";
    int nilai3;
    cin >> nilai3;
    
    cout << "UAS";
    int nilai4;
    cin >> nilai4;
    
    int hasil;
    hasil= (angka1 + nilai2 + nilai3 + nilai4)/4;
    cout << "Hasil Inputan="<< hasil;

}