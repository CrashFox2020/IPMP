#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 0, 0, 0, 3, 6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            count++;
        }
    }
    int i=0,j=0;
    while(i<size-count){
        while(arr[i]!=0){
            i++;
        }
        if(i<size-count){
            if(j==0){
                j=i;
            }
            while(arr[j]==0){
                j++;
            }
            
            swap(arr[i],arr[j]);
            i++;
            j++;
        }

    }
    for(int l=0;l<size;l++){
        cout<<arr[l]<<" ";
    }
    cout<<endl;
    return 0;
}