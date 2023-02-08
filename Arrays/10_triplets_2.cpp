#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[]={1, 2, 3, 4, 5};
    
    int sum=9;
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+size);
    int i,l,r;
    int flag=0;
    for(i=0;i<size-2;i++){
        l=i+1;
        r=size-1;
        while(r>l){
            if(arr[i]+arr[l]+arr[r]==sum){
                flag=1;
                cout<<arr[l]<<" "<<arr[r]<<" "<<arr[i]<<endl;

                break;
            }
            else if(arr[i]+arr[l]+arr[r]<sum){
                l++;
            }
            else{
                r--;
            }
        }
    }
    if(flag==0){
        cout<<"No";
    }
    return 0;
}
