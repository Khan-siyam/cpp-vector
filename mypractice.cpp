//vector
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);
    v.push_back(26);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     //cout<<endl;

    }
    cout<<endl;
    v.resize(10);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     //cout<<endl;

    }
    v[9]=30;
    cout<<v[9]<<endl;
    vector<int> pearl;
    pearl = v;

cout<<pearl.size()<<endl;
    for(int i=0;i<pearl.size();i++){
        cout<<pearl[i]<<" ";
     //cout<<endl;

    }
    cout<<endl;
    vector<int>:: iterator khan;
    for(khan=pearl.begin();khan!=pearl.end();khan++){
        cout<<*khan<<" ";
    }
    cout<<endl;
    vector<int>temp;
    temp=pearl;
    cout<<temp.size()<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cout<<temp[i]<<" ";
    cout<<endl;
    temp.clear();
    cout<<temp.size()<<endl;
}
