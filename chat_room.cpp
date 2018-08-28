#include<iostream>
using namespace std;
int main()
{string s;
int a,b,i=0,k=0,x;
	cin>>s;
	string p="hello";
	for(i=0;i<s.length();i++)
	{
		if(s[i]==p[k])
	{
		k++;
	}
	}
if(k==5)
{
cout<<"YES";
}
else

{
cout<<"NO";	
}
	
	return 0;
}
