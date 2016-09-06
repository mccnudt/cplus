#include <iostream>
using namespace std;

int main() {
    string s1,s2;
    char p;
    do {
    	cout<<"测试git库使用"<<endl;
       cout <<"输入两个字符串:"  <<endl;
       getline(cin , s1);
       getline(cin , s2);
       
       if (s1==s2)
           cout <<"s1 is euqal to s2"<<endl ;
       else 
           if (s1>s2)
               cout <<"s1 is bigger than s2"<<endl;
           else 
               cout <<"s2 is bigger"<<endl;
        
       if (s1.size()==s2.size())  
           cout<<"the length of the two strings is euqal"<<endl ;
       else
           if (s1.size()>s2.size()) 
               cout<<"the length of s1 is bigger"<<endl ;
           else
           cout<<"the length of s2 is bigger"<<endl ;
           cout<<"s1 is:"<<s1<<endl<<"s2 is:"<<s2<<endl;
       cout<<"continue ?"<<endl<<"yes,input y"<<endl<<"no,input n"<<endl;
       cin >>p;  
       cin.get();
    }while(p=='y');
    return 0;
}