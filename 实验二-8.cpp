#include<iostream>
using namespace std;
int main() {
	double a;
	cin >> a;
	double x1=a;
	double x2 = (x1 + a / x1) / 2;
	if (a > 0)
	{
		while (fabs(x2 - x1) < 1e-10); {
			x1 = x2;
			x2 = (x1 + a / x1) / 2;
		}
		cout << x2 << endl;
	}
	if (a < 0)
	{
		while (fabs(x2 - x1) < 1e-10); {
			x1 = -a;
			x1 = x2;
			x2 = (x1 + a / x1) / 2;
		}
		cout << x2 << endl;
	}
	return 0;
}