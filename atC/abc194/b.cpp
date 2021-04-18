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
  int n;cin>>n;
  vi a(n),b(n);
  for(int i=0;i<n;i++)
    cin>>a[i]>>b[i];
 
  ii rA = { 0, 1e7 };
  for(int i=0;i<n;i++){
    if(a[i] < rA.s)
      rA = {i,a[i]};
  }

  int ans = 1e7;
  for(int i=0;i<n;i++){
    if(i == rA.f){
      ans = min(ans, rA.s + b[i]);
    }else{
      ans = min(ans, max(rA.s, b[i]));
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
