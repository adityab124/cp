#include<iostream>
#include<string>
using namespace std;
int main()
{int a,b,x,y,z,i,k,n;
cin>>x;

int co[100];

for(i=0;i<x;i++)
{
	cin>>n;
	co[n]=co[n]+1;
	}	

	if(co[4]>0)
	cout<<"YES";
	else
	cout<<"NO";
return 0;
}
