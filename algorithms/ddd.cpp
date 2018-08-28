#include <iostream>
using namespace std;
int main()
{
int j,k,i,x,d=0,z=0,max;

cin>>x;	
int a[x];
for(i=0;i<x;i++)
{
	cin>>a[i];
}
  
  for(i=0;i<x;i++)
{d=0;
	for(k=0;k<x;k++)
	{
		if(a[i]==a[k])
		{
			d++;		
		}
	}
 if(d>z)
 { z=d;
 max=a[i];
 }
  }
  cout<<max;
  
  
	return 0;
}
