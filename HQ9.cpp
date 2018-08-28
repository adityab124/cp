#include<iostream>
#include <string>
using namespace std;
int a,b,n,i,j,g;
string s,a1,b1;
int main()
{
	cin>>s;
	n=s.size();
	for (i=0;i<n;i++)
	{
	for (j=1;j<n;j++)
	{
		if(s[i]!=s[j])
		g++;
	}
	}
	if(g%2==0)
	{
		cout<<"CHAT WITH HER!";
	}
	else
	{
	
	cout<<"IGNORE HIM!";
	}
}			
