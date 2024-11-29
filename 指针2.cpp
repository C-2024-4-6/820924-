#include <iostream>
#include <cstring>
using namespace std;
//int parseHex(const char* const hexString)
//{
//	int sum=0;
//	int a = 1;
//	for (int i = 0; hexString[i]!='\0'; ++i)
//	{
//		if ((hexString[strlen(hexString) -i-1] - '0') <= 9)
//		{
//			sum += (hexString[strlen(hexString) - i-1] - '0') * a;
//		}
//		else if (hexString[strlen(hexString) - i-1] == 'A')
//		{
//			sum += 10 * a;
//		}else if (hexString[strlen(hexString) - i-1] == 'B')
//		{
//			sum += 11 * a;
//		}else if (hexString[strlen(hexString) - i-1] == 'C')
//		{
//			sum += 12 * a;
//		}else if (hexString[strlen(hexString) - i-1] == 'D')
//		{
//			sum += 13 * a;
//		}else if (hexString[strlen(hexString) - i-1] == 'E')
//		{
//			sum += 14 * a;
//		}else if (hexString[strlen(hexString) - i-1] == 'F')
//		{
//			sum += 15 * a;
//		}
//		a *= 16;
//	}
//	return sum;
//}
int parseHex(const char* const hexString)
{
	int sum = 0;
	for (int i = 0; hexString[i] != 0; ++i)
	{
		sum *= 16;
		switch (hexString[i]) 
		{
			case 'A':
				sum += 10;
				break;
			case 'B':
				sum += 11;
				break;
			case 'C':
				sum += 12;
				break;
			case 'D':
				sum += 13;
				break;
			case 'E':
				sum += 14;
				break;
			case 'F':
				sum += 15;
				break;
			default:
				sum += hexString[i] - '0';
		}
	}
	return sum;
}
void swap(int &a,int &b)
{
	int t = a;
	a = b;
	b = t;
}
int main()
{
	char string[] = "A5";
	cout << parseHex(string)<<endl;
	int n = 10;
	char* p = new char[n];
	cout << "请输入数组长度" << endl;
	cin >> n;
	cout << "请输入数组整数元素" << endl;
	for (int i = 0; i < n; ++i)
	{
		cin >> p[i];
	}
	bool change;
	do
	{
		change = false;
		for (int j = 0; j < n - 1; ++j)
		{
			if (p[j] > p[j + 1])
			{
				swap(p[j], p[j + 1]);
				change = true;
			}
		}
	} while (change);
	for (int k = 0; k < n; ++k)
	{
		cout << p[k] << " ";
	}
	delete[]p;
}
