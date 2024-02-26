// Cyclically Rotate an array by kth 

#include<iostream>
#include<vector>
using namespace std;

void rotateArray(vector<int> &nums, int k ){
    int n=nums.size();
    vector<int> temp(n);
    for(int i=0;i<n;i++)
        temp[(i+k)%n]=nums[i];
    nums=temp;
}

int main(){
    int pos;
    cout<<" Enter the postions to be rotated ";
    cin>>pos;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);

    for(int i=0;i<nums.size();i++)
        cout<<nums[i]<<"    ";

    cout<<"\n\n\n";
    rotateArray(nums,pos);
    
    for(int i=0;i<nums.size();i++)
        cout<<nums[i]<<"    ";
    

}