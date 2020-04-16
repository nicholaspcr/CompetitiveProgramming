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

void change(int* a){
  if(*a == 1)
    *a = 2;
  else
    *a = 1;
}

bool check(int sud[9][9]){
  map<int,int> m;
  for(int i = 0; i < 3;i++){
    for(int j=0;j<3;j++){
      m[sud[i][j]]++;
    }
  }
  if(m.size() != 8) return false;
   m.clear();
  for(int i = 3; i < 6;i++){
    for(int j=0;j<3;j++){
      m[sud[i][j]]++;
    }
  }
  if(m.size() != 8) return false;
   m.clear();
  for(int i = 6; i < 9;i++){
    for(int j=0;j<3;j++){
      m[sud[i][j]]++;
    }
  }
  if(m.size() != 8) return false;
  
  
   m.clear();
  for(int i = 0; i < 3;i++){
    for(int j=3;j<6;j++){
      m[sud[i][j]]++;
    }
  }
  if(m.size() != 8) return false;
   m.clear();
  for(int i = 3; i < 6;i++){
    for(int j=3;j<6;j++){
      m[sud[i][j]]++;
    }
  }
  if(m.size() != 8) return false;
   m.clear();
  for(int i = 6; i < 9;i++){
    for(int j=3;j<6;j++){
      m[sud[i][j]]++;
    }
  }
  if(m.size() != 8) return false;
   m.clear();
  
  
  for(int i = 0; i < 3;i++){
    for(int j=6;j<9;j++){
      m[sud[i][j]]++;
    }
  }
  if(m.size() != 8) return false;
   m.clear();
  for(int i = 3; i < 6;i++){
    for(int j=6;j<9;j++){
      m[sud[i][j]]++;
    }
  }
  if(m.size() != 8) return false;
   m.clear();
  for(int i = 6; i < 9;i++){
    for(int j=6;j<9;j++){
      m[sud[i][j]]++;
    }
  }
  if(m.size() != 8) return false;
   m.clear();

  return true;
}

void solve(){	
  int sud[9][9];
  string str;
  for(int i=0;i<9;i++){
    cin>>str;
    for(int j=0;j<(int)str.size();j++)
      sud[i][j] = (int)str[j] - (int)'0';
    
  }
 
  change(&sud[0][0]);
  change(&sud[4][1]);
  change(&sud[8][2]);
  change(&sud[1][3]);
  change(&sud[5][4]);
  change(&sud[6][5]);
  change(&sud[2][6]);
  change(&sud[3][7]);
  change(&sud[7][8]);



  for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
      cout<<sud[i][j];
    }
    cout<<endl;
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin >> t;
  while(t--) solve();
  //solve();
  return 0;
}
