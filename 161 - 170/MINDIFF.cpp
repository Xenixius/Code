#include <bits/stdc++.h>
using namespace std;
int t,n,k;
int a[1005];
int main()
{   freopen("MINDIFF.inp","r",stdin);
    freopen("MINDIFF.out","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        //int x;vector<int> a;
        for(int i=0;i<n;i++) cin>>a[i];
        //{cin>>x;a.push_back(x);}
        sort(a,a+n);
       // for(int i=0;i<n;i++) cout<<a[i]<<" ";
        int kq = a[n-1]-a[0];
        int t_min = a[0]+k, t_max=a[n-1]-k;
        if (t_min>t_max) swap(t_min,t_max);
        for(int i=1;i<n;i++)
        {
            int t1=a[i]-k, t2=a[i]+k;
            if(t1>t_min||t2<t_max) continue;
            if(t_max-t1<t2-t_min) t_min=t1;
            else t_max=t2;
        }
        cout<<min(kq,t_max-t_min)<<endl;
    }
       return 0;
}
