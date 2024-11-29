#include <iostream>
using namespace std;
bool com(int x, int i, int num[10])
{
	for (int i = 0; i <= 9;)
	{
		if (x != num[i])
		{
			++i;
		}
		else
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int num[10] = {};
	int n = 0;
	int x=0;
	cout << "请输入十个数" << endl;
	for (int i = 0; i <= 9; ++i)
	{
		cin >> x;
		if (com(x,i,num))
		{
			num[n] = x;
			++n;
		}
	}
	for (int j = 0; j < n; ++j)
	{
		cout << num[j] << " ";
	}
}
//x != num[0] && x != num[1] && x != num[2] && x != num[3] && x != num[4] && x != num[5] && \
//x != num[6] && x != num[7] && x != num[8] && x != num[9]
