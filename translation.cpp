#include<iostream>
#include<string>
using namespace std;
int main()
{int a,b,c,x,i,k=0,j,n;
string s,r;
cin>>s;
cin>>r;
n=s.length();
j=s.length();
for(i=0;i<n;i++)
{
if(s[i]==r[j-1])
{
k++;
}
j--;
}
if(k==n)
{
cout<<"YES";
}
else
{
cout<<"NO";
}
	return 0;
}
