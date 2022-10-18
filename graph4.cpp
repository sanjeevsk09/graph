// direceted graph representation using adjacency matrix
#include<iostream>
#include<vector>
using namespace std;
int main()
{
int V,E;
cout<< "enter No. of vertices and edges= "<<endl;
cin>>V>>E;
vector<vector<int>> adj(V+1,vector<int>(V+1,0));
 for(int i =1; i<E+1; i++){
int u, v;

cout<<" enter the edges "<<endl;
cin>>u>>v;
adj[u][v]=1;
 }

 for(int i=1; i<V+1; i++)
 {
    for(int j=1; j<V+1;j++){
cout<<adj[i][j]<<" ";
    }
    cout<<endl;
 }
return 0;
}
