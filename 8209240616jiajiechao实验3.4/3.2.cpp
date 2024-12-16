#include <iostream>
using namespace std;
bool is_prime(int num)
{
	for (int x=num-1;x>=2;--x)
	{
		if (num % x == 0)
		{
			return false;
			break;
		}
	}
}
int main()
{
	int num;
	int sum;
	for (num = 2, sum = 1; sum <= 200; )
	{
		for (int i = 1;i<=10;)
		{
			if (is_prime(num))
			{
				cout << num << " ";
				++i;
				++num;
				++sum;
			}
			else { ++num; }
		}
		cout << endl;
	}
	return 0;
}
	