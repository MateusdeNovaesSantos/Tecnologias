#include <iostream>
#include <string.h>

using namespace std;

int main(){

    int x=0, i=0;
    char expressao[1000];

    while(cin >> expressao){

        for(i=0; i < strlen(expressao); i++){

            if(expressao[i] == 40){

                x++;
            }else if(expressao[i] == 41){

                x--;
            }

            if(x == -1){

                break;
            }
        }

        if(x == 0){

            cout << "correct" << endl;
        }else{

            cout << "incorrect" << endl;
        }

        x=0;
        memset(expressao, 0, strlen(expressao));
    }

    return 0;
}