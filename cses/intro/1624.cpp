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
typedef vector<bool> vb;
typedef long long ll;

template <typename T> void max_self(T& a, T b){
  a = max(a,b);
}

template <typename T> void min_self(T& a, T b){
  a = min(a,b);
}

ll ans = 0;
vector<vector<bool>> mat(8, vector<bool>(8));

vector<bool> col(16), dr(16), dl(16);

void search(int r){
  if(r == 8){
      ans++;
      return;
  }

  for(int i=0;i<8;i++){
    if(col[i] || dr[r+i] || dl[r-i+7] || mat[r][i])
      continue;

    col[i] = dr[r+i] = dl[r-i+7] = true;
    search(r+1);
    col[i] = dr[r+i] = dl[r-i+7] = false;
  }
}


void solve(){
  for(int i=0;i<8;i++){
    string str;
    cin>>str;
    for(int j=0;j<(int)str.size();j++){
      if(str[j] == '*')
        mat[i][j] = true;
    }
  }
  for(int i=0;i<16;i++)
    col[i] = dr[i] = dl[i] = false;
  search(0);
  cout<<ans<<endl;
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
