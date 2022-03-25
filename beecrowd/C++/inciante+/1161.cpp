#include <iostream>
 
using namespace std;

long long int fatorial(int i){

    if(i <= 0){

        return 1;
    }else{

        return i * fatorial(i - 1);
    }
}
 
int main(){

    long long int m, n;

    while(cin >> m >> n){
    
        cout << fatorial(m) + fatorial(n) << endl;
    }
 
    return 0;
}