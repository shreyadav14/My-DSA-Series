#include<iostream>
#include<vector>
#include<unordered_map>
#include<stdlib.h>
#include <algorithm>
using namespace std;

class Solution{
    public:
    int uniqueElement(vector<int>&arr){
       unordered_map<int,int> mpp;
       for(int x:arr){
        mpp[x]++;
       }
       for(auto it:mpp){
        if(it.second==1){
            return it.first;
        }
       }
       return -1;
    }
};
int main(){
    Solution make;
    vector<int> arr={2,3,45,5,6,2,3,5,6};
    int ans=make.uniqueElement(arr);
    cout<<ans<<endl;

    return 0;
}