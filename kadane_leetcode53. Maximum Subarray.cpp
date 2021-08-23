

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back

#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;

const ll inf=1e15;
const int mod=1e9+7;


const int N=500005;
ll a[N];

int maxSubArray(vector<int>& nums)
{
    int mx_ending_sum=0,mx_ans=INT_MIN;

    for(int i=0;i<nums.size();i++)
    {
        mx_ending_sum=mx_ending_sum+nums[i];

        if(mx_ending_sum<a[i])
        {
            mx_ending_sum=a[i];
        }

        mx_ans=max(mx_ans,mx_ending_sum);
    }

    return mx_ans;

}

int main()
{

    ll t,i,j;


    return 0;

}



