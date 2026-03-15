#include <iostream>
using namespace std;

void hello(){
    cout<<"hello world";
}

int sum(int a, int b){
    cout<<"enter a and b="<<endl;
    cin>>a>>b;
    cout<<"sum ="<<a+b<<endl;
    return 0;
}

bool iseven(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

bool isprime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int bincoeff(int n,int r){
    int val1= factorial(n);
    int val2= factorial(r);
    int val3= factorial(n-r);
    int result= val1/(val2*val3);
    cout<<result<<endl;
    return 0;

}

void primeinrange(int n){
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            cout<<i<<endl;
        }
    }
}

int main(){
    primeinrange(13);
    return 0;
}