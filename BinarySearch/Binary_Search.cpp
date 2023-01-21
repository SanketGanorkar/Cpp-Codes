#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size , int key){
    int start = 0;
    int end = size-1;

    int mid = start + (end -  start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key > arr[mid]){
            // Go to the right side of the mid.
            start = mid+1;
        }
        else if(arr[mid] > key){
            // Go to the left side of the mid.
            end = mid - 1;
        }
        mid = start + (end -  start)/2;
    }
    return -1;

}

int main(){

    int even[5] = {2,4,6,8,10};
    int evenindex = BinarySearch(even , 5 , 10);
    cout<<"Index of 10 is : "<< evenindex <<endl;

    return 0;
}
