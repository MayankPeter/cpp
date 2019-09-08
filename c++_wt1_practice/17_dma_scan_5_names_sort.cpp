#include<iostream>
#include<cstring>
using namespace std;
class name
{
char *ptr;

public:
friend void set_data(name &);
void get_data();
friend void sort(name &);
};

void set_data(name &a)
{
a.ptr = new char[20];
cout << "Enter the name" << endl;
cin >> a.ptr;
}

void name::get_data()
{
cout << ptr << endl;
}

void sort(name &a)
{
name *p[5] = {&a,&a+1,&a+2,&a+3,&a+4};

char *tmp = new char[20];

for(int i=0;i<4;i++)
{
for(int j=0;j<4-i;j++)
{
if(strcmp(p[j]->ptr,p[j+1]->ptr)>0)
{
strcpy(tmp,p[j]->ptr);
strcpy(p[j]->ptr,p[j+1]->ptr);
strcpy(p[j+1]->ptr,tmp);
}
}
}

}

int main()
{
name a[5];

for(int i=0;i<5;i++)
{
set_data(a[i]);
}

cout<< endl << "Entered names: " <<  endl << endl;

for(int i=0;i<5;i++)
{
a[i].get_data();
}

sort(a[0]);

cout<< endl << "After sorting:  " <<  endl << endl;

for(int i=0;i<5;i++)
{
a[i].get_data();
}
}
