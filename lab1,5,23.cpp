#include <iostream>
#include <fstream>
using namespace std;
int prog(const char *file) {
	ifstream po(file);
	double a1,a2,c,k;
	po >> a1;
	c+=a1;
	while (!po.eof()) {
		a2 = a1;
		po >> a1;
		if (a1 > a2) {
			c+=a1;
			if (c > k) 
				k = c;
		}
		else 
			c = a1;
	}
	return k;
}
int main() {
	cout << prog("text1.txt");
	return 0;
}