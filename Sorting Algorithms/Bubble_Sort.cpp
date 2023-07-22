#include<iostream>
using namespace std;

void bubbleSort(int a[],int n){

    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j+1]<a[j]){
                int temp= a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
            cout<<a[i]<<endl;
    }
}



int main(){

    int arr[10]={3, 12, 78, 34, 22, 5, 89,23, 62, 10};
    cout<<"The sorted Array is : ";
    bubbleSort(arr,10);

    return 0;
}
