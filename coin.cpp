#include<iostream>
using namespace std;
int findCoin(int arr[],int k,int n){
    int dp[k+1];
    for(int i=0;i<k+1;i++){
        dp[i]=k+1;
    }
    dp[0]=0;
    for(int i=0;i<n;i++){
        
        for(int j=i;j<k+1;j++){
            if(j-arr[i]>=0){
                int a=dp[j-arr[i]]+1;
                if(a<dp[j]){
                    dp[j]=a;
                }
            }
        }
    }
    if(dp[k]>k){
        return -1;
    }
    
    return dp[k];
}
int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        int k;
        cin>>k;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(arr[i]>arr[j]){
                    int temp=arr[i];
                     arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        cout<<findCoin(arr,k,n);
}