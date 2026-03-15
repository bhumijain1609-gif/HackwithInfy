#include <iostream>
using namespace std;

int largestinarr(int arr[],int n){
    int max=arr[0];
    int i;
    while(i<n){
        if(arr[i]>max){
            max=arr[i];
        }
        i++;
    }
    cout<<max<<endl;
return max;
}

int smallestinarr(int arr[],int n){
    int min=arr[0];
    int i;
    while(i<n){
        if(arr[i]<min){
            min=arr[i];
        }
        i++;
    }
return min;
}

void linearsearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]== target){
            cout<<"target found at"<<i<<endl;
            return;
        }
        
    }
cout<<"key not found"<<endl;
}

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

int reversearr(int arr1[],int n){
    int arr2[n];
    for(int i=0;i<n;i++){
        int j=n-i-1;
        arr2[i]=arr1[j];
    }
    for(int i=0;i<n;i++){
        arr1[i]=arr2[i];
    }
    printarr(arr1,n);
    return 0;
}

int reversearr2(int arr[], int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    printarr(arr,n);
    return 0;
}

void binarysearch(int arr[], int n, int key){
    int i=0,j=n-1;
    while(i<j){
        int mid=(i+j)/2;
        if(arr[mid]== key){
            cout<<"key found at "<<mid<<endl;
            return;
        }
        else if(arr[mid]>key){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    cout<<"key not found"<<endl;
}

void subarrays(int arr[], int n){

    for(int start=0; start<n; start++){
        for(int end=start; end<n;end++){
            for(int i=start; i<=end; i++){
                cout<<arr[i];
            }
            cout<<",";
        }
        cout<<endl;
    }
}

void max_subarr_sum(int arr[],int n){
    int maxsum=INT_MIN;
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int sum=0;
            for(int i=start; i<=end; i++){
                sum+=arr[i];
                maxsum= max(maxsum,sum);
            }
        }
    }
    cout<<"max subarray sum="<<maxsum<<endl;
}

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

void buysellstock(int price[], int n){
    int bestbuy[100000];
    bestbuy[0]=INT_MAX;

    for(int i=1;i<n;i++){
        bestbuy[i]=min(bestbuy[i-1],price[i-1]);

    }

    int maxprofit=0;
    for(int i=0;i<n;i++){
        int profit= price[i]-bestbuy[i];
        maxprofit=max(maxprofit,profit);
    }

    cout<<"max profit ="<<maxprofit<<endl;
}

void trappingrainwater(int height[],int n){
    int leftmax[20000], rightmax[20000];
    leftmax[0]=height[0];
    rightmax[n-1]=height[n-1];

    for(int i=1;i<n;i++){
        leftmax[i]= max(leftmax[i-1], height[i-1]);
    }

    for(int i=n-2;i>=0;i--){
        rightmax[i]= max(rightmax[i+1], height[i+1]);
    }

    int totalwater=0;
    for(int i=0;i<n;i++){
        int watertrap= (min(leftmax[i],rightmax[i]))-height[i];
        if(watertrap>0){
            totalwater+=watertrap;
        }
    }
    cout<<"total water = "<<totalwater<<endl;
}

void spiralmatrix(int mat[][4],int n,int m){        //always pass no. of columns when matrix passed in function as parameter
    int srow = 0 , scol=0 , erow=n-1 , ecol=m-1;

    while(srow<=erow && scol<=ecol){
    //top
        for(int j=scol;j<=ecol;j++){
            cout<<mat[srow][j]<<" ";
        }

    //right
        for(int i=srow+1; i<=erow;i++){
            cout<<mat[i][ecol]<<" ";
        }

    //bottom
        for(int j=ecol-1; j>=scol;j--){
            if(srow==erow){
                break;
            }
            cout<<mat[erow][j]<<" ";
        }

    //left
        for(int i=erow-1; i>=srow+1;i--){
            if(scol==ecol){
                break;
            }
            cout<<mat[i][scol]<<" ";
        }

        srow++; erow--; scol++; ecol--;
    }
cout<<endl;
}

int diagonalsum(int mat[][4], int n){
    int sum=0;

    // for(int i=0;i<n;i++){.         //tc=O(n^2)
    //     for(int j=0;j<n;j++){
    //         if(i==j){
    //             sum+=mat[i][j]; //primary
    //         } else if(j==n-i-1){
    //             sum+=mat[i][j]; //secondary
    //         }
    //     }
    // }

    for(int i=0;i<n;i++){
        sum+=mat[i][i];
        if(i!=n-i-1){
            sum+=mat[i][n-i-1];
        }
    }

    cout<<sum<<endl;
    return sum;
}

bool staircasesearch(int mat[][4],int n,int m,int key){
    int i=0,j=m-1;

    while(i<n && j>=0){
        int st=mat[i][j];

        if(st==key){
            cout<<"key found"<< endl;
            return true;
        } else if(st<key){
            i++;
        } else{
            j--;
        }
    }
    cout<<"key not found"<<endl;
    return false;
    
}

int main(){
    // int arr[]={2,-3,6,-5,4,2};
    // int price[]={7,1,5,3,6,4};
    // int height[7]={4,2,0,6,3,2,5};
    // int n=sizeof(arr)/sizeof(int);
    // int n=sizeof(height)/sizeof(int);
    // cout<<largestinarr(arr,n);
    // cout<<smallestinarr(arr,n)<<endl;
    // linearsearch(arr,n,10);
// reversearr2(arr,n);
// binarysearch(arr,n,8);
// subarrays(arr,n);
// max_subarr_sum(arr,n);
// kadanalgo(arr,n);
// buysellstock(price,n);
// trappingrainwater(height,n);
int mat[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
int mat2[3][3]={{1,2,3},{5,6,7},{9,10,11}};
//spiralmatrix(mat2 ,3, 4);
// diagonalsum(mat,4);
int stair[4][4]={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,34,39,50}};
cout<<staircasesearch(stair,4,4,33);
}