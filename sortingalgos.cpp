#include <iostream>
using namespace std;

void bubblesort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" , ";
    }
    cout<<endl;
}
/*int main(){
    int arr[5]={5,4,1,3,2};
    int n= sizeof(arr)/sizeof(int);
    cout<<"original array"<<endl;
    printarr(arr,n);
    bubblesort(arr,n);
    printarr(arr,n);
    return 0;
}*/

void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
                
            }
        }
        swap(arr[i],arr[minindex]);
    }
}

void insertionsort(int arr[], int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
}

void countsort(int arr[], int n){
    int freq[10000]={0};
    int minval=INT_MAX, maxval= INT_MIN;

    for(int i=0;i<n;i++){        //range calculate
        minval=min(minval,arr[i]);
        maxval=max(maxval,arr[i]);
        freq[arr[i]]++;
    }

    for(int i=minval, j=0;i<=maxval;i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }

    }
}
int main(){
    int arr[8]={1,4,1,3,2,4,3,7};
    int n= sizeof(arr)/sizeof(int);
    cout<<"original array"<<endl;
    printarr(arr,n);
    countsort(arr,n);
    printarr(arr,n);
    return 0;
}