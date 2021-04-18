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
  string s; cin>>s;
  for(int i=0;i<11;i++){
      string t = s;
      reverse(all(t));
      bool valid = true;

      for(int j=0;j<t.size();j++){
          if(t[j] != s[j]){
              valid = false;
              break;
          }
      }
      if(valid){
          cout<<"Yes\n";
            return;
      }    
      s = "0" + s;
  }
  cout<<"No\n";
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
