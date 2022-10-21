#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
     for(auto & i : arr)
       cin>>i;
       for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]!=arr[j]){
                continue;
            }
            else{
                cout<<arr[i];
                break;
            }
        }

       }
    return 0;
// }
// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         vector<int>res;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size()-1;i++){
//             if(nums[i]==nums[i+1]){
//                 res.push_back(nums[i]);
//             }
//         }
//         return res;
//     }
// };