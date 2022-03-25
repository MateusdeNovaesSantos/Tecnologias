#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char n[101];
    int x = 0;

    cin >> n;

    for(int i = 0; i < strlen(n); i++){

        x += n[i] - '0';
    }

    cout << (x % 3) << endl;

    return 0;
}