#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;

void solve(){	
  int n; cin>>n;
  vll v(n);
  ll x = 0;
  for(int i=0;i<n;i++){
    ll a, b; cin>>a>>b;
    x -= a;
    v[i] = a+a+b;
  }
  sort(all(v));
  ll ans = 0;
  while(x <= 0){
    ans++;
    x += v.back();
    v.pop_back();
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
