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
  int n,m;cin>>n>>m;
  vector<vi> mat(101, vi(101));
  vpi a(n), b(m);
  for(int i=0;i<n;i++){
    int ent; cin>>ent;
    a[i] = { 0, ent };
  }
  for(int i=0;i<m;i++){
    int ent; cin>>ent;
    b[i] = { ent, 0 };
  }
  
  vpi conflicts;
  for(int i=0;i<=100;i++){
    for(int j=0;j<n;j++){
      for(int k=0;k<m;k++){
        if(a[j].F == b[k].F && a[j].S == b[k].S){
          conflicts.PB({j,k});
        }
      }
    }
    for(int j=0;j<n;j++) a[j].F++;
    for(int j=0;j<m;j++) b[j].S++;
  }
  
  set<int> A,B;
  for(auto e: conflicts){
    //cout<<e.F<<" "<<e.S<<endl;
    A.insert(e.F);
    B.insert(e.S);
  }

  //cout<<A.size()<<" "<<B.size()<<endl;
  cout<<min(A.size(),B.size())<<endl;
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
