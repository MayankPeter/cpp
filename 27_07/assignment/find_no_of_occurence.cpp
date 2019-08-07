#include<iostream>
using namespace std;
int main()
{
int *arr = new int[10];
int c=1;

for(int i=0;i<10;i++)
{
cin >> arr[i];
}

for(int i=0;i<10;i++,c=1)
{	
for(int j=i+1;j<10;j++)
{
if(arr[i]==arr[j])
{
c++;
}
}
cout << arr[i] << " occured " << c << " times" << endl;
}


}
