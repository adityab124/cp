#include<iostream>
#include <string>
using namespace std;
int a,b,n,i,g;
string s,a1,b1;
main(){
	cin>>s;
	n=s.size();
	for (i=1; i<n; i++){
		if (s[i]>91)  {cout<<s; return 0;}
	}
	if (s[0]>91) s[0]=s[0]-32; else s[0]=s[0]+32;
	for(i=1; i<n; i++){
		s[i]=s[i]+32;
	}
	cout<<s;
}
