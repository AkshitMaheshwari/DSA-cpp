
// Q1

// Given an array of names of fruits; you are supposed to sort it 
// in lexicographical order using the selection sort 

// Input: ["Papaya","lime","watermelon","apple","mango","kiwi"]
// Output: ["apple","kiwi","lime","mango","papaya","watermelon"]

#include<iostream>
#include<string.h>
using namespace std;

void selectionSort(char fruit[][60],int n){
    for(int i=0;i<n-1;i++){
        int min_index =i;
        for(int j=i+1;j<n;j++){
            if(strcmp(fruit[min_index],fruit[j])>0){
                min_index=j;
            }
        }
        if(i!=min_index){
            swap(fruit[i],fruit[min_index]);
        }
    }
    return;
}
int main(){
    int n;
    cin>>n;
    char fruit[n][60];
    
      for(int i=0;i<n;i++){
        cin>>fruit[i];
      }
             selectionSort(fruit , n);
      for(int i=0;i<n;i++){
           cout<<fruit[i]<<" ";
      }


}