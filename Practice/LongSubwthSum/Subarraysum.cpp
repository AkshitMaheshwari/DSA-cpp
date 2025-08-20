// #include<iostream>
// using namespace std;
// int longSubarrWthSumDivByK(int arr[], int n, int k)
// 	{
// 	    // Complete the function
// 	    int sum =0;
// 	    for(int i=1;i<n-1;i++){
// 	        sum+=arr[i];
// 	    }
	    
// 	    if(sum%k!=0) {return 0;}
// else{
//         return n-2;
//     }
//     }
// int main(){
// int n;
// cin>>n;
// int array[n];
// int k;
// cin>>k;
// for(int i=0;i<n;i++){
//     cin>>array[i];
// }
// cout<<longSubarrWthSumDivByK(array,n,k);

// }
#include<iostream>
#include<vector>
using namespace std;

int findPeakElement(vector<int>& arr) {
           int x;
		   int n = arr.size();
       int max=arr[0];
       for(int i=0;i<n;i++){
           if(arr[i]>max){
            max = arr[i];
               x=i;
           }
       } 
       return x+1; 
    
}
int main(){
int n ;
cin>>n;
vector<int> array(n);
for(int i=0;i<n;i++){
	cin>>array[n];
}
 cout<<findPeakElement(array);
}