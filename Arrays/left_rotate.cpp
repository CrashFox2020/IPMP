#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(a%b==0){
        return b;
    }
    return gcd(b,a%b);
}

int main(){
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    int d=10;
    int g=gcd(size,d);
    for(int i=0;i<g;i++){
        int j=i;
        int temp=arr[i];
        while ((j+d)%size!=i)
        {
            arr[j]=arr[(j+d)%size];
            j=(j+d)%size;
        }
        arr[j]=temp;
        
        
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}