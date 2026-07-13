#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<int> target(vector<int> &arr, int target){
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==target){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
int main(){
    Solution obj;
    vector<int> arr={1,2,3,4,5,2,2,4,3};
    int target=2;
    vector<int>ans=obj.target(arr,target);
    for (int index : ans) {
        cout << index << " ";
    }

    return 0;
}
