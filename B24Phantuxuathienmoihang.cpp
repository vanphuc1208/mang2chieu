#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int cnt[105];

int main() {
int n; cin>>n;
int a[101][101];
for (int i=1;i<=n;i++) {
  for(int j=1;j<=n;j++) {
    cin>>a[i][j];
  }
}
for(int i=1;i<=n;i++) {
  for(int j=1;j<=n;j++) {
    if(cnt[a[i][j]]==i-1) {
      cnt[a[i][j]]=i;
    }
  }
}
bool ok=false;
for(int i=0;i<=100;i++) {
  if(cnt[i]==n) {
    cout<<i<<" ";
    ok=true;
  }
}
if(!ok) cout<<"NOT FOUND";


return 0;
}




    