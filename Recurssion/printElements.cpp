#include<iostream>
using namespace std;
void print(int n){
    // base case
    if(n==0){
        return ;
    }
    else{
        //recursive call
        cout<<n<<"";
        print(n-1);
        
        //cout<<n<<" ";
    }
}
int main(){
    int n;
    cin>>n;

    print(n);
    return 0;
}