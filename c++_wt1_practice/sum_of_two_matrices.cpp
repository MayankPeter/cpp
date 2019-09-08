#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
int r1,c1,r2,c2;
cout << "Enter no of rows and columns in matrix 1: ";
cin >> r1 >> c1;
cout << "Enter no of rows and columns in matrix 2: ";
cin >> r2 >> c2;

if(r1!=c2)
{
cout << "Matrix Multiplication not possible" << endl;
return 0;
}

int **p,**q,**r;

p = new int*[r1];
for(int i=0;i<r1;i++)
{
p[i] = new int[c1];
}

cout << "Enter 1st matrix :" << endl;
for(int i=0;i<r1;i++)
for(int j=0;j<c1;j++)
cin >> p[i][j];

cout << endl << "Matrix 1st is: " << endl;
for(int i=0;i<r1;i++)
{
for(int j=0;j<c1;j++)
cout << p[i][j] << " ";
cout << endl;
}

/*---------------------------------------------*/

q = new int*[r2];
for(int i=0;i<r2;i++)
{
q[i] = new int[c2];
}

cout << endl << "Enter 2nd matrix: " << endl;
for(int i=0;i<r2;i++)
for(int j=0;j<c2;j++)
cin >> q[i][j];

cout<< endl << "Matrix 2nd is: " << endl;
for(int i=0;i<r2;i++)
{
for(int j=0;j<c2;j++)
cout << q[i][j] << " ";
cout << endl;
}

/*---------------------------------------------*/

r = new int*[r1];
for(int i=0;i<r1;i++)
{
r[i] =new int[c2]{0,0,0};
}

for(int i=0;i<r1;i++)
{
for(int j=0;j<c1;j++)
{
for(int k=0;k<c2;k++)
{
r[i][j] = r[i][j] + p[i][k] * q[k][j];
}
}
}


/*---------------------------------------------*/

cout<< endl << "Matris 3rd is: " << endl;
for(int i=0;i<r1;i++)
{
for(int j=0;j<c2;j++)
cout << r[i][j] << " ";
cout << endl;
}
return 0;
}
