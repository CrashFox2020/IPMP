#include <iostream>
using namespace std;

int main(){
    int arr[]={10, 20};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x=0;
    int oddTimes1=0,nonRepeat2=0;
    for(int i=0;i<size;i++){
        x^=arr[i];
    }
    int setBit=x&(~(x-1));
    for(int i=0;i<size;i++){
        if(setBit&arr[i]){
            oddTimes1^=arr[i];
        }
        else{
            nonRepeat2^=arr[i];
        }
    }
    cout<<oddTimes1<<" "<<nonRepeat2<<endl;
    return 0;
}