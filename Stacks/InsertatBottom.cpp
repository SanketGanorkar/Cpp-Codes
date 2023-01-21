#include<bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &s , int element){
    if(s.empty()){
        s.push(element);
        return ;
    }
    else{
    int num = s.top();
    s.pop();

    //recurisve call
    insertAtBottom(s,element);

    s.push(num);
}
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    insertAtBottom(s,0);
    return 0;
}