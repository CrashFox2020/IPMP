#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 2, 3, 1, 3};
    int x=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        x=x^arr[i];
    }
    cout<<x<<endl;
}