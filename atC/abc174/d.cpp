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
  string s; cin>>s;
  int r=0,w=0;
  for(int i=0;i<n;i++){
    if(s[i] == 'W')
      w++;
    if(s[i] == 'R')
      r++;
  }
  string newS="";
  while(r--)
    newS+="R";
  while(w--)
    newS+="W";

  int ans=0;
  for(int i=0;i<n;i++)
    if(s[i] != newS[i])
      ans++;

  cout<<ans/2<<endl;
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
