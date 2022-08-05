#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define REP(i,a,b) for(int i = a; i < b; i++)
#define PER(i,a,b) for(int i = a; i >= b; i--)

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;

typedef tree<int,null_type,less<int>,rb_tree_tag,
        tree_order_statistics_node_update> indexed_set;
// find_by_order(x); -> returns an iterator to the element at given position
// order_by_key(x);  -> returns the position of a given element
//      |-> if does not exists in set, returns position it would have if it was.

void solve(){
    int n; cin>>n;
    vi a(n);
    int same = 0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        same += (a[i] == i);
    }
    ll ans = (ll)same * (same-1) / 2;
    for(int i=0;i<n;++i){
        if(a[i] > i && a[a[i]] == i)
            ans++;
    }
    cout<<ans<<endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //int t; cin >> t;
  //while(t--) solve();
  //
  solve();
  return 0;
}
