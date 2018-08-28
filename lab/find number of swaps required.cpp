#include<iostream>
 using namespace std;
int main()
{int d,x,n,y=0,k,i,j,l,t,o;
int m;
int b;

////////////////////////////////////
cin>>m;
cin>>b;
cin>>x;
///////////////////////////////////
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
			y++;		
		}	
	}
}

/////////////////////////////////////////

if((m*60)>=y*b)
cout<<"YES";
else
cout<<"NO";		

////////////////////////////////////////////	
return 0;
}
