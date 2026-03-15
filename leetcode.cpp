#include <iostream>
using namespace std;

//checking for duplicates in array
/*int key=0;
bool containduplicates(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" at "<<i<<" and "<<j;
                return true;
            }
            
            
        }

    }
    
    return false;
}
int main(){
    int arr[]={1,2,3,4,1};
    int n=sizeof(arr)/sizeof(int);
    cout<<containduplicates(arr,n);
}
    */

//rotated array binary search target

int binsearch(int arr[],int n,int target){
    int low= 0;
    int high=n-1;

    while(low<=high){
        int mid= (high+low)/2;

        if(target==arr[mid]){
            return mid;
        }
        if(arr[low]<=arr[mid]){
            if(arr[low]<=target && target<=arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        //mid changes to index 6 element 1.
        else{ //mid is recalculated based on the new low and high.
            if(target>=arr[mid+1] && target<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[7]={4,5,6,7,1,0,2};
    int n=sizeof(arr)/sizeof(int);
    cout<<binsearch(arr,n,0);
    return 0;
}

