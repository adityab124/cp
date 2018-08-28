#include<iostream>
#include<string>
using namespace std;


int main()
{int k,i,x,n,d,l,maximum;
int found=0;
int go;
cin>>x;	
int a[x];
for(i=0;i<x;i++)
{
	cin>>a[i];
}
cout<<"Enter no. to search"<<endl;
cin>>n;
cout<<"sooo\n";

for(i=0;i<x;i++)
	{
		if(a[i]==n)
		{
		found=1;
		go=i;
	
		}
	}

(found==0)?cout<<"its not present":cout<<"Yes it is present at "<<go+1;

///Not important code now
if (found!=0)
{
if(go+1==1)
cout<<"st position";
else if(go+1==2)
cout<<"nd position";
else if(go+1==3)
cout<<"rd position";
else
cout<<"th position";
}
///just to work perfect	




return 0;
}
