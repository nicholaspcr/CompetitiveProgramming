#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

void solve(){
    int n, x; cin >> n >> x;
    vi v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    
    int ans = 0;
    int pos = v.size() - 1;
    int beg = 0;
    while(pos >= beg){
        if(v[pos] + v[beg] <= x){
            beg++;
        }
        pos--;
        ans++;
    }
    cout << ans << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
