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
  int n,x,y;
  cin>>n>>x>>y;
  double euc = sqrt((x*x) + (y*y));
  double ans = euc / (double)n;
  if (euc == n) {
    cout<<1<<endl;
  }else if(euc <= n+n){
    cout<<2<<endl;
  }else{
    cout<<int(ceil(ans))<<endl;
  }
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
