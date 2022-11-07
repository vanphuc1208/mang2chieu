#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int a[1001][1001];
ll prefix[1001][1001];
int n,m;
int main() {
  cin>>n>>m;
for (int i=1;i<=n;i++) {
  for(int j=1;j<=m;j++) {
    cin>>a[i][j];
  }
}
for(int i=1;i<=n;i++) {
  for(int j=1;j<=m;j++) {
    prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1]- prefix[i - 1][j - 1] + a[i][j];
  }
}
int q; cin>>q;
while(q--) {
int x1,x2,y1,y2; cin>>x1>>x2>>y1>>y2;
cout<<prefix[x2][y2]-prefix[x1-1][y2]-prefix[x2][y1-1]+prefix[x1-1][y1-1]<<endl;
}

return 0;
}




    