#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef long long ll;

template <typename T> void max_self(T& a, T b){
	a = max(a,b);
}

void solve(){	
  int n,m;cin>>n>>m;
  vi v(m);
  ll sum = 0;
  for(int i=0;i<m;i++){
    cin>>v[i];
    sum+=v[i];
  }
  ll ans = (ll)n-sum;
  max_self(ans,(ll)-1);
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
