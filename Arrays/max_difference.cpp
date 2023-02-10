#include <iostream>
using namespace std;

int main(){
    int arr[] = {7, 9, 5, 6, 3, 2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int min=arr[0];
    int maxDiff=0;
    for(int i=1;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        else{
            if(maxDiff<arr[i]-min){
                maxDiff=arr[i]-min;
            }
        }
    }
    cout<<maxDiff<<endl;
    return 0;
}