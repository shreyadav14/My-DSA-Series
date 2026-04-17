#include<iostream>
#include<stack>
using namespace std;
class Solution{
public:
vector<int> Next_Greater(vector<int>nums){
  int n=nums.size();
stack<int>s;
vector<int>ans(n,-1);

for(int i=2*n-1;i>=0;i--){
int num=nums[i%n];
while(s.size()>0 && s.top()<=num){
s.pop();
}
if (i<n){
if(s.empty()){
ans[i]=-1;
}else{
ans[i]=s.top();
}
s.push(num);
}
return ans;
}
};
