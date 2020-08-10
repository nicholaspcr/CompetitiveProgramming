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
  for(int i=0;i<n;i++) cin>>a[i];
  
  int ans = -1;
  for(int i=n;i>=0;){
    int l = i-1;
    int r = i+1;
    while(a[l] == a[i] && l >= 0) l--;
    while(a[r] == a[i] && r < n) r++;
    if(l > -1 && r < n && a[i] < a[l] && a[i] < a[r]){
      ans = l;
      break;
    }
    i = l;
  }
  cout<<ans+1<<endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin >> t;
  while(t--) solve();
  //
  //solve();
  return 0;
}
