#include<iostream>
#include<cstring>
using namespace std;

class student
{
int roll;
char name[20];
float marks;

public:

void set_data()
{
cout << "Enter roll, name & marks" << endl;
cin >> roll >> name >> marks;
}

void get_data()
{
cout << roll << "  " << name << "  " << marks << endl;
}

void sort()
{
student *p[5] = {this,this+1,this+2,this+3,this+4};
student tmp;
int n;
cout << "Select an opt. to sort" << endl << "1) Rollnowise" << endl << "2) Namewise" << endl << "3) Markswise" << endl;
cin >> n;

if(n==1)
{
for(int i=0;i<4;i++)
{
for(int j=0;j<4-i;j++)
{
if(p[j]->roll>p[j+1]->roll)
{
tmp = *p[j];
*p[j] = *p[j+1];
*p[j+1] = tmp;
}
}
}
}

if(n==2)
{
for(int i=0;i<4;i++)
{
for(int j=0;j<4-i;j++)
{
if(strcmp(p[j]->name,p[j+1]->name)>0)
{
tmp = *p[j];
*p[j] = *p[j+1];
*p[j+1] = tmp;
}
}
}
}

if(n==3)
{
for(int i=0;i<4;i++)
{
for(int j=0;j<4-i;j++)
{
if(p[j]->marks > p[j+1]->marks)
{
tmp = *p[j];
*p[j] = *p[j+1];
*p[j+1] = tmp;
}
}
}
}

}

};

int main()
{
student a[5];

for(int i=0; i<5;i++)
a[i].set_data();

for(int i=0; i<5;i++)
a[i].get_data();

a[0].sort();// student::sort(&a[0])

for(int i=0; i<5;i++)
a[i].get_data();

}
