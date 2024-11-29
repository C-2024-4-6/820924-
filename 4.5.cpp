#include <iostream>
#include <cstring>
using namespace std;
bool ab(const char s1[], const char s2[],int i,int length)
{
	int k = 0;
	for (int j = i; j < i + length; ++j)
	{
		if (s1[k] != s2[j])
		{
			return false;
		}
		++k;
	}
	return true;
}
int indexOf(const char s1[], const char s2[])
{
	int i = 0;
	for ( ; i < strlen(s2)-strlen(s1); ++i)
	{
		if (!ab(s1, s2, i, strlen(s1)))
		{
			continue;
		}
		else 
		{
			return i + 1;
		}
	}
	return -1;
}
int main()
{
	int n1 = 10;
	int n2 = 100;
	char* s1 = new char[n1];
	char* s2 = new char[n2];
	cout << "Enter the first string: ";
	cin.getline(s1,n1);
	cout << "Enter the second string: ";
	cin.getline(s2,n2);
	cout << indexOf(s1, s2);
	delete[]s1;
	delete[]s2;
}
