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
  int x,n;
  cin>>x>>n;
  set<int> s;
  int ent;
  pi ans;
  for(int i=0;i<n;++i){
    cin>>ent;
    s.insert(ent);
  }
  for(int i=0; i<=n+1; ++i){
    int a = x-i;
    int b = x+i;
    auto it = s.lower_bound(a);
    if(it == s.end() || *it != a){
      cout<<a<<endl;
      return;
    }
    it = s.lower_bound(b);
    if(it == s.end() || *it != b){
      cout<<b<<endl;
      return;
    }
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
