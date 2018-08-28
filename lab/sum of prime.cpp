#include <iostream>
using namespace std;
int main()
{
int x,i,k,j,l=0,b,sum=0;
  cin>>x;
  int a[x];
  for(i=0;i<x;i++)
  {
  cin>>a[i];
  }
  cin>>b;
  for(j=0;j<x;j++)
  {
   while(b--)
   {
   sum+=a[j];
   j++;
	}
    if(sum>l)
    {
      l=sum;
    }
  }
  cout<<l;
	return 0;
}
