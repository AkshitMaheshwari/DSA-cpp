#include<iostream>
#include<climits>
using namespace std;
int largestElement(int array[],int n){
      
        int max = array[0];
         for(int i=0;i<n;i++){
            if(array[i]>max){
                max=array[i];
            }

     }
     return max;

}
int peakElement(int array[], int n){
              int k= largestElement(array,n);
              int *ptr = &k;
              int x;
              for(int i=0;i<n;i++){
                if(array[i]==*ptr){
                    x=i;
                }
              }
              return x+1;
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    cout<<largestElement( array, n);
    cout<<"\n"<<peakElement(array,n);
    
          return 0;
    
    

    
   
}