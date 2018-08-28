# include <iostream>
using namespace std;
int s;
int main(){
	cin>>s;
	if(s%4==0 || s%7==0 || s%47==0 || s%74==0 || s%477==0) cout<<"YES";
	else cout<<"NO";
	return 0;
}
