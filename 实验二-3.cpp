#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "请输入三角形三边" << endl;
	cin >> a >> b >> c;
	int C;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "C=" << a + b + c << endl;
		if (a ==b || a == c || b ==c)

	    {
			cout << "该三角形为等腰三角形" << endl;
		}
	}
	else
	{
		cout << "三边不构成三角形" << endl;
	}
	return 0;
}