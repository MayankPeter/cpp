#include<iostream>
using namespace std;
int main()
{
int *arr = new int[10];
int c=0;

for(int i=0;i<10;i++)
{
cin >> arr[i];
}

for(int i=0;i<10-c;i++)
{
for(int j=i+1;j<10-c;j++)
{
if(arr[i]==arr[j])
{
c++;
for(int k=j;k<10-c;k++)
{
arr[k] = arr[k+1];
}
}
}
}


for(int i=0;i<10-c;i++)
cout << "output : "<<endl<<arr[i] << " " << endl;
}
