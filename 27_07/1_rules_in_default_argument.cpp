/* multiple default values are possible */
#include<iostream>
using namespace std;
int sum(int = 100, int = 100);
int main()
{
int result;
result = sum();
//result = sum(13,30);
cout << result << endl;
}

int sum(int x, int y)
{
return x+y;
}
