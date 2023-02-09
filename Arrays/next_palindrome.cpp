#include <iostream>
using namespace std;

int isPalindrome(int arr[],int len){
    for(int i=0;i<len;i++){
        if(arr[i]!=arr[len-1-i]){
            return 0;
        }
    }
    return 1;
}

void nextPalindrome(int arr[],int len){
    int ispalindrome=isPalindrome(arr,len);
    if(ispalindrome){
        if(len%2){
            int mid=len/2;
            if(arr[mid]!=9){
                arr[mid]++;
            }
            else{
                arr[mid]=0;
                int i=1;
                while(i<=mid){
                    if(i==mid&&arr[mid+i]==9){
                        arr[mid-i]=10;
                        arr[mid+i]=1;
                        break;
                    }
                    else if(arr[mid+i]==9){
                        arr[mid+i]=0;
                        arr[mid-i]=0;
                        i++;
                    }
                    else{
                        arr[mid+i]++;
                        arr[mid-i]++;
                        break;
                    }
                }
            

            }
        }
        else{
            int i=len/2-1;
            int j=len/2;
            while(i>=0){
                if(i==0&&arr[i]==9){
                    arr[i]=10;
                    arr[j]=1;
                    break;
                }
                else if(arr[i]==9){
                    arr[i]=0;
                    arr[j]=0;
                    i--;
                    j++;
                }
                else{
                    arr[i]++;
                    arr[j]++;
                    break;
                }
            }
        }
        
    }
    else{
        if(len%2){
            int i=len/2-1;
            int j=len/2+1;
            while(arr[i]==arr[j]){
                i--;
                j++;
            }
            if(arr[i]<arr[j]){
                int mid=len/2;

                if(arr[mid]!=9){
                    arr[mid]++;
                    
                }
                else{
                    arr[mid]=0;
                    int k=1;
                    while(mid-k>i){
                        if(arr[mid-k]==9){
                            arr[mid-k]=0;
                            arr[mid+k]=0;
                            k++;
                        }
                        else{
                            arr[mid+k]++;
                            arr[mid-k]++;
                            break;
                        }

                    }
                    if(arr[i+1]==0){
                        arr[i]++;
                    }
                    
                }

            }
            while(i>=0){
                arr[j]=arr[i];
                i--;
                j++;
                
            }
        }
        else{
            int i=len/2-1;
            int j=len/2;
            while(arr[i]==arr[j]){
                i--;
                j++;
            }
            if(arr[i]<arr[j]){
                int k=len/2-1;
                int l=len/2;
                if(arr[k]!=9){
                    arr[k]++;
                    arr[l]++;
                }
                else{
                    while(k>i){
                        if(arr[k]==9){
                            arr[k]=0;
                            k--;
                            arr[l]=0;
                            l++;
                        }
                        else{
                            arr[k]++;
                            arr[l]++;
                            break;
                        }
                    }
                    if(arr[i+1]==0){
                        arr[i]++;
                    }
                }
            }
            while(i>=0){
                arr[j]=arr[i];
                i--;
                j++;
            }
        }
    }
    for(int i=0;i<len;i++){
            cout<<arr[i];
    }
}

int main(){
    int arr[] = {9,4,1,8,7,9,7,8,3,2,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    nextPalindrome(arr,size);
}