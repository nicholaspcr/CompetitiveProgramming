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

template <typename T> void max_self(T& a, T b){
  a = max(a,b);
}

template <typename T> void min_self(T& a, T b){
  a = min(a,b);
}

void solve(){	
  int n;cin>>n;
  vi a(n);
  for(int i=0;i<n;++i)cin>>a[i];
  sort(all(a));
  vi op;
  for(int i=0;i<n/2;i++){
    op.PB(a[n-i-1]);
    op.PB(a[i]);
  }
  if(n&1) op.PB(a[n/2]);
  int ans = 0;
  for(int i=0;i<op.size();i++)
    cout<<op[i]<<" ";
  cout<<endl;
  for(int i=1;i<n-1;i++){
    ans += min(a[i-1], a[i+1]);
  }
  if(n>2)
    ans += min(a[n-2], a[0]);
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
