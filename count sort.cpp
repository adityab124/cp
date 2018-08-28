#include<iostream>
#include<string>
using namespace std;

int binarysearch(int a[],int l,int r,int n)
{
	
	 if (r >= l)
   {
        int mid = l + (r - l)/2;
 
        if (a[mid] == n)  
            return mid;
       
	    if (a[mid] > n) 
            return binarysearch(a, l, mid-1, n);
 
       else
        return binarysearch(a, mid+1, r, n);
	
}
else
return -1;
}


int main()
{int k,i,x,n,d,l,maximum;
cin>>x;	
int a[x];
for(i=0;i<x;i++)
{
	cin>>a[i];
}
cout<<"Enter no. to search"<<endl;
cin>>n;
cout<<"sooo\n";
int result=binarysearch(a,0,x-1,n);
(result==-1)?cout<<"not present":cout<<"Yes its present at "<<result+1;
if(result+1==1)
cout<<"st position";
else if(result+1==2)
cout<<"nd position";
else if(result+1==3)
cout<<"rd position";
else
cout<<"th position";
	




return 0;
}
