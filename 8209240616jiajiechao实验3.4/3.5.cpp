#include <iostream>
using namespace std;
int mon(int day)
{
	int n;
	if (day == 1)
	{
		n = 1;
	}
	else
	{
		n = 2 * (mon(day - 1) + 1);
		return n;
	}
}
int main()
{
	cout << "��������" << mon(10) << "��" << endl;
}