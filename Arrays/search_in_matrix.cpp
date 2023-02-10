#include <iostream>
using namespace std;

int main(){
    int arr[4][4]={ {10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32,33,39, 50}};
    int x=100;
    int flag=0;
    int i=3;
    while(i>=0&&arr[0][i]>x){
        i--;
    }
    int j;
    if(i>=0){
        
        while(j<4&&x>arr[j][i]){
            j++;
        }
        if(j<4 && arr[j][i]==x){
            flag=1;
        }
    }
    if(flag){
        cout<<i<<" "<<j<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}