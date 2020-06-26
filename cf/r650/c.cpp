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
  int n, x;
  cin>>n>>x;
  string str; cin>>str;
  if(n <= x+1){
    bool flag = true;
    for(int i=0;i<n;i++)
      if(str[i] == '1')
        flag = false;
    if(flag)
      cout<<1<<endl;
    else
      cout<<0<<endl;
    return;
  }


  int c = 0;
  int ans = 0;
  bool f = true;
  for(int i=0;i<=x;i++){
    if(str[i] == '1') f = false;
  }
  if(f) {str[0] = '1';ans++;}
  f=true;
  for(int i=n-1;i>=n-1-x;i--){
    if(str[i]=='1')f=false;
  }
  if(f) {str[n-1]='1';ans++;}
  for(int i=0;i<str.size();i++){
    if(str[i] == '1')
      c=0;
    else{
      c++;
      if(c > (2*x)){
        str[i-x-1] = '1';
        ans++;
        c=x;
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
