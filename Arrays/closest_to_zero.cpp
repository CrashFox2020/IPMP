#include <iostream>
#include <algorithm>
#include <stdlib.h>
#define MAX 1000
using namespace std;

int main(){
    int arr[] = {1, 60, -10, 70, -80, 85};
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+size);
    int i=0;
    int j=size-1;
    int min=1000;
    int min1,min2;

    while(i<j){
        if(i<j&&abs(arr[i]+arr[j])<min){
            min=abs(arr[i]+arr[j]);
            min1=arr[i];
            min2=arr[j];
        }
        if (arr[i]+arr[j]>0){
            j--;
        }
        else if(arr[i]+arr[j]<0){
            i++;
        }
        else{
            break;
        }
    }
    cout<<min1<<" "<<min2<<endl;
    return 0;
}