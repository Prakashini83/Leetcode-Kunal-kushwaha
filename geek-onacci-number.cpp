#https://practice.geeksforgeeks.org/problems/geek-onacci-number/0
#include <bits/stdc++.h>
using namespace std;
long long int fibo(int n,int a,int b,int c)
{
    if(n==1)
    return a;
    else if(n==2)
    return b;
    else if(n==3)
    return c;
    return fibo(n-1,a,b,c) + fibo(n-2,a,b,c)+fibo(n-3,a,b,c);
}
int main()
{
    int a,b,c,n,t;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>c>>n;
        cout<<fibo(n,a,b,c)<<endl;
        
    }
    return 0;
}
