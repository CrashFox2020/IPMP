#include <iostream>
using namespace std;

int main(){
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int Xor=0;
    int x=0,y=0;
    for(int i=0;i<size;i++){
        Xor^=arr[i];
    }
    for(int i=1;i<=size-2;i++){
        Xor^=i;
    }
    
    int setBit=Xor&(~(Xor-1));
    
    for(int i=0;i<size;i++){
        if(setBit&arr[i]){
            x^=arr[i];
        }
        else{
            y^=arr[i];
        }
    }
    for(int i=0;i<=size-2;i++){
        if(setBit&i){
            x^=i;
        }
        else{
            y^=i;
        }
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}
