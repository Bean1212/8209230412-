#include<iostream>
using namespace std;
int main()
{
    cout << "������һ���ַ�";
	char a;
	cin >> a  ;
	if (a >= 97 && a <= 122)
		cout << "��д��ĸΪ" << char(a - 32) << endl;
	else
		cout << a + 1 << endl;
	return 0;
}