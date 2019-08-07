#include<iostream>
using namespace std;

struct st
{
	int x;
	int y;

	public:

	void set_data()
	{	
	//	cout << this << " is this address" << endl;
		cout << sizeof this << " is the size" << endl;
		cout << "This is set - " << (unsigned int)this << endl;
		this->x=100, this->y=200;
	}

	static void get_data()
	{	
		cout << this << "is this in static func" << endl;
		cout << "this is get - " << (unsigned int)this << endl;
	}

};

int main()
{
	class st s1,s2;
	s1.set_data();
	cout <<"s1.get_data()   ";
	s1.get_data();
	s2.set_data();
	cout <<"s2.get_data()   ";
	s2.get_data();
}
