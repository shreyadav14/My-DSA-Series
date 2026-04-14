#include<iostream>
#include<stack>
using namespace std;


int main(){
    stack <int> n;
    
    n.push(2);
    n.push(1);
    n.push(3);

    n.pop();
    cout<<"The top element is:"<<n.top()<<endl;
    cout<<"The stack size is:"<<n.size()<<endl;

    if(n.empty()){
        cout<<"STACK EMPTY"<<endl;
    }
    else{
        cout<<"Stack not empty"<<endl;
    }
    return 0;

}