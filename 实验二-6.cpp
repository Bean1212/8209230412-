#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "������������������" << endl;
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
	cout << "�������Ϊ" << a<<endl;
	int c = 0;
	c = (m * n) / a;
	cout << "��С������Ϊ" << c << endl;
	return 0;
}