#include <iostream>

using namespace std;

int main(){

    int n, d, m, a;

    cin >> n;

    a = n / 365;
    n = n % 365;
    m = n / 30;
    d = n % 30;

    cout << a << " ano(s)" << endl << m << " mes(es)" << endl << d << " dia(s)" << endl;

    return 0;
}