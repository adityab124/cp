#include<iostream>
#include<string>
using namespace std;
int main()
{int i,a,j,k,b,c=0;	
 string x;
cin>>k;
b=0;
for(i=0;i<k;i++)
{
	cin>>x;
	if(x=="X++" || x=="++X")
{
		b++;
}
if(x=="X--" || x=="--X")
{
b--;
}
}
cout<<b;
return 0;
}
