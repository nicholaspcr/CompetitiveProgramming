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
  int n, m; cin>>n>>m;
  vector<string> vs(n);
  for(int i=0;i<n;i++) cin>>vs[i];
  string ans = vs[0];

  for(int i=0;i<m;i++){
    char op = ans[i];
    
    for(char ch='a';ch<='z';ch++){
      ans[i] = ch;
      bool flag = true;
      for(int j=0;j<n;j++){
        int errors = 0;
        for(int k=0;k<m;k++){
          if(ans[k] != vs[j][k])
            errors++;
        }
        if(errors > 1){
          flag = false;
          break;
        }
      }
      if(flag){
        cout<<ans<<endl;
        return;
      }
    }
    ans[i] = op;
  }
  cout<<-1<<endl;
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
