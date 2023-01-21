#include<iostream>
using namespace std;

int FirstOccurence(int arr[], int size , int key){
    int start = 0;
    int end = size-1;
    int ans = -1;
    int mid = start + (end -  start)/2;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;
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
    return ans;
}

int LastOccurence(int arr[], int size , int key){
    int start = 0;
    int end = size-1;
    int ans = -1;
    int mid = start + (end -  start)/2;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start = mid+1;
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
    return ans;
}
int main(){

    int num[5] = {1,2,3,3,5};
    int first = FirstOccurence(num , 5 , 3);
    cout<<"First occurence of 3 is : "<< first <<endl;
    int last = LastOccurence(num , 5 , 3);
    cout<<"Last occurence of 3 is  : "<< last <<endl;

    return 0; 
}