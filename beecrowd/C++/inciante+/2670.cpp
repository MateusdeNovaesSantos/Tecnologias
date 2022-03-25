#include <iostream>

using namespace std;

int main(){

    int a, b, c, x[3]{0, 2, 4}, y[3]{2, 0, 2}, z[3]{4, 2, 0}, aux1=0, aux2=6000;

    cin >> a >> b >> c;

    for(int i=0; i<3; i++){

        aux1 = a*x[i] + b*y[i] + c*z[i];

        if(aux2 >= aux1){

            aux2 = aux1;
        }
    }

    cout << aux2 << endl;

    return 0;
}