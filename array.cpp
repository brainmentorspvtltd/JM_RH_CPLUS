#include<iostream>
using namespace std;

int main(){
    int arr[] = {1 ,2 ,3};
    int arr1[6];
    arr[0] = 1;
    cout<< arr[2];
    for(int i =0;i<sizeof(arr)/sizeof(int);i++){
        cout<<arr[i];
    }

}