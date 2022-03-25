#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    char nome[50];
    double salarioN, salario, produto;

    cin >> nome >> salario >> produto;

    salarioN = salario + (produto * 0.15);

    cout << "TOTAL = R$ " << fixed << setprecision(2) << salarioN << endl;

    return 0;
}