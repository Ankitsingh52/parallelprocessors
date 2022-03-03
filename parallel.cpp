#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll a[n];
        ll sum=0,prefix=0,ans=0;
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            /* code */
        }
        ans=sum;
        for (ll i = 0; i < n; i++)
        {
            prefix+=a[i];
            ll rem=sum-prefix;
            ll req_time=max(rem,prefix);
            ans=min(req_time,ans);

            
        }
        cout<<ans<<"\n";
    }
    return 0;
}
