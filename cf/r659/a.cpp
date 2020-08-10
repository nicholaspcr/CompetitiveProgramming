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
  int const strSize = 200;
  int n;cin>>n;
  vi ent(n);
  for(int i=0;i<n;i++) cin>>ent[i];
  vector<string> ans(n+1, "");
  for(int i=0;i<strSize;i++)
    ans[0] += "a";

  for(int i=0;i<n;i++){
    for(int j=0;j<ent[i];j++){
      ans[i+1] += ans[i][j];
    }
    for(char ch='a';ch<='z';ch++){
      if(ch != ans[i][ent[i]] && ch != ans[i+1][ent[i]-1]){
        while(ans[i+1].size() < strSize)
          ans[i+1] += ch;
        break;
      }
    }
  }

  for(int i=0;i<=n;i++)
    cout<<ans[i]<<endl;

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
