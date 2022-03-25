#include <iostream>
#include <string.h>

using namespace std;

int main(){

    int n=0, i=0, j=0, x=0, y=0, z=0;
    char areia[1000];

    cin >> n;

    for(i=0; i < n; i++){

        cin >> areia;

        for(j=0; j < strlen(areia); j++){

            if(areia[j] == 60){

                x++;
            }else if(areia[j] == 62){

                y--;
            }

            if(y == -1 && x == 0){

                y=0;
            }else if(x >= 1 && y == -1){

                z++;
                x--;
                y++;
            }
        }

        cout << z << endl;

        x=0;
        y=0;
        z=0;

        memset(areia, 0, strlen(areia));
    }

    return 0;
}