#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bucketSort(float arr[],int n){
    vector<vector<float> > bucket(n, vector<float> ());
    float max_ele = arr[0];
    float min_ele = arr[0];
    for(int i=1;i<n;i++){
        max_ele = max(max_ele,arr[i]);
        min_ele = min(min_ele,arr[i]);
    }
    float range = (max_ele - min_ele)/n;
    for(int i=0;i<n;i++){
        int index = (arr[i]-min_ele)/range;
        float diff = (arr[i]-min_ele)/range - index;
        if(diff==0&&arr[i]!=min_ele){
            bucket[index-1].push_back(arr[i]);
        }
        else{
        bucket[index].push_back(arr[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(!bucket[i].empty()){
        sort(bucket[i].begin(),bucket[i].end());
        }
    }
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<bucket[i].size();j++){
            arr[k++] = bucket[i][j];
        }
    }
}
int main(){
    int n;
    cin>>n;
    float arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Sorted Array: "<<endl;
    bucketSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    
    }
}




        

