//#include <iostream>
//using namespace std;
//void main()
//{
//	int i, j, * pi, * pj;    
//	pi = &i;
//	pj = &j;
//	i = 5; j = 7;
//	cout << i << "\t" << j << "\t" << pi <<"\t" << pj;
//	cout << &i << "\t" << *&i << "\t" << &j <<"\t" << *&j;
//}
//#include "stdio.h"
//#include <iostream>
//using namespace std;
//void f(char* st, int i)
//{
//    st[i] = '\0';
//    cout << st;   // printf(¡°%s\n¡±,st);
//    if (i > 1)
//    {
//        f(st, i - 1);
//    }
//}
//
//void main()
//{
//    char st[] = "abcd";
//    f(st, 4);
//}
#include <iostream>
using namespace std;
int* f()
{
	int* list;
	list = new int[4];
	for (int i = 0; i < 4; ++i)
	{
		list[i] = i + 1;
	}
	return list;
}
void main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete[]p;
}
