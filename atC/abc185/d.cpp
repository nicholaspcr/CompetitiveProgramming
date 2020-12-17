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

void solve(){	
  int n,m;
  cin>>n>>m;
  if(!m){
    cout<<1<<endl;
    return;
  }
  vi marks(m);
  for(int i=0;i<m;i++)
    cin>>marks[i];
  sort(all(marks));
  
  vi secs;
  if(marks[0] != 1)
    secs.pb(marks[0] - 1);
  for(int i=1;i<m;i++){
    int op = marks[i] - marks[i-1] - 1;
    secs.pb(op);
  }
  if(marks[m-1] != n){
    secs.pb(n-marks[m-1]);
  }
  int minStep = 1e9;
  for(auto e:secs){
    if(e != 0)
      minStep = min(minStep, e);
  }
  //cout<< minStep << endl;
  ll ans = 0;
  for(int i=0;i<(int)secs.size();i++){
    ans += secs[i]/minStep;
    if(secs[i]%minStep) ans++;
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
