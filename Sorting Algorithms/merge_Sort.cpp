#include<iostream>
using namespace std;

void merge(int a[],int l,int m,int r){
    int i=l;
    int j= m+1;
    int k=l;
    int temp[10];
    while(i<=m && j<=r){
        if(a[i]<a[j]){
            temp[k]=a[i];
            i++;
            k++;
        }
        else{
            temp[k]=a[j];
            j++;
            k++;
        }    
    }
    while(i<=m){
        temp[k]=a[i];
        i++;
        k++;
    }
    while(j<=r){
        temp[k]=a[j];
        j++;
        k++;
    }

    for(int p=l;p<=r;p++){
        a[p]=temp[p];
    }

}

void mergeSort(int a[],int l,int r){
    if(l<r){
        int mid= (r+l)/2;

        mergeSort(a,l,mid);
        mergeSort(a,mid+1,r);
        merge(a,l,mid,r);
    }
    

    }



int main(){

    int arr[10]={3, 12, 78, 34, 22, 5, 89,23, 62, 10};
    cout<<"The sorted Array is : ";
    mergeSort(arr,0,9);
    for(int p=0;p<10;p++){
       cout<< arr[p]<<endl;
    }

    return 0;
}
