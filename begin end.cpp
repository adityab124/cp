#include <iostream>
#include <array>
#include <iterator>

using namespace std;

int main()
{
    array<int, 4> a = {1, 2, 3, 4};

    for(auto i = a.begin(); i != a.end(); ++i)
    {
    	cout << *i << endl;
    }
    
    return 0;
}
