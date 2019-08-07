#include<iostream>
#include<cstring>
using namespace std;

class shallow
{
char *ptr;
public:
shallow()
{

}
shallow(const char *s)
{
ptr = new char[strlen(s)+1];
strcpy(ptr,s);
}

void modify()
{
ptr[0] = 's';
}

void get_data()
{
cout<< "string - " << ptr << endl;
}
};

int main()
{
shallow s1("vector"), s2(s1);
s1.get_data();
s2.get_data();

cout << "****************************************************" << endl;

s1.modify();

s1.get_data();
s2.get_data();
}
