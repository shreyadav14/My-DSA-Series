#include<iostream>
using namespace std;

class Solution{
    private:
    int Digits(int &Number){
        int count=0;
        while(Number>0){
            count+=Number%10;
            Number=Number/10;
        }
        return count;
    }
    public:
    int Add(int Number){
        while(Number>=10){
            Number=Digits(Number);
        }
        return Number;
    }
};
int main(){
    int Number=500;
     Solution obj;

    cout << "The answer is: " << obj.Add(Number) << endl;

    return 0;

}