#include<iostream>
#include<string>
using namespace std;
int main()
{int count=1,i,n,x,j;	
string a;
cin>>a;
n=a.length();
for(i=1;i<n && count !=7;i++)
{
if(a[i]==a[i-1])
count++;
else
count=1;
}

  if (count >= 7)
    cout<<"YES";
  else
    cout<<"NO";

return 0;
}
