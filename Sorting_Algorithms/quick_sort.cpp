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

int partition(int lb ,int ub ,vi& nums){

    int idx = lb + rand() % (ub - lb + 1);

    swap(nums[idx],nums[ub]);
    int i = lb - 1;
    int pivot = nums[ub];

    for(int j=lb;j<ub;j++){
        if(nums[j] < pivot){
            i++;
            swap(nums[i],nums[j]);
        }
    }

    swap(nums[i+1],nums[ub]);

    return i + 1;
}

void quick_sort(int lb ,int ub ,vi& nums){
    if(ub - lb > 0){
        int idx = partition(lb,ub,nums);
        quick_sort(lb,idx-1,nums);
        quick_sort(idx+1,ub,nums);
    }
}

void solve(){    

    int n;
    cin >> n;
    vi nums(n); 
    for(int i=0;i<n;i++)
        cin >> nums[i];

    quick_sort(0,n-1,nums);

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