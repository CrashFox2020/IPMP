#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    while(i<size){
        if(arr[i]<=0||arr[i]>size){
            i++;
        }
        else if(arr[i]!=i+1&&arr[arr[i]-1]!=arr[i]){
            swap(arr[i],arr[arr[i]-1]);

        }
        else{
            i++;
        }
    }
    int j;
    for(j=0;j<size;j++){
        if(arr[j]!=j+1){
            break;
        }
    }
    cout<<j+1<<endl;
    return 0;
}