#include<iostream>
using namespace std;
bool appels(int m,int k,int n,int s,int w,int e){
    int sum=0;
    if(m<=s*k){
        return true;
    }
    else if(m<=(s*k)+w+e){
        return true;
    }
    else{
        return false;
    }


}
int main(){

    int n,s,w,e,m,k;
    cin>>m>>k>>n>>s>>w>>s;

    if(appels(m,k,n,s,w,e)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    


}