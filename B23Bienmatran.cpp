#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
int n; cin>>n;
int a[n][n];
for (int i=0;i<n;i++) {
  for(int j=0;j<n;j++) {
    cin>>a[i][j];
  }
}
for(int i=0;i<n;i++) {
  if(i==0||i==n-1) {
    for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
  }
  else {
    cout<<a[i][0]<<" "<<a[i][n-1]<<" ";
  }
}

return 0;
}




    