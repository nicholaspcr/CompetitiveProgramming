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

template <typename T> void min_self(T& a, T b){
  a = min(a,b);
}

void solve(){	
  int n;cin>>n;
  vi v(n);
  map<int,int> m;
  for(int i=0;i<n;++i){
    cin>>v[i];
    m[v[i]]++;
  }
  sort(all(v));
  vi memo(v[n-1]+1);
  int ans = 0;
  for(int i=0;i<n;i++){
    if(memo[v[i]] == 1) continue;
    memo[v[i]] = 1; 
    if(m[v[i]] == 1)
      ans++;
    for(int j=v[i];j<=v[n-1];j+=v[i]){
      memo[j] = 1;
    }
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
