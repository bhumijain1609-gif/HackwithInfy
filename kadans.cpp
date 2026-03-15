#include <iostream>
using namespace std;

void kadanalgo(int arr[], int n){
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        maxsum=max(maxsum,currsum);
        if(currsum<0){
            currsum=0;
        }
    }
    cout<<"max subarray sum ="<<maxsum<<endl;
}
int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    kadanalgo(arr,n);
}