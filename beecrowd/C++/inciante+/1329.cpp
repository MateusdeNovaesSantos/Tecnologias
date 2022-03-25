#include <iostream>
 
using namespace std;
 
int main() {
 
    long int n, i, j, x, y;

    while(n != 0){
    
        cin >> n;
        x = 0;
        y = 0;

        if(n > 0){

            for(j = 0; j < n; j++){

                cin >> i;

                if(i == 0){

                    x++;
                }else{

                    y++;
                }

                i = 0;
            }

        cout << "Mary won " << x << " times and John won " << y << " times" << endl;

        }
    }

    return 0;
}