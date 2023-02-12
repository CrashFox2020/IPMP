#include <iostream>
using namespace std;
#include <unordered_set>

int main(){
    int arr[] = {-3, 2, 3, 1, 6};
    int size=sizeof(arr)/sizeof(arr[0]);
    unordered_set<int> sums;
    sums.insert(0);
    int sum=0;
    int flag=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        if(sums.find(sum)==sums.end()){
            sums.insert(sum);
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}