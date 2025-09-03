#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

void trap(int *heigths,int n){
    int leftMax[20000],rightMax[20000];
    leftMax[0]=heigths[0];
    rightMax[n-1]=heigths[n-1];
    for(int i=1;i<n;i++){
        leftMax[i]=max(leftMax[i-1],heigths[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        rightMax[i]=max(rightMax[i+1],heigths[i-1]);
    }
    int waterTrap=0;
    for(int i=0;i<n;i++){
        int currWater=min(rightMax[i],leftMax[i])-heigths[i];
        if(currWater>0){
            waterTrap+=currWater;
        }
    }
    cout<<"Water Trap Is "<<waterTrap;

}

int main(){
    int heights[]={4,2,0,3,2,5};
    int n=sizeof(heights)/sizeof(int);

    trap(heights,n);
    return 0;
}