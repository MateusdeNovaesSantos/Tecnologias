#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main(){

    int x=0, y=0, i=0, j=0, k=0, m=0;
    char a=0, b[3];

    cin >> i;
    m=i;

    for(j=0; j < i; j++){
    	
    	x=0;
        y=0;
        a=0;
    	memset(b, 0, 3);

        cin >> b;

        for(k=0; k < 3; k++){

            if(b[k] >= '0' && b[k] <= '9'){

                if(k == 0){

                    x = b[k] - '0';
                }else{

                    y = b[k] - '0';
                }
            }else{

                a = b[k];
            }
        }
        
        if(x == y){

            cout << y*x << endl;
        }else if(a >= 'A' && a <= 'Z'){

            cout << y-x << endl;
        }else if(a >= 'a' && a <= 'z'){

            cout << x+y << endl;
        }

        i=m;
    }

    return 0;
}
