#include<iostream>
using namespace std;

class Time
{
int hour;
int min;

public:
Time()
{
cout << "default" << endl; 
hour = 0, min = 0;
}

Time(int n)
{
hour = n/60;
min = n%60;
}

void get_time()
{
cout << hour << " hour " << min << " minute" << endl;
}
};

int main()
{
Time t1;
int n;
cout << "Enter the value in minutes" << endl;
cin >> n;

t1 = n;
t1.get_time();
return 0;
}
