#include<iostream>
using namespace std;

int partition(int a[],int l,int r){
    int index=l,pivot=a[r];
    for(int i=l;i<r;i++){
        if(a[i]<pivot){
            int temp=a[i];
            a[i]=a[index];
            a[index]=temp;
            index++;
        }
    }
        int temp=pivot;
            pivot=a[index];
            a[index]=pivot;
            return index;

}

void quickSort(int a[],int l,int r){
    if(l<r){
        int p = partition(a,l,r);
        quickSort(a,l,p-1);
        quickSort(a,p+1,r);
    }
}



int main(){

    int arr[10]={3, 12, 78, 34, 22, 5, 89,23, 62, 10};
    cout<<"The sorted Array is : ";
    quickSort(arr,0,9);
    for(int p=0;p<10;p++){
       cout<< arr[p]<<endl;
    }

    return 0;
}
