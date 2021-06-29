# include <iostream>
using namespace std;
void function (int& a, int& b);
int main ()
{
    int a,b;
    cin>>a>>b;
    function (a,b);
    cout<<a<<endl<<b<<endl;
}
void function (int &a, int &b)
{
    int c,d;
    c=a;
    a+=b;
    d=c-b;
    if (d>=0) {b=d;}
    else {b = -d;}
}