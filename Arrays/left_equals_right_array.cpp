#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int flag=-1;
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    int cursum=arr[0];
    sum-=arr[0];
    for(int i=1;i<size-1;i++){
        if(cursum==sum-arr[i]){
            cout<<arr[i]<<endl;
            flag=1;
            break;
        }
        else{
            cursum+=arr[i];
            sum-=arr[i];
        }
    }
    if(flag==-1){
        cout<<flag<<endl;
    }
}