#include <iostream>
#include <string>
using namespace std;

int bsearch(int a[],int l,int r,int y)
{int mid;
if	(r>=l)
{
	mid=l+(r-l)/2;
	if(a[mid]==y)
	return mid;
	else if(a[mid]>y)
	return bsearch(a,l,mid-1,y);
	else
	return bsearch(a,mid+1,r,y);
}
else
{
return -1;
}
}




int main()
{
	int b,c,d=0,x,y,i,j,k=0,l=0,r;
	cin>>x;
	int a[x];
	for(i=0;i<x;i++)
	{
		cin>>a[i];
	}	
	cout<<endl<<"Enter number to find"<<endl;
	cin>>y;


////insert algorithm
////
	
int result=bsearch(a,0,x-1,y);
(result==-1)?cout<<"NO":cout<<"YES at "<<result+1;


	return 0;
}
