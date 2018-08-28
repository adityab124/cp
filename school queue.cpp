#include<iostream>
#include<string>
using namespace std;
int main()
{int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=0 ; i<t ; i++)
    {
        for(int j=n-2 ; j>=0 ; j--)
        {
            if(s[j+1]=='G' && s[j]=='B')
            {
                s[j]='G';
                s[j+1]='B';
                j--;
            }
        }
    }
    cout<<s<<endl;
    return 0;
return 0;
}
