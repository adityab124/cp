#include<iostream>
#include<string>
using namespace std;
int main()
{int i,a,j,k,b,c=0;	
 int x[3];
cin>>k;
for(i=0;i<k;i++)
{
	b=0;
	for(j=0;j<3;j++)
{
	
	cin>>x[j];
	if(x[j]==1)
{
		b++;
}
}
	if(b>=2)
	c++;
}

cout<<c;
return 0;
}
