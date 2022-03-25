#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){

    double x[50], y[50], distanciaxy;

    cin >> x[1] >> y[1] >> x[2] >> y[2];

    distanciaxy = sqrt(pow(x[2] - x[1], 2) + pow(y[2] - y[1], 2));

    cout << fixed << setprecision(4) << distanciaxy << endl;

    return 0;
}