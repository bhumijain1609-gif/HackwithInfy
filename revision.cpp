#include <iostream>
using namespace std;

// reverse array
/*void printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
void reversearray(int arr[],int n){
    int copyarr[n];
    for(int i=0;i<n;i++){
        int j=n-i-1;
        copyarr[i]=arr[j];
    }
    for(int i=0;i<n;i++){
        arr[i]=copyarr[i];
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    reversearray(arr,n);
    printarray(arr,n);
    return 0;
}
*/

//reverse array (no extra space)
/*void printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

void reversearray(int arr[], int n){
    int start=0, end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    reversearray(arr,n);
    printarray(arr,n);
    return 0;
}
*/

/*void binsearch(int arr[],int n,int key){
        int start=0,end=n-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]==key){
                cout<<"key found";
                return;
            }
            else if(arr[mid]>key){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        cout<<"key not found";
        
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    binsearch(arr,n,2);
    return 0;
}*/

//identifying vowels in an user entered name

/*int main(){
    string name;
    cout<<"enter a name";
    cin>>name;
    cout<<"you entered;"<<name<<endl;
    int n = name.length();
    bool hasvowel=false;

    for(int i=0;i<n;i++){
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' ){
            hasvowel=true;
            break;
        }
    }
    if(hasvowel){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
    cout<<endl;
    return 0;
    
}*/

// decreasing insertion sort

void instsort(int arr[], int n){
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int prev=i-1;

    while(prev>=0 && arr[prev]<curr){
        swap(arr[prev],arr[prev+1]);
        prev--;
    }
    arr[prev+1]=curr;
    }
}

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" , ";
    }
    cout<<endl;
}

void bubble(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void select(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }

}
int main(){
    int arr[10]={3,6,2,1,8,7,4,5,3,1};
    int n=sizeof(arr)/sizeof(int);
    cout<<"original array"<<endl;
    printarr(arr,n);
    cout<<"sorted array"<<endl;
    select(arr,n);
    printarr(arr,n);
    return 0;

}

