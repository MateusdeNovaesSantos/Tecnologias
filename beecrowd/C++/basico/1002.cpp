#include <iostream>
#include <iomanip>

using namespace std;

#define n 3.14159

int main(){

    double R ,A;

    cin >> R;

    A = n * (R * R);

    cout << "A=" << fixed << setprecision(4) << A << endl;

    return 0;
}