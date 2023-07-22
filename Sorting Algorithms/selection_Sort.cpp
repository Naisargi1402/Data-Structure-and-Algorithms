#include<iostream>
using namespace std;

void selectionSort(int a[],int n){

    for(int i=1;i<n-1;i++){
        int min=i, temp,j;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min]){
                min=j;
            }
           
        }
        if(min!=i){
                temp=a[i];
                a[i]=a[min];
                a[min]=temp;
            }
        }

    for(int i=0;i<n;i++){

            cout<<a[i]<<endl;
    }
}



int main(){

    int arr[10]={3, 12, 78, 34, 22, 5, 89,23, 62, 10};
    cout<<"The sorted Array is : ";
    selectionSort(arr,10);

    return 0;
}
