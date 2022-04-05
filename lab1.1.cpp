#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float a,m,g,alpha;
	cout << "what acceleration?" << endl;
	cin >> a;
	cout << "what injection?" << endl;
	cin >> alpha;
	g = 9.81;
	m = (g*sin(alpha)-a)/cos(alpha);
	cout << "coeficent of triction = " << m;
	
	return 0;
}