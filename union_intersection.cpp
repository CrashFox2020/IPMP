#include <iostream>
using namespace std;

void intersection(int arr1[],int arr2[],int size1,int size2){
    
    int i=0,j=0;
    cout<<"Intersection: ";
    for(i;i<size1&&j<size2;i++){
        while(j<size2&&arr1[i]>arr2[j]){
            j++;
        }
        if(j<size2&&arr2[j]==arr1[i]){
            cout<<arr1[i]<<" ";
        }
        while(i<(size1-1)&&arr1[i]==arr1[i+1]){
            i++;
        }
    }
    cout<<endl;
}

void Union(int arr1[],int arr2[],int size1,int size2){
    
    int i=0,j=0;
    cout<<"Union: ";
    for(i;i<size1;i++){
        while(j<size2&&arr1[i]>arr2[j]){
            if(j==0)
                cout<<arr2[j]<<" ";
            else if(arr2[j]!=arr2[j-1])
                cout<<arr2[j]<<" ";
            j++;
        }
        if(j<size2&&arr2[j]==arr1[i]){
            cout<<arr1[i]<<" ";
            j++;
        }
        else if(j<size2&&arr2[j]>arr1[i]){
            cout<<arr1[i]<<" ";
        }
        else if(j==size2){
            cout<<arr1[i]<<" ";
        }
        while(i<(size1-1)&&arr1[i]==arr1[i+1]){
            i++;
        }
    }
    for(j;j<size2;j++){
        if(j==0)
            cout<<arr2[j]<<" ";
        else if(arr2[j]!=arr2[j-1])
            cout<<arr2[j]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[] = {1, 2, 2, 2, 3};
    int arr2[] = {2, 3, 3, 4, 5, 5}; 
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    intersection(arr1,arr2,size1,size2);
    Union(arr1,arr2,size1,size2);
    return 0;
}