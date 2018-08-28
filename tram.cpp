#include<iostream>
using namespace std;
int a,b,x,y,i,n;
int main()
{
cin>>n;
for(i=0; i<n; i++)
{
cin>>a>>b;
x=x-a+b;
if (y<x) y=x;

}
cout<<y;
return 0;
}
