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
  int n,t; cin>>n>>t;
  vpi v(n);
  for(int i=0;i<n;i++){
    cin>>v[i].F;
    v[i].S = i+1;
  }
  sort(all(v));
  for(int i=0;i<n-2;i++){
    int l = i+1;
    int r = n-1;
    while(l<r){
      if(v[i].F + v[l].F + v[r].F == t){
        vi ans;
        ans.PB(v[i].S); ans.PB(v[l].S); ans.PB(v[r].S);
        sort(all(ans));
        for(int i=0;i<3;i++)
          cout<<ans[i]<<" ";
        cout<<endl;
        return;
      }else if(v[i].F + v[l].F + v[r].F < t){
        l++;
      }
      else r--;
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
