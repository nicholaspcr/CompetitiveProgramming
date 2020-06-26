#include <bits/stdc++.h>
#define F first
#define S second
#define SF second.first
#define SS second.second
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


void print(const vector<int>& v){
  for(int x : v)
    cout<<x+1<<" ";
  cout<<endl;
}

void solve(){	
  int n;ll x;
  cin>>n>>x;
  vi v(n);
  for(int i=0;i<n;++i){
    cin>>v[i];
  }
  map<int,pair<int,int>> lhs;
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++)
      lhs[v[i]+v[j]] = {i,j};
    for(int j=i+2; j<n;j++){
      int t = v[j] + v[i+1];
      auto it = lhs.find(x-t);
      if(it == lhs.end()) continue;

      print({it->S.F, it->S.S, i+1, j});
      return;  
    }
  }
  cout<<"IMPOSSIBLE\n";
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
