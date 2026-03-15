#include <iostream>
using namespace std;

/*void pairsum(vector <int> vec, int target){
    int st=0, end=vec.size()-1;

    while(st<end){
        int currsum= vec[st]+vec[end];
        if(currsum==target){
            cout<<"target found at"<<"["<<st<<","<<end<<"]"<<endl;
            st++;
            end--;
        } else if(currsum>target){
            end--;
        } else{
            st++;
        }

    }
    cout<<"target not found"<<endl;

}
*/

vector <int> pairsum(vector <int> vec, int target){
    int st=0, end=vec.size()-1;
    vector <int> ans;

    while(st<end){
        int currsum= vec[st]+vec[end];
        if(currsum==target){
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        } else if(currsum>target){
            end--;
        } else{
            st++;
        }

    }
    return ans;

}

vector<int> findErrorNums(vector<int>& nums){
    int n= nums.size();
    vector <int> freq(n+1,0);
    vector <int> ans;

    for (int i=0;i<n;i++){
        int x=nums[i];
        freq[x]++;
    }

    for(int i=1;i<=n;i++){
        if(freq[i]==2){
            ans.push_back(i);
        }
        if(freq[i]==0){
            ans.push_back(i);
        }
    }
    return ans;
}

int maxwater(vector <int> height , int n){
    
}
int main(){
    vector <int> nums={2,2};
    vector <int> ans= findErrorNums(nums);
    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" , ";
    }
    cout<<endl;
}