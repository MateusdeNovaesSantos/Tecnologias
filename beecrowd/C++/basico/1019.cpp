#include <iostream>

using namespace std;

int main(){

    long int N, h, m, s;

    cin >> N;

    m = N / 60;
    s = N % 60;
    h = m / 60;
    m = m % 60;

    cout << h << ":" << m << ":" << s << endl;
 
    return 0;
}