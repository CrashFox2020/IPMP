#include <iostream>
using namespace std;

int main(){
    int arr[] = {12, 34, 45, 9, 8, 90, 3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=0,j=size-1;
    while(i<j){
        while(arr[i]%2==0){
            i++;
        }
        while(arr[j]%2==1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    for(int l=0;l<size;l++){
        cout<<arr[l]<<" ";
    }
    cout<<endl;
    return 0;
}