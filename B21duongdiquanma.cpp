#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int n,s,t,u,v;
int dx[8]={-2, -2, -1, -1, 1, 1,  2, 2};
int dy[8]={-1,  1, -2,  2, -2, 2, -1, 1};
bool ok=0;
int a[100][100];
void loang(int s, int t) {
  a[s][t]=0;
  if(s==u&&t==v) ok=1;
  for(int k=0;k<8;k++) {
    int i1=s+dx[k];
    int j1=t+dy[k];
    if(i1 >=0 && i1<n &&j1>=0 && j1<n && a[i1][j1]) {
      loang(i1,j1);
    }
  }
}
int main() {
cin>>n>>s>>t>>u>>v;
s--; t--; u-- ;v--;
for (int i=0;i<n;i++) {
  for(int j=0;j<n;j++) {
    cin>>a[i][j];
  }
}
loang(s,t);
if(ok) cout<<"YES";
else cout<<"NO";

return 0;
}




    