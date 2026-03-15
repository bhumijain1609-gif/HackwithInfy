#include <iostream>
using namespace std;

void bitevenodd(int n){
    if((n & 1) == 0){
        cout<<"no. is even"<<endl;
    } else{
        cout<<"no is odd"<<endl;
    }

}

int getbit(int n, int i){
    int bitmask= (1<<i);
    if((n & bitmask)>0){
        return 1;
    } else{
        return 0;
    }
}

int clearbit(int n, int i){
    int bitmask= (~(1<<i));
    return (n & bitmask);
}
float ISpoweroftwo(int n){
    if((n & (n-1))== 0){
        return true;
    } else{
        return false;
    }
}

int updatebit(int n, int i, int val){
    n = (n & ~(1<<i));
    int bitmask = (val<<i);
    return (n | bitmask);
}

int countsetbit(int n){
    int sum=0;
    int lastdig;
    while(n>0){
        lastdig= (n & 1);
        sum+=lastdig;

        n = (n>>1);
    }
    return sum;
}

void fastexpo(int x, int n){
    
    int ans=1;
    while(n>0){
        int lastdigit= (n & 1);

    if(lastdigit){
        ans=ans*x;
    }
    x= x * x;
    n= (n>>1);
}

    cout<<ans<<endl;
}

int main(){
    int n, x;
    cout<<"enter no:"<<endl;
    cin>>n;
    cout<<"enter power"<<endl;
    cin>>x;
    fastexpo(n,x);
}