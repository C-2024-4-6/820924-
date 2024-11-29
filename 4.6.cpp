#include <iostream>
#include <cstring>
#include <string>
using namespace std;
void count(const char s[], int counts[])
{
	int k = 65;
	for (int j=97; j <= 122; ++j)
	{
		for (int i = 0; i < strlen(s); ++i)
		{
			if ((int)s[i] == j || (int)s[i] == k)
			{
				counts[j-97] += 1;
			}
		}
		++k;
	}
}
int main()
{
	char s[50];
	int counts[26] = {};
	cout << "Enter a string:";
	cin.getline(s,50);
	count(s, counts);
	cout << endl;
	for (int i = 0; i < 26; ++i)
	{
		cout << char(i + 97) << "£º" << counts[i] << " " << "times" << "  ";
	}
}