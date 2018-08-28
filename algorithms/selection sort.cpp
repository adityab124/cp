#include<iostream>
#include<string>
using namespace std;
int main()
{int j,k,i,x,n,d,l,maximum;

///take array input

cin>>x;	
int a[x];
for(i=0;i<x;i++)
{
	cin>>a[i];
}
 int min_idx;

///sorting algorithm


for(i=0;i<x-1;i++)
{
	 min_idx = i;
	for(k=i+1;k<x;k++)
	{
		if(a[k]<a[min_idx])
		{
			min_idx = k;	
		}
				
	}
	d=a[min_idx];
	a[min_idx]=a[i];
	a[i]=d;	
		
}
	
	
///sorting done
	
	cout<<"sooo\n\n";
	
///array output

	for(l=0;l<x;l++)
{
	cout<<a[l];
}

	return 0;
}
