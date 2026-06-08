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

void merge(vi& nums ,int lb ,int mi ,int ub){
    vi tmp;
    int i = lb ,j = mi + 1;
    while(i <= mi && j <= ub){
        if(nums[i] < nums[j])
            tmp.pb(nums[i++]);
        else
            tmp.pb(nums[j++]);

    }

    while(i <= mi)
        tmp.pb(nums[i++]);
    
    while(j <= ub)
        tmp.pb(nums[j++]);
    
    for(int k=lb;k<=ub;k++)
        nums[k] = tmp[k - lb];
}

void merge_sort(vi& nums ,int lb ,int ub){
    if(ub - lb >= 1){
        int mi = (ub - lb)/2 + lb;
        merge_sort(nums,lb,mi);
        merge_sort(nums,mi+1,ub);
        merge(nums,lb,mi,ub);
    }
}

void solve(){
    
    int n;
    cin >> n;
    vi nums(n); 
    for(int i=0;i<n;i++)
        cin >> nums[i];

    merge_sort(nums,0,n-1);

    for(int i=0;i<n;i++)
        cout << nums[i] << ' ';
    cout << endl;
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