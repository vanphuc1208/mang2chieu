#include <bits/stdc++.h>
using namespace std;
using ll=long long;
// int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
// int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dx[4] = {-1,0,0,1};
int dy[4] = {0,-1,1,0};
int n,m,s,t,u,v;
int a[100][100];
bool ok=0;
void loang(int s, int t) {
  if(s==u&&t==v) {
    ok=1;
  }
  a[s][t]=0;
  for(int k=0;k<4;k++) {
    int i1=s+dx[k], j1=t+dy[k];
    if(i1 >=0 && i1<n &&j1>=0 && j1<m && a[i1][j1]) {
      loang(i1,j1);
    }
  }
}
int main() {
  cin>>n>>m>>s>>t>>u>>v;
  s--; t--; u-- ;v--;
  for(int i=0;i<n;i++) {
    for(int j=0;j<m;j++) {
      cin>>a[i][j];
    }
  }
    loang(s,t);
  if(ok) cout<<"YES";
  else cout<<"NO";

    return 0;
    
}