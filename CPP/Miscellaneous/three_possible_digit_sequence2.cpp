#include <iostream>
using namespace std;

int main()
{
int a[3];
cout<<"Enter the digits:"<<endl;
cin>>a[0]>>a[1]>>a[2];
for (int i=0;i<3;i++)
{
for (int j=0;j<3;j++)
{
for (int k=0;k<3;k++)
{
if (i!=j && i!=k && j!=k)
cout<<endl<<endl<<a[i]<<a[j]<<a[k];
}
}
}
}

