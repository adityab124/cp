#include<iostream>
using namespace std;
int main()
{long long i,a,b,c,sum=0,d;
cin>>a;
for(i=1;i<=a;i++)
{
	if(i%2==0)
	{
	sum+=i;
	}
	else
	{
	sum-=i;	
	}
}
cout<<sum;

return 0;
}
