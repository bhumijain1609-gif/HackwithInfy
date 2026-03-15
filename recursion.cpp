#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }

    return n* factorial(n-1);
    
}

int desc(int n){
    if(n==1){
        return 1;
    }
    cout<<n<<",";
    return desc(n-1);
}

int sum(int n){
    if(n==1){
        return 1;
    }
    return n+ sum(n-1);
}

int fib(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }

    return fib(n-1)+fib(n-2);
}

bool issorted(int arr[], int n, int i){
    if(i==n-1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    
    return issorted(arr,n,i+1);
}

int firstocc(vector <int> fo, int i,int target){
    int n= fo.size();
    if(i==n){
        return -1;
    }

    if(fo[i]==target){
        return i;
    }

    return firstocc(fo,i+1,target);
}

int lastocc(vector <int> lo, int i,int target){

    if(i==lo.size()){
        return -1;
    }

    int idx= lastocc(lo,i+1,target);


    if(idx==-1){
        if(lo[i]==target){
            return i;
        }
    }
    return idx;
}

int pow(int x, int n){
    if(n==0){
        return 1;
    }

    return x * pow(x,n-1);
}

int optpow(int x,int n){
    if(n==0){
        return 1;
    }

    int halfpow = pow(x,n/2);
    int halfpowsq=halfpow*halfpow;
    if(n%2!=0){
        return x * halfpowsq;
    }
    return halfpowsq;
}
int main(){
    // int ans=factorial(4);
    // cout<<ans<<endl;

    // int ans=desc(100);
    // cout<<ans<<endl;

    // int ans=sum(6);
    // cout<<ans<<endl;

    // int ans=fib(6);
    // cout<<ans<<endl;

    // int arr[5]={2,3,1,4,5};
    // int n= sizeof(arr)/sizeof(int);
    // cout<<issorted(arr,5,0);

    // vector <int> lo={1,2,2,3,3,4};
    // int ans=lastocc(lo,0,2);
    // cout<<ans<<endl;

    cout<< optpow(2,4)<<endl;
}