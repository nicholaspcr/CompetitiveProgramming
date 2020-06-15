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
  int n,m;
  cin>>n>>m;
  int mat[n][m];
  int ones = 0;
  for(int i=0;i<n;++i)
    for(int j=0;j<m;++j)
      cin>>mat[i][j];

  set<int> r,c;
  int a = 0, b = 0;
  for(int i=0;i<n;++i){
    for(int j=0;j<m;++j){
      if(mat[i][j]){
        r.insert(i);
        c.insert(j);
      }
    }
  }
  int mn = min(n-r.size(), m-c.size());
  if(mn%2)
    cout<<"Ashish\n";
  else
    cout<<"Vivek\n";
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
