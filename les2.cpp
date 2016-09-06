#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> Num;
    int num;
    cout<<"输入几个数字"<<endl;
    while(cin>>num)
        Num.push_back(num);

    for(vector<int>::size_type ix=0;ix!=Num.size()/2;ix++) 
        cout<<"第"<<ix*2+1<<"个数和第"<<ix*2+2<<"个数的和是 "<<Num[ix*2]+Num[ix*2+1]<<endl;

    if(Num.size()%2!=0)
        cout<<"有奇数个数，最后一个数的值是:"<<Num[Num.size()-1]<<endl;

    return 0;
}