#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;

float arr1[n];
float arr2[n];
for(int i=0;i<n;i++){
    cin>>arr1[i]>>arr2[i];
}
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        if(arr1[i]>arr1[j]){
            int temp=arr1[i];
            arr1[i]=arr1[j];
            arr1[j]=temp;

            temp=arr2[i];
            arr2[i]=arr2[j];
            arr2[j]=temp;

            
            
        }
        
    }
}
int count=1;
int max=1;

for(int i=0;i<n-1;i++){
    if(arr2[i]>=arr1[i+1]){
        count++;
    }
    else{
        count--;
    }

    if(max<count){
        max=count;
    }
    
   
}

cout<<max;
}