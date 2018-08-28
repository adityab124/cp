#include<iostream>
#include<string>
using namespace std;


///take array input
int main()

{int j,k,i,x,n,d,l,maximum;

cin>>x;	
int a[x];
for(i=0;i<x;i++)
{
	cin>>a[i];
}

/// insertion sorting algorithm
for(i=1;i<x;i++)
{
k=a[i];
j=i-1;
while(j>=0 && k<a[j])
{
	a[j+1]=a[j];
	j--;
}
a[j+1]=k;
}




//array output

	for(l=0;l<x;l++)
{
	cout<<a[l];
}
	return 0;
}
