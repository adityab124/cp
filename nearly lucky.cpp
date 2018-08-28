#include<iostream>
using namespace std;
int main()
{long long int n,c=0;
cin>>n;
while(n!=0)
{
	int r=n%10;
	if(r==4||r==7)
	c++;
	n/=10;
}
if(c==4||c==7)
cout<<"YES";
else cout<<"NO";
	return 0;
}
