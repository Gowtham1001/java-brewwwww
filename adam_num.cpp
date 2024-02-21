#include<iostream>
using namespace std;
int reverse(int a){
    int b=0;
    while(a>0){
        b=b*10+a%10;
        a=a/10;
    }
    return b;
}

bool check_adam(int n){

    int a=n*n;
    int b=reverse(n);
   
    int c=b*b;
    int d=reverse(c);
    
    return (a==d);


}

int main(){

    int n;
    cin>>n;

    if(check_adam(n)){
        cout<<"given number is adam number";
    }
    else{
        cout<<"not a adam number";
    }
}