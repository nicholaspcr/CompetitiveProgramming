#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define FF first.first
#define FS first.second
#define MAXN 200001

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef long long ll;

template <typename T> void max_self(T& a, T b){
  a = max(a,b);
}

void solve(){
  int n; cin>>n;
  vector<pair<pi, int>> v;
  for(int i=0;i<n;i++){
    int a, b;
    cin>>a>>b;
    v.PB(MP(MP(a, 1), i));
    v.PB(MP(MP(b+1,-1), i));
  }
  sort(all(v));
  int ans = 0, sum = 0;
  for(auto &x: v){
    sum += x.FS;
    ans = max(ans, sum);
  }
  cout<<ans<<endl;
  vi id(n);
  set<int> st;
  for(int i=0;i<n;i++) st.insert(i+1);
  
  for(auto &x:v){
    if(x.FS != 1){
      st.insert(id[x.S]);
      continue;
    }
    auto it = st.begin();
    id[x.S] = *it;
    st.erase(it);
  }
  for(int i=0;i<n;i++){
    cout<<id[i]<<" ";
  }
  cout<<endl;
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
