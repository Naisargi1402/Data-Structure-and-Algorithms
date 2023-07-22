#include<iostream>
using namespace std;

void linearSearch(int n, int a[]){

    int temp=-1;
    for(int i=0;i<10;i++){
        if (a[i]==n){
            cout<<"Element found at index "<< i;
            temp=0;
        }
    }
    if(temp==-1)
            cout<<"Element not found!";

}

int main(){

    int arr[10]={3, 12, 78, 34, 22, 5, 89,23, 62, 10};
    int n;
    cout<<"Please enter element to search: ";
    cin>> n;
    linearSearch(n,arr);

    return 0;
}
