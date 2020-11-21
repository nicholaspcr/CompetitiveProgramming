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

int qRi, qRu;



bool nullRing(vi inpt){
  for(int i=0;i<(int)inpt.size()-1;i++){
    if(inpt[i] == 0){
      return true; 
    }
  }
  return false;
}

bool missingRing(vi inpt){
  for(int i=0;i<(int)inpt.size()-1;i++){
    if(abs(inpt[i]) > qRi){
      return true;
    }
  }
  return false;
}

bool repeatedRing(vi inpt){
  if(abs(inpt[0]) == abs(inpt[1])  ||
      abs(inpt[1]) == abs(inpt[2]) ||
     abs(inpt[0]) == abs(inpt[2]))
    return true;
  return false;
}


void setRings(vi &r, int n){
  for(int i=0;i<(int)r.size();i++)
    r[i] = 0;
  int pos = 1;
  while(n){
    r[pos] = (n & 1);
    n >>= 1;
    pos++;
  }
  /*
  for(int i=0;i<(int)r.size();i++)
    cout<<r[i]<<" ";
  cout<<endl;
  */
}

int getLimit(int qRi){
  int ans = 0;
  for(int i=0;i<qRi;i++){
    ans |= 1;
    ans<<=1;
  }
  ans |= 1;
  return ans;
}

void solve(){	
  cin>>qRi >> qRu;
  vector<vi> mat(qRu, vi(4));
  int state = 3;
  //cout<<qRi<<" "<<qRu<<endl;
  for(int i=0;i<qRu;i++){
    for(int j=0;j<4;j++){
      cin>>mat[i][j];
    }
    if(nullRing(mat[i])) state = 0;
    if(missingRing(mat[i]) && state > 0) state = 1;
    if(repeatedRing(mat[i]) && state > 1) state = 2;
  }
  if(state < 3){
    if(state == 0)
      cout<<"INVALID: NULL RING\n";
    else if(state == 1)
      cout<<"INVALID: RING MISSING\n";
    else
      cout<<"INVALID: RUNE CONTAINS A REPEATED RING\n";
  }else{
    vi rings(qRi+1);
    bool flag;
    //cout<< (1<<(qRi+1))<<endl;
    //cout<< getLimit(qRi)<<endl;
    for(int i = 0; i <= getLimit(qRi);i++){
      setRings(rings, i);
      flag = true;
      for(int j=0;j<qRu;j++){
        if(mat[j][0] < 0 && !rings[abs(mat[j][0])])
            continue;
        if(mat[j][0] > 0 && rings[abs(mat[j][0])])
            continue;
        
        if(mat[j][1] < 0 && !rings[abs(mat[j][1])])
            continue;
        if(mat[j][1] > 0 && rings[abs(mat[j][1])])
            continue;

        if(mat[j][2] < 0 && !rings[abs(mat[j][2])])
            continue;
        if(mat[j][2] > 0 && rings[abs(mat[j][2])])
            continue;
        

        //skipped if one is true
        flag = false;
        break;
      }
      if(flag){
        cout<<"RUNES SATISFIED!\n";
        return;
      }
    }
    cout<<"RUNES UNSATISFIABLE! TRY ANOTHER GATE!\n";
  }
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
