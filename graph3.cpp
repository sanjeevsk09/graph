// undirected graph representation using adjacency list
#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
int V,e;
cout<< "enter no. of vertices and edges: "<<endl;
cin>>V>>e;
vector<int> adj[V+1];
for(int i=1; i<e+1; i++){

    int u,v;
    cout<<"enter edges= "<<endl;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}

for(int i=1;i<V+1;i++)
    {
        cout<<"\n"<<i;
        
        for(auto x: adj[i])
    {
              cout<<"-->"<<x;
    }}

    return 0;
}