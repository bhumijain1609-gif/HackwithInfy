#include <iostream>
using namespace std;

int indiancoins(vector <int> coins,int v){
    int n=coins.size();
    int count=0;
    for(int i=n-1;i>=0 && v>0 ;i--){
        if(v>=coins[i]){
            count+=v/coins[i];
            v=v%coins[i];
        }
    }
    return count;

}

int main(){
    vector <int> coins={1,2,5,10,20,50,100,500,2000};
    cout<<indiancoins(coins,1099)<<endl;

}