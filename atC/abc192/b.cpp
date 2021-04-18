#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;

void solve(){	
  string str;
  cin>>str;
  for(int i=0;i<str.size();i++){
    if(i & 1){
      if(str[i] >= 'a' && str[i] <= 'z'){
        cout<<"No\n";
        return;
      }
    }else{
      if(str[i] >= 'A' && str[i] <= 'Z'){
        cout<<"No\n";
        return;
      }
    }
  }
  cout<<"Yes\n";
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
