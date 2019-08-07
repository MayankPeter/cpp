#include<iostream>
using namespace std;

namespace first
{
int x = 10;
void print(void);
}

namespace second
{
int x = 10;
void print(void);
}

void first::print(void)
{
cout << "printing in first" << endl;
}

void second::print(void)
{
cout << "printing in second" << endl;
}

int main()
{
using namespace first;
//using second::print;
cout << x << endl;
print();
}
