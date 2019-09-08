#include<iostream>
using namespace std;

template<typename Type>
void swap_data(Type &a, Type &b)
{
Type tmp;

tmp = a;
a = b;
b = tmp;
}

int main()
{
int a=10,b=20;
char ch1 = 'a' ,ch2 = 'b';
float f1 = 10.5, f2 = 11.6;

swap_data(a,b);
swap_data(ch1,ch2);
swap_data(f1,f2);

cout << a << "   " << b << endl;
cout << ch1 << "   " << ch2 << endl;
cout << f1 << "   " << f2 << endl;

}
