#include <iostream>
using namespace std;

int main(){
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int c1=0,c2=0,c0=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            c0++;
        }
        else if(arr[i]==1){
            c1++;
        }
        else{
            c2++;
        }
    }
    int i=0,j=c0,k=c1;
    while(i<c0||j<c1+c0||k<c2+c1+c0){
        while(arr[i]==0){
            i++;
        }
        while(arr[j]==1){
            j++;
        }
        while(arr[k]==2){
            k++;
        }
        if(arr[i]==1&&arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else if(arr[i]==2&&arr[k]==0){
            swap(arr[i],arr[k]);
            i++;
            k++;
        }
        else if(arr[j]==2&&arr[k]==1){
            swap(arr[j],arr[k]);
            j++;
            k++;
        }
        else if(arr[i]==1&&arr[j]==2&&arr[k]==0){
            arr[i]=0;
            arr[j]=1;
            arr[k]=2;
        }
        else if(arr[i]==2&&arr[j]==0&&arr[k]==1){
            arr[i]=0;
            arr[j]=1;
            arr[k]=2;
        }
    }
    for(int l=0;l<size;l++){
        cout<<arr[l]<<" ";
    }
    cout<<endl;
}