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

bool checkStr(string s){
  if(s.size() <4) return false;
  
  if(s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0')
    return true;

  if(s[0] == '2' && s[1] == '0' && s[2] == '2' && s[s.size()-1] == '0')
    return true;

  if(s[0] == '2' && s[1] == '0' && s[s.size()-2] == '2' && s[s.size()-1] == '0')
    return true;

  if(s[0] == '2' && s[s.size()-3] == '0' && s[s.size()-2] == '2' && s[s.size()-1] == '0')
    return true;
  
  if(s[s.size()-4] == '2' && s[s.size()-3] == '0' && s[s.size()-2] == '2' && s[s.size()-1] == '0')
    return true;
  
  return false;
}

void solve(){	
  int n; cin>>n;
  string str;cin>>str;
  if(checkStr(str))
    cout<<"Yes\n";
  else
    cout<<"No\n";

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
