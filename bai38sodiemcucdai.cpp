#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int main() {
  int n,m;
  cin>>n>>m;
  ll a[n][m];
  for(int i=0;i<n;i++) {
    for(int j=0;j<m;j++) {
      cin>>a[i][j];
    }
  }
  int res=0;
  for(int i=0;i<n;i++) {
    for(int j=0;j<m;j++) {
        bool ok=1;
      for( int k=0;k<8;k++) {
        int inew=i+dx[k], jnew=j+dy[k];
        if(inew>=0&&inew<n&&jnew>=0&&jnew<m) {
           if(a[inew][jnew]>=a[i][j]) {
               ok=0;
               break;
           }
        }
        else continue;
      }
    if(ok) res++;
    }
  }
  cout<<res;

    return 0;
    
}