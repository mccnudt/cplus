#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s;
    string sword;
    vector<string> str;
    cout<<"输入一段字符:"<<endl;
    getline(cin,s);
    s=s+' ';

    for(string::size_type ix=0;ix!=s.size();++ix)
    {
        if(isspace(s[ix])||ispunct(s[ix])){
            int count=0;
            while(isspace(s[ix])||ispunct(s[ix])){
                count++;
                ix++;
            }
            sword=s.substr(0,ix-count);
            str.push_back(sword);
            cout<<"分割开的单词是:"<<sword<<endl;
            s=s.substr(ix);
            ix=0;
        }
        if (s.size()==0)
            break;
    }

    cout<<"vector中存储的单词是:"<<endl;

    for(vector<string>::size_type i=0;i!=str.size();++i){
        cout<<str[i]<<' ';
        if ((i+1)%8==0)
        cout<<endl;
    }
    return 0;
    }