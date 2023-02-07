#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    int arr[]={1, 4, 45, 6, 10, -8};
    int sum=1;
    int size=sizeof(arr)/sizeof(arr[0]);
    int flag=0;
    unordered_set<int> s;
    for(int i=0;i<size;i++){
        if(s.find(sum-arr[i])!=s.end()){
            flag=1;
            break;
        }
        s.insert(arr[i]);
    }
    if(flag){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}