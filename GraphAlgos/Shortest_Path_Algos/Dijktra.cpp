#include<bits/stdc++.h>
using namespace std;

#define MAX INT_MAX
#define ll long long

#define vi vector<int> 
#define vii vector<vi>
#define pb push_back
#define bp pop_back

#define pi pair<int,int>
#define vpi vector<pi>

#define all(x) x.begin(),x.end();
#define sz(x) (int)x.size()

#define F first
#define S second 

int n;
vector<vpi> adj;
vi dist;


void solve(){
   cin >> n;
   adj.resize(n);
   dist.resize(n,MAX);

   int e;
   cin >> e ;
   for(int i=0;i<e;i++){
       int u ,v ,w;
       cin >> u >> v >> w;
       adj[u].pb({v,w});
   }

   // Dijktra 's Algorithm
   
   priority_queue<pi ,vpi ,greater<pi>> pq;
   int src = 0;

   dist[src] = 0;
   pq.push({dist[src],src});

   while(!pq.empty()){
       int v = pq.top().S;
       int dis = pq.top().F;
       pq.pop();

       if(dis != dist[v])
           continue;

       for(pi p : adj[v]){
           int u = p.F;
           int w = p.S;
           if(dist[v] + w < dist[u]){
               dist[u] = dist[v] + w;
               pq.push({dist[u],u});
           }
       }
   }

    for(int i=0;i<n;i++)
        cout << i << ':' << dist[i] << endl;

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0) ,cout.tie(0);

    solve();
    return 0;
}
