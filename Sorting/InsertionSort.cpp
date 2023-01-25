#include<iostream>
using namespace std;


void insertionSort(int arr[] , int size){
    int n = size;
    for(int i = 1 ; i < n ; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > temp ){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

void print(int arr[] , int size){
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int arr[5] = {5,4,3,2,1};
    cout<<"Before sorting"<<endl;
    print(arr,5);
    cout<<endl;
    insertionSort(arr,5);
    cout<<"After sorting"<<endl;
    print(arr,5);

    return 0;
}
