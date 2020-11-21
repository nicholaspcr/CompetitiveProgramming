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
int min(int x, int y, int z) 
{ 
    return min(min(x, y), z); 
} 
  
int editDistDP(string str1, string str2, int m, int n) 
{ 
    // Create a table to store results of subproblems 
    int dp[m + 1][n + 1]; 
  
    // Fill d[][] in bottom up manner 
    for (int i = 0; i <= m; i++) { 
        for (int j = 0; j <= n; j++) { 
            // If first string is empty, only option is to 
            // insert all characters of second string 
            if (i == 0) 
                dp[i][j] = j; // Min. operations = j 
  
            // If second string is empty, only option is to 
            // remove all characters of second string 
            else if (j == 0) 
                dp[i][j] = i; // Min. operations = i 
  
            // If last characters are same, ignore last char 
            // and recur for remaining string 
            else if (str1[i - 1] == str2[j - 1]) 
                dp[i][j] = dp[i - 1][j - 1]; 
  
            // If the last character is different, consider all 
            // possibilities and find the minimum 
            else
                dp[i][j] = 1 + min(dp[i][j - 1], // Insert 
                                   dp[i - 1][j], // Remove 
                                   dp[i - 1][j - 1]); // Replace 
        } 
    } 
    return dp[m][n]; 
} 
    

void solve(){	
    string a, b;
    cin >> a >> b;    
    int szA = (int)a.size();
    int szB = (int)b.size();
	cout << editDistDP(a, b, szA, szB) << endl;
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
