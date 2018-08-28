#include<iostream>
using namespace std;
int main()
{int a,b,c=0,x,i,j,n;
cin>>n;
for(i=0;i<n;i++)
{
cin>>a>>b;
if((b-a)>=2)
c++;
}
cout<<c;
return 0;
}
