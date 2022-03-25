#include <iostream>
 
using namespace std;
 
int main() {

    char alf[26], a;
    int n;

    while(cin >> alf){

        cin >> n;

        int m[n];

        for(int i = 0; i < n; i++){

            cin >> m[i];

            cout << alf[m[i] - 1];
        }

        cout << endl;
    }
 
    return 0;
}