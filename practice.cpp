#include <iostream>
using namespace std;

int missing(int arr[], int n){
    int xor1=0, xor2=0;
    for(int i=1; i<=n; i++){
        xor1^=i;
    }
    for(int i=0;i<n-1;i++){
        xor2^=arr[i];
    }
    return xor1^xor2;
}

void zerosback(int arr[], int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    
}

int main(){
    int arr[]={0,1,0,3,12};
    int n= sizeof(arr)/sizeof(int);

    zerosback(arr, n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    
    return 0;
}