
// There are N stones, numbered 1,2,3,..,N. For each i
// (1<=i<=N),the height of stone i is hi. There is a 
// frog who is initially on stone 1. He will repeat
// the following action some number of times to reach 
// stone N:

// If the frog is currently on stone i, jump to stone 
// i+1 or stone i+2. Here, a cost of |hi - hj| is 
// incurred, where j is the stone to land on.

// Find The minimum possible total cost incurred before
//the frog reaches store N.

// Input n =4;
// arr[]= 10 30 40 20
// output = 30

// so The frog will jump from stone 1 to stone 2 and
// stone 2 to stone 4 
// stone 1 => stone 2 = |10 - 30| = 20
// stone 2 => stone 4 = |30 - 20| = 10
// Total cost = 10 + 20 = 30


#include<iostream>
using namespace std;

int f(int *h, int n , int i){
    // base case
       if(i==n-1)return 0;
       if(i==n-2)return f(h,n,i+1)+ abs(h[i]-h[i+1]);

       return min(f(h,n,i+1)+ abs(h[i]-h[i+1]), f(h,n,i+2)+abs(h[i]-h[i+2]));

}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    cout<<"Hence Minimum Cost is = "<<f(array,n,0);
    return 0;
}

