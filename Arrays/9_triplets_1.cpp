#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n=100;
    int count=0;
    for(int i=1;i<n-1;i++){
        int a2=pow(i,2);
        for(int j=i+1;j<n;j++){
            int b2=pow(j,2);
            int c2=a2+b2;
            if(sqrt(c2)==(int (sqrt(c2)))){
                count++;
                cout<<int (sqrt(a2))<<" "<<int (sqrt(b2))<<" "<<int (sqrt(c2))<<endl;
            }
        }
    }
    cout<<count<<endl;
}
