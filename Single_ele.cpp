#include<iostream>
#include<vector>
using namespace std;

class Single_ele{
    public:
    int Find_ele(vector <int> &arr){
        int n=arr.size();
       if(n == 1) return arr[0];

    for(int i = 0; i < n; i++){
        if(i == 0){
            if(arr[i] != arr[i+1]) return arr[i];
        }
        else if(i == n-1){
            if(arr[i] != arr[i-1]) return arr[i];
        }
        else{
            if(arr[i] != arr[i+1] && arr[i] != arr[i-1]){
                return arr[i];
            }
        }
    }
    return -1;
}
};
int main(){
    vector <int> arr1= {1,1,2,2,3,3,4,5,5,6,6};
    Single_ele obj;
    obj.Find_ele(arr1);
    cout << obj.Find_ele(arr1);
    return 0;
}