#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double A, B, C, f1, f2, f3, f4, f5;
	
	cin >> A >> B >> C;
	
	f1 = (A * C) / 2.0;
	f2 = 3.14159 * (C * C);
	f3 = ((A + B) * C)/ 2.0;
	f4 = B * B;
	f5 = A * B;
	
	cout << "TRIANGULO: " << fixed << setprecision(3) << f1 << endl;
	cout << "CIRCULO: " << fixed << setprecision(3) << f2 << endl;
	cout << "TRAPEZIO: " << fixed << setprecision(3) << f3 << endl;
	cout << "QUADRADO: " << fixed << setprecision(3) << f4 << endl;
	cout << "RETANGULO: " << fixed << setprecision(3) << f5 << endl;
	
	return 0;
}
