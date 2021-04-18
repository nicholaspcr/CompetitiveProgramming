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

ll base_d(string n, ll x){
  vi dgts;
  for(int i=n.size()-1;i>=0;i--){
    dgts.pb(int(n[i] - '0'));
  }

  ll op = 1;
  ll num = 0;
  for(int i=0;i<dgts.size();i++){
    num += op*dgts[i];
    op *= x;    
  }
  return num;
}

int get_big(string n){
  int b = 0;
  for(int i=0;i<n.size();i++){
    b = max(b,  int(n[i] - '0'));
  }
  return b;
}

void solve(){	
 string x;
 ll m;
 cin>>x>>m;
 int d = get_big(x) + 1;

 int ans = 0;
 while(base_d(x,d) <= m){
  ans++;
  d++;
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
