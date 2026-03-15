#include <iostream>
using namespace std;

/*int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= n - 1; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << "Number is prime" << endl;
    else
        cout << "Number is not prime" << endl;

    return 0;
}    */

/*int main(){

    int n;
    cout<<"enter no. of rows you want;";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}*/

/*int main(){ 

    int n=4;
    for (int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}*/

/*int main(){
    int n=4;
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}*/

/*int main(){
    int n=4;
    for (int i=1;i<=n;i++){
        cout<<"* ";
        for(int j=1;j<=n-1;j++){
            if(i==1||i==n){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"* ";
        cout<<endl;

    }
    return 0;
    
}*/

/*int main(){
    int n=4;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}*/

/*int main(){
    int n=5;
    int num=1;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}*/

/*int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
        }
    return 0;
}*/

/*int main(){
    int n=5;
    bool val=true;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<val<<" ";
            val=!val;
        }
        cout<<endl;
    }
return 0;
}*/

/*int main(){
    int n=5;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}*/

int main(){
    int n=5;
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        for(int j=2;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}