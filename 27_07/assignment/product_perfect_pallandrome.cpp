#include<iostream>
using namespace std;
int chk_perfect(int);
int pallandrome(int);

int main()
{
	int *arr = new int[10],product;
	int perfect;
	for(int i=0;i<10;i++)
		cin >> arr[i];

	for(int i=0;i<10;i++)
	{
	product = chk_perfect(arr[i]);
	}
	
	cout << "product is " << product << endl;
	pallandrome(product);
}

int chk_perfect(int n)
{
	int num = n,sum=0, 
	static int product=1;
	for(int i=1;i<num;i++)
	{
		if(num%i==0)
			sum = sum+i;
	}
	
	
	if(sum==n)
	{
		cout << sum << " is sum" << endl;
		product = product * sum;	
		cout << product << " is product" << endl;
		return product;
	}
	
}

int pallandrome(int n)
{
	int num = n;
	int sum = 0;

	while(num)
	{
		sum = sum*10 + num%10;
		num = num/10;
	}

	if(sum==n)
		cout << n <<" is pallandrome" <<endl;
}
