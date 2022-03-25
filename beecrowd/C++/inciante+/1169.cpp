#include <iostream>
#include <math.h>

using namespace std;

int main(){

    long long int n = 0, x;
    cin >> n;

    for(int i = 0; i < n; i++){

        x = 0;
        cin >> x;

        x = ((pow(2, x)) / 12) / 1000;

        cout << x << " kg" << endl;

    }

    return 0;
}