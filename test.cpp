#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int m, n; cin>>m>>n;
if(m*n%2==0){
  cout<<m*n / 2;
}else{
  cout<<floor(m*n/2);
}
return 0;
}