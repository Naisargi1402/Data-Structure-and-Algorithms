#include<iostream>
using namespace std;

int binarySearch(int arr[],int left,int right,int n){

    while(left<=right){
        int mid = left + (right-left)/2;
        if(arr[mid]==n)
            return mid;
        if(n>arr[mid])
            left=mid+1;
        if(n<arr[mid])
            right=mid-1;
    }
    return -1;
}

int main(){

    int arr[10];//={3, 12, 78, 34, 22, 5, 89,23, 62, 10};
    for(int i=0;i<10;i++){
        arr[i]=i+5;
    }
    int n,q;
    cout<<"Please enter element to search: ";
    cin>> n;
    q=binarySearch(arr,0,9,n);
    if(q==-1)
        cout<<"Element not found!";
    else
        cout<<"Element found at index "<< q;

    return 0;
}
