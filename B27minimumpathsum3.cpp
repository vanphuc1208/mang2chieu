#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int a[1001][1001];
ll F[1001][1001];
int n,m;
int main() {
  cin>>n;
for (int i=1;i<=n;i++) {
  for(int j=1;j<=n;j++) {
    cin>>a[i][j];
  }
}
for(int j=1;j<=n;j++) {
  for(int i=1;i<=n;i++) {
    if(j==1) F[i][j]=a[i][j];

   else F[i][j]=max({F[i-1][j-1], F[i][j-1], F[i+1][j-1]})+a[i][j];
  }
}
ll res=-1e9;
for(int i=1;i<=n;i++) {
  res=max(res,F[i][n]);
}
cout<<res;


return 0;
}




    