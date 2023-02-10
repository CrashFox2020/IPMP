#include <iostream>
using namespace std;

int main(){
    int arr[4][4]={ {0, 0, 0, 1},
                    {0, 1, 1, 1},
                    {1, 1, 1, 1},
                    {0, 0, 0, 0}};
    int max=0;
    int index=0;
    for(int i=0;i<4;i++){
        if(arr[0][i]==1){
            max=4-i;
            break;
        }
    }
    for(int i=1;i<4;i++){
        int j=4-max-1;
        if(arr[i][j]==1){
            while(j>=0&&arr[i][j]==1){
                j--;
            }
            if(4-j-1>max){
                index=i;
                max=4-j-1;
            }
            if(max==4){
                break;
            }
        }
    }
    cout<<index<<endl;
    return 0;
}