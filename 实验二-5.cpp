#include<iostream>
using namespace std;
int main()
{
	char m;
	int w=0, x=0, y=0, z=0;
	while (cin.get(m))
	{
		int c = m;
		if (c >= 65 && c < +90 || c >= 97 && c <= 122)
			w++;
		else if (c == 32)
			x++;
		else if (c >= 48 && c <= 57)
			y++;
		else if (c == 10)
			break;
		else
			z++;
	}
	cout << "Ӣ����ĸ�ĸ���Ϊ��" << w << endl;
	cout << "�ո�ĸ���Ϊ��" << x << endl;
	cout << "���ֵĸ���Ϊ��" << y << endl;
	cout << "�����ַ��ĸ���Ϊ" << z << endl;
	return 0;
}
