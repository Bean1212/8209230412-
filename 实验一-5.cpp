#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double Fah = 0, Cen = 0;
	cout << "������һ�������¶�";
	cin >> Fah;
	Cen = (Fah - 32) / 1.8;
	cout << fixed << "Cen=" <<setprecision(2)<<Cen << endl;
	return 0;
}