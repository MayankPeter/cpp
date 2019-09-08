#include<iostream>
using namespace std;

class A
{
	int x;
	int y;

	public:

	A(){}

	A(int a, int b):x(a),y(b)
	{
	}

	void get_data()
	{
		cout << x << "   " << y << endl;
	}

	A operator =(const A &a2)
	{
		x = a2.x;
		y = a2.y;
		return a2;
	}

};


int main()
{
	A a1(1,2),a2,a3;
	a3 = a2 = a1;//a2.operator =(a1);
	a1.get_data();
	a2.get_data();
	a3.get_data();
}
