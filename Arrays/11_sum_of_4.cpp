#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 9, 7, 8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=16;
    unordered_map<int,pair<int,int>> m;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i!=j){
                m[arr[i]+arr[j]]=make_pair(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i!=j&&m.find(sum-arr[i]-arr[j])!=m.end()){
                pair<int,int> p=m[sum-arr[i]-arr[j]];
                if(p.first!=arr[i]&&p.first!=arr[j]&&p.second!=arr[i]&&p.second!=arr[j]){
                    cout<<p.first<<" "<<p.second<<" "<<arr[i]<<" "<<arr[j]<<endl;
                }
            }
        }
    }
    return 0;
}
