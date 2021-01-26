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
  int n;cin>>n;
  set<string> a, b;
  while(n--){
    string str; cin>>str;
    if(str[0] == '!'){
      str.erase(str.begin());
      b.insert(str);
    }else
      a.insert(str);
  }
  for(auto it : b){
    if(a.find(it) != a.end()){
      cout<<it<<endl;
      return;
    }
  }
  cout<<"satisfiable\n";
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
