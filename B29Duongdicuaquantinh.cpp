#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int a[1001][1001];
ll F[1001][1001];
int n,s,t,dem=0;;
 //int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
 //int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
 int dx[4] = {-1,  -1,   1,  1};
 int dy[4] = {-1,  1,  -1, 1};
 void loang(int i, int j) {
  a[i][j]=1;
  dem++;
  for(int k=0;k<4;k++) {
    int i1=i+dx[k],j1=j+dy[k];
    if(i1>=1 && i1<=n && j1>=1 && j1<=n && !a[i1][j1]) loang(i1,j1);
  }
 }
int main() {
  cin>>n>>s>>t;
for (int i=1;i<=n;i++) {
  for(int j=1;j<=n;j++) {
    cin>>a[i][j];
  }
}
loang(s,t);
cout<<dem;


return 0;
}




    