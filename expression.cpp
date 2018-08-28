#include<iostream>
#include<string>
using namespace std;
int main()
{ int a,b,c,ans,max=0;
    cin>>a>>b>>c;
    ans=a+b+c; 
	 if(ans>max) max=ans;
    ans=a*b*c; 
	 if(ans>max) max=ans;
    ans=a+b*c; 
	 if(ans>max) max=ans;
    ans=a*b+c; 
	 if(ans>max) max=ans;
    ans=a*(b+c); 
	 if(ans>max) max=ans;
    ans=(a+b)*c; 
	 if(ans>max) max=ans;
   cout<<max;

return 0;
}
