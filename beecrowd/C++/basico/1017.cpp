#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double tempo, vm, combustivel;

    cin >> tempo >> vm;

    combustivel = (tempo * vm)/ 12;

    cout << fixed << setprecision(3) << combustivel << endl;

    return 0;
}