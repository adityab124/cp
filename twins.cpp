#include<iostream>
#include<string>
using namespace std;
int main ()
{
int j,i,c=0,t,k;
cin>>t;
int a[t];

for(k=0;k<t;k++)
{
cin>>a[k];
}


for(i=0;i<t;i++)
{c=0;
	for(j=0;j<t;j++)
{	
	if(a[i]==a[j])
	{
	c++;
	}
}
}
cout<<c;
	return 0;
}
