#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int max = array[1]- array[0];
        for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(array[j]-array[i]>=max){
                max = array[j]-array[i];
            }
            else if(array[i]-array[j]>=max){
                max = array[i]-array[j];
            }

        }
    }
    cout<<max;
}