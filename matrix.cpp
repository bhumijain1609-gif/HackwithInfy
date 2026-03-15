#include <iostream>
using namespace std;

void spiralmatrix(int matrix[][3],int n,int m){
    int srow=0,scol=0;
    int erow=n-1,ecol=m-1;

    while(srow<=erow && scol<=ecol){
        //top
        for(int j=scol;j<=ecol;j++){
        cout<<matrix[srow][j]<<" ";
        }
        //right
        for(int i=srow+1;i<=erow;i++){
            cout<<matrix[i][ecol]<<" ";
        }
        //bottom
        for(int j=ecol-1;j>=scol;j--){
            if(srow==erow){
                break;
            }
            cout<<matrix[erow][j]<<" ";
        }
        //left
        for(int i=erow-1;i>=srow+1;i--){
            if(scol==ecol){
                break;
            }
            cout<<matrix[i][scol]<<" ";
        }

    srow++; scol++; erow--; ecol--;
    
}
cout<<endl;
}

int diagonalsum(int matrix[][4], int n,int m){
    int sum=0;
    /*for(int i=0; i<n; i++) {                //time complexity=O(n^2)
        for(int j=0; j<n; j++){
            if(i==j) {
                sum += matrix[i][j];
            } else if(j==n-i-1) {
                sum += matrix[i][j];
            }
        }
    }  */
   
    for(int i=0; i<n; i++){                     //time complexity=O(n)
        sum+=matrix[i][i];
        if(i!=n-i-1){
            sum+=matrix[i][n-i-1];
        }
    }
    cout<<"sum="<<sum<<endl;
    return sum;
}

bool staircasesearch(int matrix[][4], int n,int m, int key){
    int i=0,j=m-1;
    while(i<n && j>=0){
        if(matrix[i][j]==key){
            cout<<"key found"<<endl;
            return true;
        } else if(matrix[i][j]>key){
            j--;
        }else{
            i++;
        }
    }
    cout<<"key not found"<<endl;
    return false;
}

int search(int mat[][3], int n,int m, int key ){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==key){
                count++;
                cout<<"key found"<<endl;
            }
        }
    }
    if(count==0){
        cout<<"no 7 present"<<endl;
    }
    cout<<"no. of seven="<<count<<endl;
    return 0;
}

int secondrowsum(int mat1[][3], int n, int m ){
    int i=1;
    int sum=0;
    for(int j=0;j<m;j++){
        sum+=mat1[i][j];
    }
    cout<<"sum of second row elements="<<sum<<endl;
    return 0;
}

int transpose(int A[][3], int n , int m){
    int B[3][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            B[j][i]=A[i][j];
        }
    }
    
    cout<<"transposed matrix:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0; j<n ;j++){
            cout<<B[i][j]<<" , ";
        }
    }
    return 0;
}

  
int main(){
    int matrix[4][4]={{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,39,50}};
    int mat[2][3]={{4,4,8},{8,8,5}};
    int mat1[3][3]={{1,4,9},{11,0,3},{2,2,3}};

    int A[2][3]={{1,2,3},{4,5,6}};

    transpose(A,2,3);
    return 0;
}
