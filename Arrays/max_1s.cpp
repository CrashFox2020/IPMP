#include <iostream>
using namespace std;

int main(){
    int arr[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    int max=0;
    int index=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==1){
                if(max<4-j){
                    max=4-j;
                    index=i;
                    if(max==4){
                        break;
                    }
                }
            }
        }
    }
    cout<<index<<endl;
    return 0;
}