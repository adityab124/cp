#include <iostream>
using namespace std;
int main()
{
  int x,i,w,j,n,k,l,q=0,sum;
 cin>>n;
 for(k=0;k<n;k++)
 {
 cin>>x;
   cin>>w;
int a[x];
 for(i=0;i<x;i++)
 {sum=0;
   cin>>a[i];
 }
  for(j=0;j<x;j++)
  {sum=0;
    for(l=j;l<x;l++)
  {
    sum+=a[l];
      if(sum==w)
      cout<<j<<" "<<l;   
  }
  }
   cout<<"\n";
 }
  return 0;
}
