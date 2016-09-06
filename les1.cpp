#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> str;
    string s,ss;
    int i=0;
    while(getline(cin,s))
    {
        str.push_back(s);
        ss=ss+' '+str[i];
        cout<<ss<<endl;
        cout<<str[i]<<endl;
    	i++;
    }
    return 0;
}