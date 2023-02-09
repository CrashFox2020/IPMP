#include <iostream>
using namespace std;

int main(){
    int arr[] = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=0,j=size-1;
    while(i<j){
        while(arr[i]==0){
            i++;
        }
        while(arr[j]==1){
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