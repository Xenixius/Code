#include<bits/stdc++.h>
using namespace std;
long long k,dem=0;
long long kt(long long n)
{
    long long s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  freopen("PERFECTNUM.INP", "r", stdin);
  freopen("PERFECTNUM.OUT", "w", stdout);
  cin>>k;
  for(long long i=19;i<=1000000000;i+=9){
      if(kt(i)==10) dem++;
      if(dem==k) {cout<<i;break;}
  }
  return 0;
}
