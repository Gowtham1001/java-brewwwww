#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    char ch[n];

    for(int i=0;i<n;i++){
        cin>>ch[i];

    }
    bool capture[n];
    for(int i=0;i<n;i++){
        capture[i]=false;
    }
    int limit;
    cin>>limit;
    int count[n];
    for(int i=0;i<n;i++){
        count[i]=0;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if((ch[i]=='P'|| ch[i]=='p') && count[i]<1){
            for(int j=1;j<=limit;j++){
                if((i+j<n || i-j>=0) && count[i]<1){
                if(((ch[i+j]=='t'||ch[i+j]=='T')||(ch[i-j]=='t'||ch[i-j]=='T')) && (capture[i+j]==false || capture[i-j]==false) ){
                    if(capture[i+j]==false){
                        capture[i+j]==true;
                    }
                    else{
                        capture[i-j]==true;
                    }
                    count[i]=1;
                    sum+=1;
                }
                }
            }
        }
    }

    
    cout<<"\n"<<sum;


}