#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "����������������" << endl;
	cin >> a >> b >> c;
	int C;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "C=" << a + b + c << endl;
		if (a ==b || a == c || b ==c)

	    {
			cout << "��������Ϊ����������" << endl;
		}
	}
	else
	{
		cout << "���߲�����������" << endl;
	}
	return 0;
}