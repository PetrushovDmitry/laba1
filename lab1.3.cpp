#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	double *h = new double[n];
	for (int i=0; i<n; i++)
		cin >> h[i];
	double mean = 0;
	for (int i=0; i < n; i++ ) 
		mean +=h[i];
	mean/=n;
	double desp = 0;
	for (int 
	i =0; i< n; i++ )
		desp += pow(h[i]-mean,2);
	desp/=n;
	cout << desp;
	return 0;
}
	