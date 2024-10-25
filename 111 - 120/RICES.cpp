#include <iostream>
using namespace std;

int kq(int N){
    int k=N/5,p=N%5;
    return p==0?k:p==1?k>0?k+1:-1:p==2?k>1?k+2:-1:p==3?k+1:k>0?k+2:-1;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("RICES.INP", "r", stdin);
    freopen("RICES.OUT", "w", stdout);
    int N; cin>>N;
    cout<<kq(N);
}