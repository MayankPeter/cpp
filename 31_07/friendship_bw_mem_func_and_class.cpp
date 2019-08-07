#include<iostream>
using namespace std;

class A;

class B
{
int cash;
int gold;
public:
void person1(A);
void person2(A);
void person3(A);
};

class A
{
int cash;
int gold;

public:
void set_data(void);
friend void B::person2(A);
};

void A::set_data()
{
cout << "Enter cash and gold" << endl;
cin >> cash >> gold;
}


void B::person1(A a1)
{
//cout << a1.cash << "   " << a1.gold << endl;
}

void B::person2(A a1)
{
cout << a1.cash << "   " << a1.gold << endl;
}

void B::person3(A a1)
{
//cout << a1.cash << "   " << a1.gold << endl;
}

int main()
{
A a1;
B b1;
a1.set_data();
b1.person1(a1);
b1.person2(a1);
b1.person3(a1);
}
