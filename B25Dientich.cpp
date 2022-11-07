#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int a[600][600];
int n,m,dem=0;
int dx[4]={-1, 0 , 0, 1};
int dy[4]={0, -1, 1, 0};
void loang(int i, int j) {
  a[i][j]=0;
  ++dem;
  for(int k=0;k<4;k++) {
    int i1=i+dx[k];
    int j1=j+dy[k];
    if(i1 >=0 && i1<n &&j1>=0 && j1<m && a[i1][j1]) {
      loang(i1,j1);
    }
  }
}
int main() {
  cin>>n>>m;
for (int i=0;i<n;i++) {
  for(int j=0;j<m;j++) {
    cin>>a[i][j];
  }
}
int res=0;
for(int i=0;i<n;i++) {
  for(int j=0;j<m;j++) {
    if(a[i][j]) {
      dem=0;
      loang(i,j);
      res=max(dem,res);
    }
  }
}
cout<<res;

return 0;
}




    