#include<iostream>
using namespace std;

class ARRAY
{
int a[5];

public:
friend ostream& operator <<(ostream &,const ARRAY &);
friend istream& operator >>(istream &in,ARRAY &a);

int& operator [](int Index)
{
return a[Index];
}

};

ostream& operator <<(ostream &out, ARRAY &a)
{
for(int i=0;i<5;i++)
out << a[i] << " ";
out << endl;
return out;
}

istream& operator >>(istream &in,ARRAY &a)
{
cout << "Enter 5 elements of array" << endl;
for(int i=0;i<5;i++)
in >> a[i];
return in; 
}



int main()
{
ARRAY a2;
cin >> a2;// operator >>(cin, a1)
cout << a2; // operator <<(cout, a2)
}
