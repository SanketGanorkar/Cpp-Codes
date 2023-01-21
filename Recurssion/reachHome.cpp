#include<iostream>
using namespace std;
void reachHome(int src , int des){
    cout<<"source is : "<<src<<" destination is : "<<des<<endl;
    //Base case
    if(src==des){
        cout<<"Reached the home "<<endl;
        return;
    }
    else{
        src++;
        //Recursive call
        reachHome(src,des);
    }
}
int main(){
    int src , des;
    src = 1;
    des = 10;
    cout<<endl;
    reachHome(1,10);

    




    return 0 ;
}