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
  int a,b;
  cin>>a>>b;
  int l = 0, r = 0;
  while(a){
    l += a%10;
    a/=10;
  }
  while(b){
    r += b%10;
    b/=10;
  }
  cout<<max(l,r)<<endl;
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
