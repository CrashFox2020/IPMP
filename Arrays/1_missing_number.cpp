#include <iostream>
using namespace std;

int main(){
    int arr[]={1, 2, 3, 5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    for(i;i<size+1;i++){
        if(arr[i]!=i+1){
            i++;
            break;
        }
    }
    cout<<i<<endl;
    return 0;
}
