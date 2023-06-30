#include <iostream>
using namespace std;
void k(string p,string up)
{
    if(up.empty())
    {
        cout<<p<<endl;
        return;
    }
    char ch=up.at(0);
    k(p+ch,up.substr(1));
    k(p,up.substr(1));
}
int main() {
	k("","abc");
	return 0;
}

