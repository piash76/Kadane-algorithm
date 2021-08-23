///https://www.youtube.com/watch?v=YxuK6A3SvTs

#include<bits/stdc++.h>

#define ll                      long long


const int maxn = 211111;



using namespace std;

ll a[maxn];

///KADANE algo for maximum sub array sum with O(N)

ll max_subarray_sum(ll ar[],ll n)
{
    ll mxsum=LLONG_MIN,mx_ending_sum=0;

    for(ll i=0;i<n;i++)
    {
        mx_ending_sum=mx_ending_sum+ar[i];

        ///if sub array ends at i if tot sum is less than ar[i] then it is better to
        ///start from ar[i] and leave the previous sub arrays

        if(ar[i]>mx_ending_sum)
        {
            mx_ending_sum=ar[i];
        }

        mxsum=max(mxsum,mx_ending_sum);


    }

    return mxsum;
}

int main()
{
    ll i,j,t,cas=0,k;
    ll n;cin>>n;
    for(i=0;i<n;i++) cin>>a[i];

    ll ans=max_subarray_sum(a,n);
    cout<<ans<<endl;

}


