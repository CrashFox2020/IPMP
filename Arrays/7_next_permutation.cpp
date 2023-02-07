#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,4,9,8,7,6,5,4,3,6,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i=size-1;i>0;i--){
        if(arr[i-1]<arr[i]){
            break;
        }
    }
    if(i>0){
        int j=i;
        i--;
        while(j<size-1&&arr[j+1]>arr[i]){
            j++;
        }
        if(j==size-1&&arr[i]<arr[j]){
            j++;
        }
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        for(int k=0;k<=i;k++){
            cout<<arr[k];
        }
        for(int k=size-1;k>i;k--){
            cout<<arr[k];
        }
    }
    cout<<endl;
    return 0;
}
