#include <iostream>
using namespace std;
void swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; ++i)
	{
		list3[i] = list1[i];
	}
	for (int i = 0; i < size2; ++i)
	{
		list3[i+size1] = list2[i];
	}
	 bool a;
	 do
	 {
		 a = false;
		 for (int i = 0; i < size1 + size2 - 1; ++i)
			 if (list3[i] > list3[i + 1])
			 {
				 swap(list3[i], list3[i + 1]);
				 a = true;
			 }
	 } while (a);
}
int main()
{
	int a = 80;
	int b = 80;
	int* list1 = new int [a];
	int* list2 = new int [b];
	int* list3 = new int[a + b];
	cout << "请输入数组1的长度和元素" << endl;
	cout << "长度：";
	cin >> a ;
	for (int i = 0; i < a; ++i)
	{
		cin >> list1[i];
	}
	cout << "请输入数组2的长度和元素" << endl;
	cout << "长度：";
	cin >> b;
	for (int i = 0; i < b; ++i)
	{
		cin >> list2[i];
	}
	merge(list1, a, list2, b,list3);
	cout << "组合后的数组为" << endl;
	for (int i = 0; i < a + b ; ++i)
	{
		cout << list3[i] << " ";
	}
	delete[]list1;
	delete[]list2;
	delete[]list3;
}