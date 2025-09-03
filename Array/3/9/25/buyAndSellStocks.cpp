#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

void maxProfit(int *price,int n){
    int bestBuy[100000];
    bestBuy[0]=INT_MAX;
    for(int i=1;i<n;i++){
        bestBuy[i]=min(bestBuy[i-1],price[i-1]);
        cout<<bestBuy[i]<<",";
    }
    cout<<endl;
    int maxProfit=0;
    for(int i=0;i<n;i++){
        int currProfit=price[i]-bestBuy[i];
        maxProfit=max(currProfit,maxProfit);
    }
    cout<<"Max Profit Is: "<<maxProfit;
}

int main(){
    int prices[]={7,6,5,4,3};
    int n=sizeof(prices)/sizeof(int);
    maxProfit(prices,n);
    return 0;
}