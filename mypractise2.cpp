//vector iterator,for each loop,sort,reverse..
#include<bits/stdc++.h>
using namespace std;
int main()
{


    vector<int> v = {3,6,3,7,2,8,1};
    cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
        cout<<endl;
        vector<int>:: iterator it;
        for(it=v.begin();it!=v.end();it++) cout<<*it<<" ";
        cout<<endl;
        for(int u:v)cout<<u<<" ";
        cout<<endl;
        sort(v.begin(),v.end());
        for( int u:v)cout<<u<<" ";
        cout<<endl;
        sort(v.rbegin(),v.rend());
        for(int u:v)cout<<u<<" ";
        cout<<endl;
        reverse(v.begin(),v.end());
        for(int u:v)cout<<u<<" ";
        cout<<endl;
        cout<<*v.begin()<<endl;
        v.pop_back();
        cout<<v.size()<<endl;
        for(int u:v)cout<<u<<" ";
        cout<<endl;
        cout<<v.back()<<endl;
        return 0;
}
