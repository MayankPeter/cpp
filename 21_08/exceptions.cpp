#include<iostream>
using namespace std;
int main()
{
int result,num1,num2;
cout << "Enter values of num1 & num2" << endl;
cin >> num1 >> num2;

try
{
if(num2==0)
	throw "Divisor can't be zero";
result = num1/num2;
cout << "Result is " << result << endl;
}

catch(const char *ptr)
{
cout << "In catch" << endl;
cout << ptr << endl;
}
cout << "Hello World" << endl;
}
