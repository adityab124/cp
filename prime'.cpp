#include<iostream>
#include<string>
using namespace std;
int prime (int p)
{int c=0,i;
	for(i=1;i<p;i++)
	{
		if(p%i==0)
		{
			c++;
		}
	}
	if(c<2)
	return 0;	
	else
	return 1;
}


int main()
{
int a,b,x,y,z=0,i,j=0,k;
cin>>a;
cin>>b;
y=a;
x=b;
if(prime(a)==0)
{
	if(prime(b)==0)
	{
		for(j=a;j<b;j++)
		{
			if(prime(j)==0)
			{
		
			z++;
			}
		}
		if(z==1)
		cout<<"YES";
		else
		{
		cout<<"NO";
		}
	}
	else
	{
	cout<<"NO";
	}
}
else
{
cout<<"NO";
}
return 0;
}
