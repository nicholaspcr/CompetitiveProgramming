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



ll get_x(ll n){
  vll v;
  while(n){
    v.pb(n%10);
    n/=10;
  }
  sort(all(v));
  ll ans = 0;
  for(int i=0;i<v.size();i++){
    ans = 10*ans + v[i];
  }
  return ans;
}

ll get_y(ll n){
  vll v;
  while(n){
    v.pb(n%10);
    n/=10;
  }
  sort(v.rbegin(), v.rend());
  ll ans = 0;
  for(int i=0;i<v.size();i++){
    ans = 10*ans + v[i];
  }
  return ans;
}

void solve(){
  ll n;
  int k;
  cin>>n>>k;
  ll prev = n;
  for(int i=0;i<k;i++){
    prev = n;
    n = get_y(n) - get_x(n);
    
    if(prev == n) break;
    //cout<<get_y(n)<<" "<<get_x(n)<<" "<<n<<endl;
  }
  cout<<n<<endl;
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
