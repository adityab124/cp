#include<iostream>
#include<string>
using namespace std;

int main()
{int s=0,b,c=0,i,j,k;
	string a;
 
	cin>>a;
	for(i=0;i<a.length();i++)
	{
	if(a[i]<=122 && a[i]>=97)
	s++;
	else
	c++;	
	}
	if(c>s)
	{
		for(j=0;j<a.length();j++)
	{
	a[j]= toupper(a[j]);
	}
}
	else
	{
	
	for(j=0;j<a.length();j++)
	{
	a[j]=tolower(a[j]);
}
}
for(j=0;j<a.length();j++)
	{
	cout<<a[j];
}

return 0;
}
