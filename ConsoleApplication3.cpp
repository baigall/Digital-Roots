#include"stdafx.h"
#include"iostream"
using namespace std;

int main()
{
	int num, ans;
	char str[1000];
	while (cin>>str&&str[0]!='0')
	{
		num = 0;
		for (int i = 0; str[i] != '\0'; i++)
		{
			num += (str[i] - '0');
		}
		while (num > 9)
		{
			ans = 0;
			while (num)
			{
				ans += num % 10;
				num /= 10;
			}
			num = ans;
		}
		cout <<num<< endl;
	}
	return 0;
}

