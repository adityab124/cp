#include<iostream>
#include<string>
using namespace std;
int main ()
{
	string a;
	int v=0;
	cin>>a;
	for(int i=0;i<a.length();i++)
	{
		bool e=false;
		for(int u=i+1;u<a.length();u++) 
			if(a[i]==a[u])
			{
			e=1; break;
			}
		if(!e) 
		v++;
	}
	if(v%2==0)
	cout<<"CHAT WITH HER!\n";
	else
	cout<<"IGNORE HIM!\n";
	return 0;
}
