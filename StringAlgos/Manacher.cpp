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

//Manacher Algorithm

struct Manacher{
    vector<int> p;

    void init(string s){
        string t;
        for(char c : s){
            t += '#';
            t += c;
        }        

        t += '#';
        build(t);
    }

    void build(string s){

        int n = s.length();
        p.resize(n,1);

        //boundary box
        int l = 1 ,r = 1;
        for(int i=1;i<n;i+=1){
            p[i] = max(0ll,min(r-i,p[l + (r-i)]));

            while(i - p[i] >= 0 && i + p[i] < n && s[i - p[i]] == s[i + p[i]])
                p[i] += 1;

            if(i + p[i] > r){
                l = i - p[i];
                r = i + p[i];
            }            
        }

        for(char c : s)
            cout << c << ' ';
        cout << endl;
        for(int x : p)
            cout << x << ' ';

    }

    int getLongestPalinLen(int cen ,bool odd){
        int idx = cen * 2 + 1;
        if(odd == false)
            idx += 1;
        return p[idx] - 1;
    }

    bool isPalindrome(int l ,int r){
        return (r - l + 1) <= (getLongestPalinLen((l+r)/2,(r-l+1) % 2));
    }

}manacher;

void solve(){
    manacher.init("boobcboob");
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