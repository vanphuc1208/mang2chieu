#include <bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main() {
  int n;
  cin>>n;
  ll a[n][n];
  int dem=1;
  int h1=0,h2=n-1,c1=0, c2=n-1;
  ll f0=0,f1=1,fn=f0+f1;
  while(dem<=n*n) {
    for(int i=c1;i<=c2;i++) {
      if(dem==1) a[h1][i]=f0;
      else if(dem==2) a[h1][i]=f1;
      else {
        a[h1][i]=fn;
        f0=f1;
        f1=fn;
        fn=f0+f1;
      }
      dem++;
    }
    h1++;
    for(int i=h1;i<=h2;i++) {
      a[i][c2]=fn;
      f0=f1;
      f1=fn;
      fn=f0+f1;
      dem++;
    }
    c2--;
    for(int i=c2;i>=c1;i--) {
      a[h2][i]=fn;
      f0=f1;
      f1=fn;
      fn=f0+f1;
      dem++;
    }
    h2--;
    for(int i=h2;i>=h1;i--) {
      a[i][c1]=fn;
      f0=f1;
      f1=fn;
      fn=f0+f1;
      dem++;
    }
    c1++;
  }
  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }

    return 0;
    
}