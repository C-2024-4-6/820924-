#pragma once
class Student             
{
public:
	void set_value(int a, const char b[20],int size, char c)
	{
		num = a;
		sex = c;
		for (int i = 0; i<=size; ++i)
		{
			name[i] = b[i];
		}
	};
	void display();
private:
	int num;
	char name[20];
	char sex;
};