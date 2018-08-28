#include<iostream>
#include<string>
using namespace std;

int main()
{
int t,x,i,j;
cin>>x;	
	char a[x];
for(j=0;j<x;j++)
	{
	cin>>a[j];
	}
for(i=0;i<x;i++)
	{
	if(a[i]==a[i+1])
	t++;
	}	
	cout<<t;

return 0;
}
