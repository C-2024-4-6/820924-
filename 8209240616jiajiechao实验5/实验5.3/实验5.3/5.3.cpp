#include <iostream>
using namespace std;
class CFT
{
private:
	double length;
	double width;
	double height;
public:
	void set_value()
	{
		cout << "�����볤���" << endl;
		cin >> length;
		cin >> width;
		cin >> height;
	}
	void get_volume()
	{
		double V=length * width * height;
		cout << "���������Ϊ"<<V<< endl;
	}
};
int main()
{
	CFT t1;
	t1.set_value();
	t1.get_volume();
	CFT t2;
	t2.set_value();
	t2.get_volume();
	CFT t3;
	t3.set_value();
	t3.get_volume();
}