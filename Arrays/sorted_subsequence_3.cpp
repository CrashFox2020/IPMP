#include <iostream>
using namespace std;
#define MAX 999999999999

int main(){
    int arr[] = {20,100,10,12,5,13};
    int size=sizeof(arr)/sizeof(arr[0]);
    long min=MAX;
    long n1=arr[0],n2=MAX,n3=MAX;
    long flag=0;
    for(long i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>n2){
            n3=arr[i];
            flag=1;
            break;
        }
        else if(arr[i]<n2&&arr[i]>min){
            n2=arr[i];
            n1=min;
        }
        else if(n2==MAX&&min<n1){
            n1=min;
        }
        cout<<min<<" "<<n1<<" "<<n2<<" "<<n3<<endl;
    }

    if(flag){
        cout<<n1<<" "<<n2<<" "<<n3<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}