#include <iostream>
using namespace std;

int main(){
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=1;
    int j=0;
    while(i<size&&j<size){
        while(i<size&&arr[i]<0){
            i=i+2;
        }
        while(j<size&&arr[j]>0){
            j=j+2;
        }
        if(i<size&&j<size){
            swap(arr[i],arr[j]);
        }
    }
    for(int k=0;k<size;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
    return 0;
}