#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int codP[50], quantP[50];
    float valorP[50], pagar;

    cin >> codP[1] >> quantP[1] >> valorP[1];
    cin >> codP[2] >> quantP[2] >> valorP[2];

    pagar = (quantP[1] * valorP[1]) + (quantP[2] * valorP[2]);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << pagar << endl;

    return 0;
}