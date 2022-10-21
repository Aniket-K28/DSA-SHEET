#include <iostream>
using namespace std;
 void printArray(int arr[],int n){
    for (int i = 0; i < n;i++)
    {
        cout<<arr[i]<<"";
    }cout<<endl;
    
 }
 void sortOne(int arr[],int n){
    int s = 0 , e= n-1;
      while (s<e)
    {
        while (arr[s]==0 && s<e)
        {
           s++;
        }
        while (arr[e] == 1 && s<e)
        {
            e--;
        }
        if(s<e)
        {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }
    
 }
int main(){
    int arr[8] = {1,1,0,0,0,0,1,0};
    sortOne(arr,8);
    printArray(arr,8);
    return 0;
}
