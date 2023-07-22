#include<iostream>
using namespace std;

void insertionSort(int a[],int n){

    for(int i=1;i<n;i++){
        int x=a[i];
        int j=i-1;
        while(j>=0 && a[j]>x)
        {
            int temp= a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            j=j-1;
        }
        a[j+1]=x;
        }

    for(int i=0;i<n;i++){
            cout<<a[i]<<endl;
    }
}



int main(){

    int arr[10]={3, 12, 78, 34, 22, 5, 89,23, 62, 10};
    cout<<"The sorted Array is : ";
    insertionSort(arr,10);

    return 0;
}
