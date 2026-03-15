#include <iostream>
using namespace std;

//finding largest in array
/*int main(){
    int arr[5]={3,5,6,1,0};
    int n= sizeof(arr)/sizeof(int);
    int max=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<" ";
    return 0;
}*/

//linear search
/*int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<arr[i]<<endl;
            return i;
            
        }
    }
    return -1;

}

int main(){
    int arr[]={2,4,6,8,10};
    int n=sizeof(arr)/sizeof(int);
    cout<<linearsearch(arr,n,8);
    
    return 0;
}*/

//reverse array extra space
/*void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);

    int copyarr[n];
    for(int i=0;i<n;i++){
        int j=n-i-1;
        copyarr[i]=arr[j];
    
    }
    for(int i=0;i<n;i++){
        arr[i]=copyarr[i];
    }
    printarr(arr,n);
    return 0;

}*/

// reversing array by using two pointers no extra space
/*void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);

    int start=0 , end=n-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printarr(arr,n);
    return 0;
}*/

// print subarrays
/*void printsubarray(int arr[], int n){
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            for(int i=start;i<=end;i++){
                cout<<arr[i];
            }
            cout<<",";
        }
        cout<<endl;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    printsubarray(arr,n);
    return 0;
}
*/

//max subarray sum (brute force method)
void maxsubarraysum(int arr[], int n){
    int maxsum=INT_MIN;
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int currsum=0;
            for(int i=start;i<=end;i++){
                currsum+=arr[i];
            }
            cout<<currsum<<",";
            maxsum=max(maxsum,currsum);
        }
        cout<<endl;
    }
    cout<<"max subarray sum="<<maxsum<<endl;
}

/*int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n= sizeof(arr)/sizeof(int);
    maxsubarraysum(arr,n);
    return 0;
}
*/

//max subarray sum (optimized brute force method)
void maxsubarraysum1(int arr[],int n){
    int maxsum=INT_MIN;
    for(int start=0;start<n;start++){
        int currsum=0;
        for(int end=start;end<n;end++){
            currsum+=arr[end];
            maxsum=max(maxsum,currsum);
        }
    }
    cout<<"max subarraysum="<<maxsum<<endl;
}
/*int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n= sizeof(arr)/sizeof(int);
    maxsubarraysum1(arr,n);
    return 0;
}*/

//max subarray sum (kadans method)
void maxsubarraysum2(int arr[],int n){
    int maxsum=INT_MIN ;
    int currsum=0;
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
    int arr[6]={-1,-2,-3,-4,-5,-6};
    int n= sizeof(arr)/sizeof(int);
    maxsubarraysum2(arr,n);
    return 0;
}
