//leetcode-2965

#include <iostream>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector <int> count(n*n+1,0);
        vector <int> ans(2);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                count[grid[i][j]]++;
            }
        }
        for(int i=1;i<n*n+1;i++){
            if(count[i]==2){
                ans[0]=i;
            }else if(count[i]==0){
                ans[1]=i;
            }
        }
    return ans;
}

int main(){
    vector <vector<int>> grid={{9,1,7},{8,9,2},{3,4,6}};
    vector <int> result=findMissingAndRepeatedValues(grid);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}

