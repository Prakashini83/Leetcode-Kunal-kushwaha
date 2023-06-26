#Reversing a number using recursion
#include <bits/stdc++.h>
using namespace std;
int rev(int n,int l)
{
    if(n==0)
   { return 0;}
    return ((n%10)*pow(10,l--))+rev(n/10,l);
}
int main() {
	int a=17899;
	int l=log10(a);
	int k=rev(a,l);
	cout<<k;
	return 0;
}
