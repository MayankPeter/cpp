#include<iostream>
using namespace std;

template<class Type1, class Type2>
Type1 minimum(Type1 a,Type2 b)
{
if(b>a)
return a;
else
return b;
}

int main()
{
cout << minimum(98,23) << " is minimum" << endl;
cout << minimum('a','d') << " is minimum" << endl;
}
