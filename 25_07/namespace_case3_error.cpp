/*using local and global */
#include<iostream>
using namespace std;

namespace first
{
int x = 10;
void test()
{
cout << "first" << endl;
}
}

namespace second
{
int x = 20;
void test(void)
{
cout << "second" << endl;
}
}

using namespace first; 

int main()
{
using namespace second;
cout << x << endl;
test();
}
