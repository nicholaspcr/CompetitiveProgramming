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
  string s,t;
  cin>>s>>t;
  int ans = INT_MAX;
  for(int i=0;i<(int)s.size();i++){
    int best = 0;
    if(i + (int)t.size() > s.size())
      break;
    for(int j=i;j < i +(int)t.size(); j++){
      if(s[j] != t[j-i]) best++;
    }
    min_self(ans,best);
  }
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
