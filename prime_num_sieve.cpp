#include<iostream>
using namespace std;

void primenum(long n){

    bool prime[n+1];

    for(int i=0;i<=n;i++){
        prime[i]=true;
    }

    for(int j=2;j*j<=n;j++){
        if(prime[j]==true){


            for(int i=j*j;i<=n;i+=j){
                prime[i]=false;
            }

        }
    }

    for(int i=2;i<=n;i++){
        if(prime[i]==true){
            cout<<i<<" ";
        }
    }
    cout<<endl;

}

int main(){

    int n;
    cout<<"Enter a number:\n";
    cin>>n;
    
    primenum(n);

}
