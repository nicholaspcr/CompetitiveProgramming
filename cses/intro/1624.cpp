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

bool check(int i, int j, int mat[8][8]){
  for(int k=0;k<8;k++){
    if(mat[i][k] == 1)
      return false;
    if(mat[k][j] == 1)
      return false;
    if(mat[(i+k)%8][(j+k)%8] == 1)
      return false;
    if(mat[(i-k+8)%8][(j-k+8)%8] == 1)
      return false;
  }
  return true;
}

void solution(int board[8][8] , int piece){
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      if(board[i][j] == -1) continue;
      if(check(i,j, board) == true){
        if(piece == 8)
          ans++;
        else{
          board[i][j] = 1;
          solution(board, piece+1);
          board[i][j] = 0;
        }
      }
    }
  }
}

void solve(){
  int mat[8][8];
  string str;
  // PROBLEM ON INPUT READING
  for(int i=0;i<8;i++){
      cin>>str;
      for(int j=0;j<str.size();j++){
        if(str[j] =='*') mat[i][j] = -1;
        else mat[i][j] = 0;
      }
  }
  cout<<"TESTE\n";
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++)
      cout<<mat[i][j]<<" ";
    cout<<endl;
  }
  cout<<"Done\n";
  solution(mat, 1);
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
