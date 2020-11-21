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
 int big = 0;
 for(int i=0;i<n;i++){
   cin>>v[i];
   max_self(big, v[i]);
 }

 int ans = -1;
 for(int i=0;i<n;i++){
    if(v[i] == big){
      if(i-1 >= 0 && v[i-1] < v[i]){
        ans = i+1;
        break;
      }
      if(i+1<n && v[i+1] < v[i]){
        ans = i+1;
        break;
      }
    }
 }
 cout<<ans<<endl;
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
