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
  ll n; cin>>n;
  set<ll> ans;
  if(~n & 1) ans.insert(n/2);
  const int l = 1e7;
  for(int i=1;i<=l;i++){
    if(n%i == 0){
      vector<ll> poss;
      for(auto it:ans){
        int op = it * i;
        if(op < n && n%op == 0)
          poss.PB(op);
      }
      for(int j=0;j<(int)poss.size();j++)
        ans.insert(poss[j]);
      ans.insert(i);
    }
    
  }
  ans.insert(n);
  for(auto it:ans)
    cout<<it<<endl;
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
