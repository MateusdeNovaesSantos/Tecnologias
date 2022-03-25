#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double r, volume;
	
	cin >> r;
	
	r = r * r * r;
	volume = (4.0/3.0) * 3.14159 * r;
	
	cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
	
	return 0;
}
