#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod ((int)1e9+7)
#define endl '\n'

#define vi vector<int>
#define vii vector<vi>
#define pi pair<int,int>
#define vpi vector<pi>

#define F first
#define S second
#define pb push_back
#define bp pop_back
#define mp make_pair
#define all(x) x.begin(),x.end()

vector<int> par;
vector<int> sz;

void make_set(int n){
    par.resize(n);
    sz.resize(n);
    for(int i=0;i<n;i++){
        par[i] = i;
        sz[i] = 1;
    }
}

int find_set(int u){
    if(u == par[u])
        return u;

    return par[u] = find_set(par[u]);
}

void union_sets(int u ,int v){
    int pu = find_set(u);
    int pv = find_set(v);

    if(pu == pv)
        return ;

    if(sz[pu] < sz[pv])
        swap(pu,pv);

    par[pv] = pu;
    sz[pu] += sz[pv];
}

void solve(){
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    // cin >> tc;
    while(tc--)
        solve();

    return 0;
}