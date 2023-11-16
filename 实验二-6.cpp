#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "请输入了两个正整数" << endl;
	cin >> a >> b;
	int m, n;
	m = a;
	n = b;
	while (a != b) {
		if (a > b)
		{
			a = a - b;
		}
		else if (a < b)
		{
			b = b - a;
		}
	}
	cout << "最大公因数为" << a<<endl;
	int c = 0;
	c = (m * n) / a;
	cout << "最小公倍数为" << c << endl;
	return 0;
}