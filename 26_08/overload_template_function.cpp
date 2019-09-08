#include<iostream>
using namespace std;

template<class Type1, class Type2>
double sum(Type1 a, Type2 b)
{
cout << "2 Arguments" << endl;
return a+b;
}

template<class Type1, class Type2, class Type3 >
double sum(Type1 a, Type2 b, Type3 c)
{
cout << "3 Arguments" << endl;
return a+b+c;
}

int main()
{
cout << sum(10,20) << endl;
cout << sum(10.5f,30,23.5) << endl;
cout << sum('a',30,20.5) << endl;

}
