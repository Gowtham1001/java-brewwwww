#include<iostream>
using namespace std;

int main(){


    int n;
    cin>>n;
    long d=10;
    for(int i=2;i<=n;i++){

        d*=10;
    }
    long e=d/10;
    int count=0;
    for(long i=e;i<=d;i++){
    long c=i;
    long b=0;
    long temp=c;
    while(c>0){
        int a=c%10;
        if(a==1 || a==6 || a== 8 || a==9 || a==0){
            if(a==6){
                b=b*10+9;
            }
            else if(a==9){

                b=b*10+6;
            }
            else{
                b=b*10+a;
            }
        }
        c=c/10;
    }
  
    if(temp==b){
        count++;
        cout<<temp<<" ";
    }
    
    }
    cout<<endl;
    cout<<"\n"<<count;
}