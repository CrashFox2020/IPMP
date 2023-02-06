#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    int arr[]={ 2, 3, 7, 9, 11, 2, 3, 11 };
    int size=sizeof(arr)/sizeof(arr[0]);
    unordered_set<int> occOnce;
    
    for(int i=0;i<size;i++){
        
        if(occOnce.find(arr[i])==occOnce.end()){
            occOnce.insert(arr[i]);
        }
        else{
            occOnce.erase(arr[i]);
        }
    }
    unordered_set<int>::iterator it=occOnce.begin();
    cout<<*it<<" ";
    it++;
    cout<<*it<<endl;

    return 0;
}