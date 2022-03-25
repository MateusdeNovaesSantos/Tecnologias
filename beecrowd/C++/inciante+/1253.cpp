#include <iostream>
#include <string.h>

using namespace std;

int main(){

    int i=0, j=0, x=0, y=0, z=0;
    char cod[50], cifra[54]{"ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ"};

    cin >> x;

    for(i; i < x; i++){

        cin >> cod;
        cin >> y;

        for(j=0; j < strlen(cod); j++){

            z = (cod[j] - 39) - y;
            cout << cifra[z];

            /*z = (cod[j] - 65) + y;
            cout << cifra[z];*/
        }

        y=0;
        memset(cod, 0, strlen(cod));

        cout << endl;
    }

    return 0;
}