#include<iostream>
using namespace std;

int chk_arm(int num)
{
int n = num;
int r ,sum=0;
while(n)
{
r = n%10;
r = r*r*r;
n = n/10;
sum = sum+r;
}
//if(num==sum)
//{
//cout << num << " is armstrong" << endl;
return sum;
//}
}

int main()
{
int *ptr = new int[10];
int *sum = new int(0);
int result;

for(int i=0;i<10;i++)
cin >> ptr[i];

for(int i=0;i<10;i++)
*sum = *sum + ptr[i];

result=chk_arm(*sum);
if(result==(*sum))
cout << result << " is armstrong" << endl;
}
