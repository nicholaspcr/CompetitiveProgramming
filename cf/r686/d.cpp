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

void solve(){	
  ll n; cin>>n;
  vector<pair<int,ll>> op;
  for(ll i = 2; i*i <= n; i++){
    int cont = 0;
    while(n%i == 0){
      cont++;
      n/=i;
    }
    if(cont)
      op.PB({cont,i});
  }
  if(n > 1){
    op.PB({1,n});
  }

  sort(op.rbegin(), op.rend());
  // answer of size i(op.F) and with the value of op[0].S
  vector<ll> ans(op[0].F, op[0].S);
  for(int i=1;i<int(op.size());i++){
    for(int j=0;j<op[i].F;j++)
      ans[op[0].F-1] *= op[i].S;
  }
  cout<<ans.size()<<endl;
  for(auto it: ans) cout<< it << " ";
  cout<<endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin >> t;
  while(t--) solve();
  //
  //solve();
  return 0;
}
