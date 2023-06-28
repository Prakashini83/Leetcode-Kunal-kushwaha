#https://www.geeksforgeeks.org/first-uppercase-letter-in-a-string-iterative-and-recursive/?ref=gcse
#include <bits/stdc++.h>
using namespace std;
char cap(string s,int i)
{
    if(s[i]<=90 && i<s.size())
    return s[i];
    return cap(s,i+1);
}
int main() {
    string a="geeksforgeeKs";
    char k=cap(a,0);
    cout<<k;
	return 0;
}
