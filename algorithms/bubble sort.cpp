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

///sorting algorithm

for(i=0;i<x-1;i++)
{
	for(k=0;k<x-i-1;k++)
	{
		if(a[k]>a[k+1])
		{
			d=a[k];
			a[k]=a[k+1];
			a[k+1]=d;		
		}	
	}
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
