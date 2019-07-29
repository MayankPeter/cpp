/* multiple default must go from right to left */
#include<iostream>
using namespace std;
int sum(int = 100, int);
int main()
{
int result;
result = sum(10); // 10 is mapped to x and y is empty
//result = sum(13,30);
cout << result << endl;
}

int sum(int x, int y)
{
return x+y;
}
