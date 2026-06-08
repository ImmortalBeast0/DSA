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

void heapify(int n ,int par ,vi& nums){

    int lt = par * 2 + 1;
    int rt = par * 2 + 2;

    int largest = par;
    
    if(lt < n && nums[lt] > nums[largest])
        largest = lt;

    if(rt < n && nums[rt] > nums[largest]) 
        largest = rt;

    if(largest != par){
        swap(nums[largest],nums[par]);
        heapify(n,largest,nums);
    }
}

void heap_sort(vi& nums){

    int n = nums.size();
    for(int i = n/2-1;i>=0;i--)
        heapify(n,i,nums);

    for(int i=n-1;i>=1;i--){
        swap(nums[0],nums[i]);
        heapify(i,0,nums);
    }

}

void solve(){
        
    int n;
    cin >> n;
    vi nums(n); 
    for(int i=0;i<n;i++)
        cin >> nums[i];

    heap_sort(nums);

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