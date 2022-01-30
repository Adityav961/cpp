// C++ program to illustrate Pointer Arithmetic in C++
#include <bits/stdc++.h>
using namespace std;
void show(vector<int>g){
    for(auto i = g.begin(); i!=g.end();++i)
        cout<<*i<<" ";
    cout<<"\n";
}

vector<int> sortVector(vector<int>v){
    sort(v.begin(), v.end());
    return v;
}

vector<int> reverseVector(vector<int>v){
    
    reverse(v.begin(), v.end());
    return v;
}

void fun(){
    int t;
    vector<int>vort,vreverse;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        cout<<"Original Vector"<<endl;
        show(v);
        vort = sortVector(v);
        cout<<"Sorted Vector"<<endl;
        show(vort);
        vort.clear();
        vreverse = reverseVector(v);
        cout<<"Reversed Vector"<<endl;
        show(vreverse);
        vreverse.clear();
    }
}

int main(){
    fun();
}