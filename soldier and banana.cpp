#include <iostream>
using namespace std;
int k,n,w,c;
main() {
cin>>k>>n>>w;
c=k*(1+w)*w/2;
if (c-n>=0)
    cout<<c-n;
else cout<<0;
}
