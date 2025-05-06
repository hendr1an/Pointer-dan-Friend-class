#include <iostream>
using namespace std;

class PersegiPanjang

{
public:
    int panjang, lebar;

public:

    void input()
    {
        cout << "Masukkan Panjang : ";
        cin >> panjang;
        cout << "Masukkan Lebar : ";
        cin >> lebar;
    }

    int luasPp(int a, int b)
    {
        return a * b;
    }

    Lingkaran ol;
};

class Lingkaran
{
public: 
    int jarijari;

    void input()
    {
        cout << "Masukkan jari-jari :";
        cin >> jarijari;
    }

    int luasLingkaran(int p)
    {
        return 3.14 * p * p;
    }
};

int main()
{
    PersegiPanjang objekPP;
    Lingkaran ol;

    cout << "Masukkan Panjang : ";
    cin >> objekPP.panjang;
    cout << "Masukkan Lebar : ";
    cin >> objekPP.lebar;
    cout << "Luas Persegi Panjang : " << objekPP.luasPp(objekPP.panjang, objekPP.lebar) << endl;

    };

