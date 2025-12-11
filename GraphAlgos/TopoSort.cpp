#include<bits/stdc++.h>
using namespace std;

int N ,M;
vector<vector<int>> g;
vector<int> vis;
vector<int> indeg;
vector<int> topo;

bool dfs(int u){
    vis[u] = 1;
    for(int v : g[u]){
        if(vis[v] == 2)
            continue;
        if(vis[v] == 1)
            return true;
        if(dfs(v))
            return true;
    }

    vis[u] = 2;
    return false;
}

void solve(){
    cin >> N >> M;
    g.resize(N+1);
    vis.resize(N+1,0);
    indeg.resize(N+1);

    for(int i=0;i<M;i++){
        int u ,v;
        cin >> u >> v;
        g[u].push_back(v);
        indeg[v] += 1;
    }
    for(int i=1;i<=N;i++)
        if(!vis[i] && dfs(i)){
            cout << "IMPOSSIBLE" << endl;
            return ;
        }
    {
        priority_queue<int ,vector<int> ,greater<int>> pq;
        for(int i=1;i<=N;i++){
            if(indeg[i] == 0)
                pq.push(i);
        }

        while(!pq.empty()){
            int u = pq.top();
            pq.pop();
            topo.push_back(u);
            for(int v : g[u]){
                indeg[v] -= 1;
                if(indeg[v] == 0)
                    pq.push(v);
            }
        }

        for(auto x : topo)
            cout << x << ' ';
        cout << endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0) ,cout.tie(0);

    solve();

    return 0;
}
