#include<iostream>
using namespace std;
int main()
{	int i,z=0;
    int x,a;
    cin>>x>>a;
	int y[x];																							
    for(int i=0;i<x;i++)
    {
        cin>>y[i];
    }
    a--;
     for(int i=0;i<x;i++)
    {
    if(y[i]>=y[a]&&y[i]>0)
        z++;
	}    
	cout<<z;
return 0;
}
