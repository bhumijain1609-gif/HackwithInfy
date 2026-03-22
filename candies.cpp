#include <iostream>
using namespace std;

int candies(vector <int> points,int n){
    vector <int> candy(n,1);

    for(int i=1;i<n;i++){
        if(points[i]>points[i-1]){
            candy[i]=candy[i-1]+1;
        }
    }
    for(int i=n-2;i>=0;i--){
        if(points[i]>points[i+1]){
            candy[i]=max(candy[i],candy[i+1]+1);
        }
    }
    int total=0;
    for(int i=0;i<n;i++){
        total+=candy[i];
    }
    return total;
}
int main(){
    vector <int> points={4,6,4,5,6,2};
    int n=points.size();
    cout<<candies(points,n)<<endl;
}