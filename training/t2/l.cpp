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
  string str;
  while(getline(cin, str)){
    if(cin.eof())
      break;
  map<char,char> m;
  vector<char> v{ 'a', 'i', 'y', 'e', 'o', 'u' };
  vector<char> c{'b', 'k', 'x', 'z', 'n', 'h', 'd', 'c', 'w', 'g', 'p', 'v', 'j', 'q', 't', 's', 'r', 'l', 'm', 'f'};

  int vSz = (int)v.size();
  int cSz = (int)c.size();
  for(int i=0;i<vSz;i++){
      m[v[i]] = v[(i+3+vSz)%vSz];
      m[toupper(v[i])] = toupper(v[(i+3+vSz)%vSz]);
  }
  for(int i=0;i<cSz;i++){
      m[c[i]] = c[(i+10+cSz)%cSz];
      m[toupper(c[i])] = toupper(c[(i+10+cSz)%cSz]);
  }
  
  for(int i=0;i<(int)str.size();i++){
    if(tolower(str[i]) >= 'a' && tolower(str[i]) <= 'z')
      cout<<m[str[i]];
    else
      cout<<str[i];
  }
  cout<<endl;
  }
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
