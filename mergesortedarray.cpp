//leetcode-88

#include <iostream>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i=m-1,j=n-1,k=m+n-1;

    while(i>=0 && j>=0){
        if(nums2[j]>=nums1[i]){
            nums1[k]=nums2[j];
            k--;
            j--;
        }else{
            nums1[k]=nums1[i];
            k--; i--;
        }
    }

    if(i<0){
        while(j>=0){
            nums1[k]=nums2[j];
            k--; j--;
        }
    }
    for(int i=0;i<m+n;i++){
        cout<<nums1[i]<<",";
    }
    cout<<endl;
}

int main(){
    vector <int> nums1={1,2,3,0,0,0};
    vector <int> nums2={2,5,6};
    merge(nums1,3,nums2,3);
}