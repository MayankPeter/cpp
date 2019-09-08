#include<iostream>
using namespace std;

class Time
{
int hour;
int min;

public:

Time()
{
cout << "Enter the data" << endl;
cin >> hour >> min;
}

operator int()
{
return hour*60 + min;
}

};

int main()
{
int n = 120;
Time t1;
n = t1;
cout << n << " minutes" << endl;
}
