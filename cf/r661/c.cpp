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
  vi v(n);
  for(int i=0;i<n;i++) cin>>v[i];
  sort(all(v));
  map<int,int> m[4];
  for(int i=0;i<n/2;i++)
    m[0][v[i]+ v[n-1-i]]++;
  for(int i=0;i<n-1;i+=2)
    m[1][v[i] + v[i+1]]++;
  for(int i=n-1;i>0;i-=2)
    m[2][v[i] + v[i-1]]++;
  for(int i=0;i<n;i++)
    m[3][v[i]]++;

  pi ans = MP(0,0);
  for(int i=0;i<3;i++){
    for(auto it:m[i]){
      //cout<<it.F<<" "<<it.S<<endl;
      if(it.S > ans.S)
        ans = it;
    }
  }
  vi val(n+1);
  for(int i=0;i<n;i++) val[v[i]]++;
  pi a = MP(0,0);
  for(int i=0;i<=n;i++){
    if(val[i] > a.S)
      a = MP(i, val[i]);
  }
  int b = 0;
  for(int i=0;i<=n;i++){
    if(val[i] > b && i != a.F)
      b = val[i];
  }

  if(min(a.S,b) > ans.S)
    ans.S = min(a.S,b);
  cout<<ans.S<<endl;
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
