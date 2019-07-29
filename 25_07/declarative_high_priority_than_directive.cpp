#include<iostream>
using namespace std;

namespace first
{
int x = 10;
void test(void);
}

namespace second
{
int x = 20;
void test(void);
}

void first::test()
{
cout << "first test" << endl;
}

void second::test()
{
cout << "second test" << endl;
}

using namespace first;
int main()
{
using second::test;
cout << x << endl;
test();
}
