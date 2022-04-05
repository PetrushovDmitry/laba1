#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int text(const char *name) {
	ifstream po(name);
	double a,b,n;
	b = 1;
	while(!po.eof()) {
		po >> a;
		b*=a;
		n++;	
	}	
	b = pow(b,1/n);
	return b;
}	
int main() {
	text("text1.txt");
	return 0;
}
