#include <iostream>
#include <string>
using namespace std;

class student{
    public:
    //string name;
    float cgpa;

    student(string name, float cgpa){
        this->name=name;
        this->cgpa=cgpa;
    }
    student(string n){
        name=n;
    }

    void getper(){
        cout<<(cgpa*10)<<endl;
    }
    
};

// class user{
//     int id;
//     string password;
//     public:
//     string username;

//     user(int id){
//         this->id=id;
//     }
//     void setpassword(string password){
//         this->password=password;
//     }

//     string getpassword(){
//         return password;
//     }
//     int getid(){
//         return id;
//     }
// }; 

class Complex{
    public:
    int real;
    int img;

    Complex(int r, int i){
        real=r;
        img=i;
    }

    void shownum(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }

    Complex operator +(Complex &c2){
        int realres = this->real + c2.real;
        int imgres = this->img + c2.img;
        Complex c3(realres, imgres);
        cout<<"result="<<endl;
        c3.shownum();
        return c3;
    }

};

// class parent {
//     public:
//     void show(){
//         cout<<"parent class"<<endl;
//     }
//     virtual void hello(){
//         cout<<"parent hello"<<endl;
//     }
//     void hello(){
//         cout<<"hello world"<<endl;
//     }
// };

// class child:public parent{
//     public:
//     void show(){
//         cout<<"child class"<<endl;
//     }
//     void hello(){
//         cout<<"child hello"<<endl;
//     }
// };

class bankacc{
    
    int accno;
    int balance=100;
    friend void ff(bankacc &b1);
    
public:
    void deposit(){
        cout<<"deposit"<<endl;
    }
    void withdrawl(){
        cout<<"withdraw"<<endl;
    }
    void getbal(){
        cout<<"get balance"<<endl;
    }

};

void ff(bankacc &b1){
    cout<<(b1.balance*10)<<endl;
}

class person{
    public:
    string name;
    int age;

    person(string n, int a){
        name=n;
        age=a;
    }
};

class student: public person{
    public:
    int studentid;

    student(int sid){
        studentid=sid;
    }
    void play(){
        int 
    }
    void display(name,age,studentid){
        cout<<name<<" "<<age<<" "<<studentid<<endl;
    }
};

int main(){

    student s1();
    // child c1;
    // parent p1;
    // parent *ptr;

    // ptr=&c1;            //hello of child class called
    // ptr->hello();

    // ptr=&p1;            //hello of parent class called
    // ptr->hello();
    // return 0;

    // Complex c1(1,2);
    // Complex c2(3,4);
    // Complex c3=c1+c2;

    // bankacc b1;
    // b1.deposit();
    // b1.withdrawl();
    // b1.getbal();
    // ff(b1);
    return 0;
}