#include <iostream>
using namespace std;

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
    int stair[4][4]={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,34,39,50}};
    cout<<staircasesearch(stair,4,4,33);
}