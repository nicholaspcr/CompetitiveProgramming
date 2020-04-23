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

#define MAXN 200001
 pi par[MAXN];

void find(int u){
  //cout<<u<<endl;
  par[u].S++;
  if(par[u].F != u){
    find(par[u].F);
  }
}

void solve(){	
  int n;cin>>n;
  for(int i=0;i<=n;i++){
    par[i].F = i;
    par[i].S = 0;
  }
  vi a(n);
  for(int i=1;i<n;i++){
    cin>>a[i];
    a[i]--;
    find(a[i]);
  }
  for(int i=0;i<n;i++)
    cout<<par[i].S<<endl;
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
