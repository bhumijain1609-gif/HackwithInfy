#include <iostream>
using namespace std;

void upeercase(char word[], int n){
    for(int i=0;i<=n;i++){
        if(word[i]>='A'&& word[i]<='Z'){
            continue;
        }
        else{
            word[i]=word[i]-'a'+'A';
        }

    }
    cout<<word<<endl;
}

void lowercase(char word[], int n){
    for(int i=0;i<=n;i++){
        if(word[i]>='a'&& word[i]<='z'){
            continue;
        }
        else{
            word[i]=word[i]-'A'+'a';
        }

    }
    cout<<word<<endl;
}

void reversearray(char word[], int n){
    int st=0,end=n-1;
    while(st<=end){
        swap(word[st],word[end]);
        st++;
        end--;
    }
    cout<<word<<endl;
}

bool validpalindrome(char word[], int n){
    int st=0, end=n-1;
    while(st<=end){
        if(word[st]!= word[end]){
            cout<<"not vp"<<endl;
            return false;
            st++;
            end--;
        }
    }
    cout<<"valid vp"<<endl;
    return true;
}

int getvowelcount(string s){
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'){
            count++;
        }
    }
    cout<<count<<endl;
    return count;
}
 void name(){
    cout<<"enter name;"<<endl;
    string name;
    getline(cin,name);
 }

int main(){
    char word[]="racecar";
    int n=strlen(word);
    string s1;
    string s2;
    name();
    return 0;
    
}