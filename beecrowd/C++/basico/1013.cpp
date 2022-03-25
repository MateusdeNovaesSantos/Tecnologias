#include <iostream>

using namespace std;

int main(){
	
	int MaiorAB, MaiorABC, a, b, c;

	cin >> a >> b >> c;

	MaiorAB = (a + b + abs(a - b))/ 2;
	MaiorABC = (MaiorAB + c + abs(MaiorAB - c))/ 2;

	cout << MaiorABC << " eh o maior" << endl;
	
	return 0;
}
