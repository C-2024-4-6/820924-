#include <iostream>
using namespace std;
void swap(double& a, double& b)
{
	double t;
	t = a;
	a = b;
	b = t;
}
int main()
{
	double list[10] = {1.3,5.2,54.2,2.2,65.3,64.7,12.3,4,17.8,4.5};
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);
	for (int i = 0; i < 9; ++i)
	{
		cout << list[i] << "<";
	}
	cout << list[9] << endl;
	return 0;
}