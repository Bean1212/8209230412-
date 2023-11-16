#include<iostream>
using namespace std;
int main()
{
	const double PI = 3.1415926;
	double r, h;
	cin >> r >> h;
	double V = (1.0 / 3.0) * PI * r * r * h;
	cout << "V=" << V << endl;
	return 0;
}