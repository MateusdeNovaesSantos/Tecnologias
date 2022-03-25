#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int NUM;
    float HOURS, RPHOUR, SALARY;

    cin >> NUM >> HOURS >> RPHOUR;

    SALARY = HOURS * RPHOUR;

    cout << "NUMBER = " << NUM << endl << "SALARY = U$ " << fixed << setprecision(2) << SALARY << endl;

    return 0;
}