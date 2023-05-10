#include <bits/stdc++.h> 
#include<vector>
/*Aditya Verma's Solution*/
int findWays(vector<int> &nums, int tar)
{
    int n=nums.size();
    int dp[n+1][tar+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=tar;j++){
            if(i==0){
                dp[i][j]=0;
            }
            if(j==0){
                dp[i][j]=1;
            }
        }
    }
    //calculating.
    for(int i=1;i<n+1;i++){
        for(int j=0;j<tar+1;j++){
            if(nums[i-1]<=j){
                dp[i][j]=dp[i-1][j-nums[i-1]] + dp[i-1][j];
            }
            else if(nums[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][tar];
}
int main(){
    return 0;
}