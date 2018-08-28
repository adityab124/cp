#include <iostream>
using namespace std;
int main()
{
int x,i,k,j,l=0,b,sum=0;
  cin>>x;
  int a[x];
  for(i=0;i<x;i++)
  {
  cin>>a[x];
  }
  cin>>b;
  for(j=0;j<x;j++)
  {
    sum=0;
    for(k=0;k<b;k++)
    {
      sum=+a[j];
    }
    if(sum>l)
    {
      l=sum;
    }
  }
  cout<<l;
	return 0;
}
