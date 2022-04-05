#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n,m,k,j;
	cout << "write nomber of array" << endl;
	cin >> n;
	double *h = new double[n];
	cout << "fiil in your array" << endl;
	for (int i=0; i<n; i++)
		cin >> h[i];
	double sr = 0;
	cout << "if you want use all array tap 1, if no tap 0" << endl;
	cin >> m;
	switch (m) {
	case 0:
		cout << "please, write subbarray bounds" << endl;
		cin >> k >>j;
		if (j > n ){
			cout << "error";
			break;
		}
		for (int i =k-1; i< j-1; i++ )
		sr += pow(h[i],2);
		sr/=n;
		sr = sqrt(sr);
		cout << sr;
		break;
	case 1:
		for (int i =0; i< n; i++ )
			sr += pow(h[i],2);
		sr/=n;
		sr = sqrt(sr);
		cout << sr;
		break;
	default: cout << "error";
	}
	return 0;
}