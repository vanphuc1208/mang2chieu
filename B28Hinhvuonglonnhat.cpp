#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int a[1001][1001];
ll F[1001][1001];
int n,m;
 int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
 int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int main() {
  cin>>n;
for (int i=1;i<=n;i++) {
  for(int j=1;j<=n;j++) {
    cin>>a[i][j];
  }
}
int res=-1e9;
for(int i=2;i<=n-1;i++) {
  for(int j=2;j<=n-1;j++) {
   int sum=a[i][j];
   for(int k=0;k<8;k++) {
    int i1=i+dx[k],j1=j+dy[k];
    sum+=a[i1][j1];
   }
   res=max(res,sum);
  }
}
cout<<res;


return 0;
}




    