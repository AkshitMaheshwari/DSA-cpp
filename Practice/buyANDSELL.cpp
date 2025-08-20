#include<iostream>
using namespace std;
int maxProfit(int array[], int n){
            int max= array[0];
            int k;
            for(int i=0;i<n;i++){
                if(array[i]>max){
                    max = array[i];
                    k=i;
                }
            }
            return k+1;
}
int main(){
int n;
cin>>n;
int array[n];
for(int i=0;i<n;i++){
    cin>>array[i];
}
cout<<maxProfit(array,n);
}