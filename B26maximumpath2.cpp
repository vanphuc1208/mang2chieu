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
for(int i=1;i<=n;i++) {
  for(int j=1;j<=n;j++) {
   F[i][j]=max({F[i-1][j], F[i-1][j-1], F[i-1][j+1]})+a[i][j];
  }
}
ll res=0;
for(int i=1;i<=n;i++) {
  res=max(res,F[n][i]);
}
cout<<res;


return 0;
}




    