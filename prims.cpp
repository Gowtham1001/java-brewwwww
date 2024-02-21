#include<iostream>
using namespace std;

int main(){
    int n;
    int m;
    cin>>n>>m;

    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        arr[a][b]=c;
        arr[b][a]=c;
    }
    cout<<"done";
    bool visited[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i]=0;
    }
    int count=1;
    int i=0;
    int k=0;
    int sum=0;
    for(int count=0;i<m;i++){
        if(!visited[i]){
            int min=999999;
            visited[i]=true;
            for(int j=0;j<n;j++){
                if(j!=i && arr[i][j]>0 && min>arr[i][j] && !visited[j] && visited[i]){
                    min=arr[i][j];
                    sum+=min;
                    temp[k]=i;
                    k++;
                    i=j;
                    
                    break;
                }
            }
            
        }
    }
    for(int j=0;j<n;j++){
        cout<<temp[i]<<" ";
    }
    cout<<sum;
}