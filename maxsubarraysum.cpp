#include <iostream>
using namespace std;

void max_subarr_sum2(int arr[],int n){
    int maxsum=INT_MIN;
    for(int start=0; start<n; start++){
        int sum=0;
        for(int end=start; end<n; end++){
            sum+=arr[end];
            maxsum=max(maxsum,sum);
            
        }
    }
    cout<<"max subarray sum="<<maxsum<<endl;
}
int main(){
    int arr[6]={-1,-2,-3,-4,-5,-6};
    int n= sizeof(arr)/sizeof(int);
    max_subarr_sum2(arr,n);
    return 0;
}


