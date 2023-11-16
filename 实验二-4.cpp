#include<iostream>
using namespace std;
int main()
{
	int a, b;
	char F;
	cin >> a >> b >> F;
	switch (F) {
	case'+':
		cout << a << F << b << "=" << a + b;
		break;
	case'-':
		cout << a << F << b << "=" << a - b;
		break;
	case'*':
		cout << a << F << b << "=" << a * b;
		break;
	case'/':
		if (b == 0)
			cout << "无意义"<<endl;
		cout << a << F << b << "=" << a / b;
		break;
	case'%':
		if (b == 0)
			cout << "无意义" << endl;
		cout << a << F << b << "=" << a % b;
		break;
	default:
		cout << "错误" << endl;
	}
	return 0;
}