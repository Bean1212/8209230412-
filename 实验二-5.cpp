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
	cout << "英文字母的个数为：" << w << endl;
	cout << "空格的个数为：" << x << endl;
	cout << "数字的个数为：" << y << endl;
	cout << "其他字符的个数为" << z << endl;
	return 0;
}
