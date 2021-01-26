#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<pair<ll,ll>> vpll;

void solve(){	
  int n; cin>>n;
  vector<string> vs;
  vs.pb("0");
  vs.pb("1");
  for(int i=2; i < (1<<n); i = i<<1){
    for(int j=i-1; j>=0; j--)
      vs.pb(vs[j]);
    for(int j=0;j<i;j++)
      vs[j] = "0" + vs[j];
    for(int j = i; j < 2*i; j++)
      vs[j] = "1" + vs[j];
  }
  for(int i=0;i<(int)vs.size();i++)
    cout<<vs[i]<<endl;

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
