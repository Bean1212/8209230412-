#include<iostream>
using namespace std;
int main()
{
    cout << "请输入一个字符";
	char a;
	cin >> a  ;
	if (a >= 97 && a <= 122)
		cout << "大写字母为" << char(a - 32) << endl;
	else
		cout << a + 1 << endl;
	return 0;
}