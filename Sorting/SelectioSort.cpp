#include<iostream>
#include<vector>
using namespace std;
void rev(int *a,int *b){
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;
}
void SelectionSorting(vector<int> &v){
    int n = v.size(); 
    for(int i=0;i<n-1;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[min_index]){
                min_index=j;

            }
        }
        if(i!=min_index){
            int *ptr1 = &v[i];
            int *ptr2 = &v[min_index];
            rev(ptr1,ptr2);
        }
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
  SelectionSorting(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
}