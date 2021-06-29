# include <iostream>
# include <string>
using namespace std;
int main()
{
    string str ="adcbdef";
    if (str.find("xyz")==string::npos)
    cout<<"not found"<<endl;
    return 0;

}