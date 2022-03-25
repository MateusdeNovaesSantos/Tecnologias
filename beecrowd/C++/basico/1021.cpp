#include <iostream>

using namespace std;

int main(){

    double N;
    long int NINT;

    cin >> N;


    N = N * 100;
    NINT = N;

    cout << "NOTAS:" << endl;

    cout << NINT / 10000 << " nota(s) de R$ 100.00" << endl;

    NINT %= 10000;

    cout << NINT / 5000 << " nota(s) de R$ 50.00" << endl;

    NINT %= 5000;

    cout << NINT / 2000 << " nota(s) de R$ 20.00" << endl;

    NINT %= 2000;

    cout << NINT / 1000 << " nota(s) de R$ 10.00" << endl;

    NINT %= 1000;

    cout << NINT / 500 << " nota(s) de R$ 5.00" << endl;

    NINT %= 500;

    cout << NINT / 200 << " nota(s) de R$ 2.00" << endl;

    NINT %= 200;

    cout << "MOEDAS:" << endl;

    cout << NINT / 100 << " moeda(s) de R$ 1.00" << endl;

    NINT %= 100;

    cout << NINT / 50 << " moeda(s) de R$ 0.50" << endl;

    NINT %= 50;

    cout << NINT / 25 << " moeda(s) de R$ 0.25" << endl;

    NINT %= 25;

    cout << NINT / 10 << " moeda(s) de R$ 0.10" << endl;

    NINT %= 10;

    cout << NINT / 5 << " moeda(s) de R$ 0.05" << endl;

    NINT %= 5;

    cout << NINT / 1 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}