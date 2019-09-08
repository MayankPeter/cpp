#include<iostream>
using namespace std;

template<class Type>
class Test
{
Type x;
Type y;

public:
void set_data(Type,Type);
void get_data();

Test<double> operator +(Type &);
};

template<class Type>
void Test<Type>::set_data(Type a,Type b) 
{
x=a,y=b;
}

template<class Type>
void Test<Type>::get_data() 
{
cout << x << "  " << y << endl;
}

template<class Type>
Test<double> Test<Type>::operator +(const Type &a)
{
Test<double>tmp;
tmp.x = x + a.x;
tmp.y = y + a.y;
return tmp;
}

int main()
{
Test<int>obj1;
Test<float>obj2;
Test<double>obj3;

obj1.set_data(10,20), obj2.set_data(10.5,20.5);

obj3 = obj1+obj2;
obj1.get_data();
}
