#include<iostream>
#include<string>
using namespace std;
int main()
{int n,t,x,y,z;
    string s;
    cin>>s;
    for(int i=0 ; i<s.length() ; i++)
    {
       if(s[i]=='.')
       cout<<"0";
       else if(s[i]=='-' && s[i+1]=='.')
       {
	   cout<<"1";
		i++;   
   }
	   else if(s[i]=='-' && s[i+1]=='-')
       {
	   cout<<"2";
		i++;
}
	}
    return 0;
return 0;
}
