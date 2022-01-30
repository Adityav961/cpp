#include <bits/stdc++.h>
using namespace std;

void showPair(vector<pair<int,int>>g){
    for(int i = 0; i<g.size();i++){
        cout<<g[i].first<<" "<<g[i].second<<endl;
    }
}

void sum(vector<pair<int,int>>v){
    long long sum = 0;
    for(int i = 0; i<v.size();i++)
        sum += v[i].second;
    cout<<sum;
    cout<<endl;
}

void fun(){
    int t;
    vector<int>vort,vreverse;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            v.push_back(make_pair(x,y));
        }
        sum(v);
    }
}

int main(){
    fun();
}