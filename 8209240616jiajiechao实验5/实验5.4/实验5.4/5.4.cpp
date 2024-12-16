#include <iostream>
using namespace std;
class Student
{
public:
	Student(int a, double b)
	{
		number = a;
		score = b;
	}
	int number;
	double score;
};
void max(Student *s)
{
	int N = 0;
	double M = 0;
	for (int i = 0; i <= 4; ++i)
	{
		if (s[i].score > M)
		{
			M = s[i].score;
			N = s[i].number;
		}
	}
	cout << "最高分为" << N << "号同学的" << M << "分" << endl;
}
int main()
{
	Student group[5] = { Student(1,98.5),Student(2,87.3),Student(3,78),Student(4,90),Student(5,79) };
	max(group);
}