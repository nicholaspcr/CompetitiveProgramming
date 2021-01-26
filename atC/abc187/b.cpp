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
  vii p(n);
  for(int i=0;i<n;i++)
    cin>>p[i].f>>p[i].s;
  int ans = 0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      int a = p[i].f;
      int b = p[i].s;
      int c = p[j].f;
      int d = p[j].s;
      if(abs(a-c) >= abs(b-d))
        ans++;
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
