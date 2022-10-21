#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }cout<<endl;
}
void swapAlternate(int arr[],int size){
    for (int i=0;i<size;i+=2)
    {
        if(i+1<size){
          swap(arr[i],arr[i+1]);
        // int temp;
        //    temp = arr[1]
        //   arr[a] = arr[b];
        //   arr[b] = temp;
        //
        }
    }
    
}
int main(){
    int even[8] = {1,2,3,4,5,6,7,8};
    int odd [5] =  {45,67,7,8,6};
    swapAlternate(even,8);
    print(even,8);
    return 0;
}