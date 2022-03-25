#include <iostream>

using namespace std;

int main(){

    int x1=0, y1=0, x2=0, y2=0;

    while(int i=1 != 0){

        cin >> x1 >> y1 >> x2 >> y2;

        if(x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0){

            break;
        }else{

            x1 = (x1*60) + y1;
            x2 = (x2*60) + y2;

            if(x1 <= x2){

                x1 = x2-x1;
            }else{

                x1 = (1440-x1) + x2;
            }

            cout << x1 << endl;
        }

        x1=0;
        y1=0;
        x2=0;
        y2=0;
    }

    return 0;
}