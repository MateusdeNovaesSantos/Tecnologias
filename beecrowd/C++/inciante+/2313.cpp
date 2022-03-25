#include <iostream>

using namespace std;

long long int retangulo(int x,int y,int z){

    if((x*x) == (y*y) + (z*z) || (y*y) == (x*x) + (z*z) || (z*z) == (x*x) + (y*y)){

        cout << "Retangulo: S" << endl;

    }else{

        cout << "Retangulo: N" << endl;
    }

    return 0;
}

int main(){

    long long int a, b, c;

    cin >> a >> b >> c;

    if(a < b+c && b < a+c && c < a+b){

        if(a == b && b == c){

            cout << "Valido-Equilatero" << endl << "Retangulo: N" << endl;

        }else if(a == b || a == c || b == c){

            cout << "Valido-Isoceles" << endl;

            retangulo(a, b, c);

        }else{

            cout << "Valido-Escaleno" << endl;

            retangulo(a, b, c);
        }

    }else{

        cout << "Invalido" << endl;
    }

    return 0;
}