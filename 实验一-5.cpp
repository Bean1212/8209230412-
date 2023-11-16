#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double Fah = 0, Cen = 0;
	cout << "请输入一个华氏温度";
	cin >> Fah;
	Cen = (Fah - 32) / 1.8;
	cout << fixed << "Cen=" <<setprecision(2)<<Cen << endl;
	return 0;
}