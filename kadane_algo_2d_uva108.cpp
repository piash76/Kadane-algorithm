///https://www.youtube.com/watch?v=-FgseNO-6Gk

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

ll mat[105][105];

ll max_subarray_sum(ll ar[],ll n)
{

   /* cout<<"A "<<endl;
    for(ll i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    */


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

    ll t,i,j,k;

    ll n;
    while(scanf("%lld",&n)!=EOF)
    {

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }



    ll mx=-inf;

    for(i=0;i<n;i++)
    {
        ll temp[105]={0};

        for(j=i;j<n;j++)
        {

            for(k=0;k<n;k++)
            {
               temp[k]+=mat[k][j];
            }

            ll tmp_ans=max_subarray_sum(temp,n);

            mx=max(mx,tmp_ans);

        }
    }


    printf("%lld\n",mx);



    }



    return 0;

}


/*

4
0 -2 -7 0
9 2 -6 2
-4 1 -4 1
-1 8 0 -2


4
6 -5 -7 4
-9 3 -6 5
-10 4 7 -6
-8 9 -3 3




*/



