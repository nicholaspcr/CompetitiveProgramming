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
  int n; cin>>n;
  vector<string> m(n);
  for(int i=0;i<n;i++)
    cin>>m[i];
/*
  for(int i=0;i<n;i++)
    cout<<m[i]<<endl;
*/
  for(int i=n-1;i>=0;i--){
    for(int j=n-1;j>=0;j--){
      int nX = i+1;
      int nY = j+1;
      if(m[i][j] == '1'){
        bool a = true;
        if(nX < n)
          a = m[nX][j] == '1';
        bool b = true;
        if(nY < n)
          b = m[i][nY] == '1';

        if(a == false && b == false){
          cout<<"NO\n";
          return;
        }
      }
    }
  }
  cout<<"YES\n";
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
