#include<iostream>
using namespace std;

//Time complexity: O(n2)
int firstPetrolPump(int petrol[], int dist[], int n){
    for(int start=0;start<n;start++){
        int curr_petrol=0;
        int end=start;
        while(true){
            curr_petrol+=(petrol[end]-dist[end]);
            if(curr_petrol<0)
                break;
            end=(end+1)%n;
            if(end==start)
                return (start+1);
        }
    }
    return -1;
}

//Better Solution(Using deque) [2n operations & O(n)]
// 1. Keep adding items to the end of deque while curr_petrol is greater than equal to 0.
// 2. Keep removing items from the front of deque while curr_petrol is negative.

//Efficient Solution [O(1) & single traversal] {NHI SMJH AAYA}
int firstPetrolPump(int petrol[], int dist[], int n){
    int start=0, curr_pet=0, prev_pet=0;
    for(int i=0;i<n;i++){
        curr_pet+=(petrol[i]-dist[i]);
        if(curr_pet<0){
            start=i+1;
            prev_pet+=curr_pet;
            curr_pet=0;
        }
    }
    return ((curr_pet+prev_pet)>=0)?(start+1):-1;
}

int main(){
    
    return 0;
}