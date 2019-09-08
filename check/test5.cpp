#include<iostream>
using namespace std;

namespace f
{
int x = 10;
int y = 30;
}
namespace s
{
int x = 20;
int y = 40;
}

using namespace s;

int main()
{
using f::x;

cout << x << endl;
cout << y << endl;

//using namespace f;
cout << x << endl;
cout << y << endl;
}
