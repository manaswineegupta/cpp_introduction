#include <iostream>
#include <cstdio>
using namespace std;
int greatest (int a, int b,int c,int d);
int main()
{
    int a,b,c,d,grtst;
    cin>>a>>b>>c>>d;
    grtst = greatest (a,b,c,d);
    cout<<grtst<<endl;
}
int greatest(int a,int b,int c,int d)
{
    if (a>=b && a>=c && a>=d) {return a;}
    else if (b>=a && b>=c && b>=d) {return b;}
    else if (c>=a && c>=b && c>=d) {return c;}
    else {return d;}
}