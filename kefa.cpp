#include<iostream>
using namespace std;
int main()
{
	int n,nd=0,cnt,ln=0,x,bnd=0;
	cin>>n;
	for (cnt=0;cnt<n;cnt++)
	{
		cin>>x;
		if (x>=ln)
		nd++;
		else
		nd=1;
		if (nd>bnd)
		bnd=nd;
		ln=x;
	}
	cout<<bnd;
}
