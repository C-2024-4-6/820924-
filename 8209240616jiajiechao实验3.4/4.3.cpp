#include <iostream>
using namespace std;
int main()
{
	bool box[100] = {true};
	int n,x;
	for (n = 2; n <= 100; ++n)
	{
		for (x=n;x<=100; x+=n+1)
		{
			box[x-1] = !box[x-1];
		}
	}
	for (int j = 0; j < 100; ++j)
	{
		if (box[j])
		{
			cout << j+1 << " ";
		}
	}
	return 0;
}