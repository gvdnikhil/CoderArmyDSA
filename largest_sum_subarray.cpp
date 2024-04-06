#include<iostream>
using namespace std;
int main()
{
       int n =4;
       int a[4] = {4,-6,2,8};
       int ans = INT_MIN;
       for ( int i =0;i<n;i++)
       {
        int prefix_sum = 0;
            for ( int  j=i;j<n;j++ )
            {
                
                prefix_sum += a[j];

                ans = max (prefix_sum,ans);

                // cout<< prefix_sum<<endl;
            }
       } 
       cout<< ans;
return 0;
}