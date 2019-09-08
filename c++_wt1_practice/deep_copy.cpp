#include<iostream>
#include<cstring>
using namespace std;

class deep
{
char *ptr;

public:

deep(){}

deep(const char *s)
{
ptr = new char[strlen(s)+1];
strcpy(ptr,s);
}

deep(deep &a)
{
ptr = new char[strlen(a.ptr)+1];
strcpy(ptr,a.ptr);
}

void get_data()
{
cout << ptr << endl;
}

void modify()
{
ptr[0] = 's';
}

};

int main()
{
deep a1("vector"), a2(a1);
a1.get_data();
a2.get_data();

a1.modify();

a1.get_data();
a2.get_data();


return 0;
}
