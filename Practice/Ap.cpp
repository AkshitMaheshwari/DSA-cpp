#include<iostream>
#include<cmath>
using namespace std;
float ap(float n,float d,float a){
    float sum = n/2*(2*a+(n-1)*d);
    return sum;
}
float gp( float n, float r,float a){
    int k = a*(pow(r,n)-1)/(r-1);
    return k;
}
float hp(float n , float d, float a){
    int k = (1/d)*(log((2*a + (2*n-1)*d)/(2*a - d)));
}
int main(){
     
    string s;
    cout<<"Which series do you want to calculate the sum of ? "<<"\n"<<"AP , GP or HP "<<endl;
    cin>>s;
    if(s =="AP"||s=="ap"||s=="Ap"||s=="aP"){
       float a,n,d; 
        cout<<"Enter First term : ";
        cin>>a;
        cout<<"Enter the common Difference : ";
        cin>>d;
        cout<<"Enter no. of terms : ";
        cin>>n;
        cout<<"Hence total Sum is = "<<ap(n,d,a);
      
    }

    else if(s=="gp"||s=="GP"||s=="Gp"||s=="gP"){
        float a,n,r; 
        cout<<"Enter First term : ";
        cin>>a;
        cout<<"Enter the common Ratio : ";
        cin>>r;
        cout<<"Enter total no. of Terms : ";
        cin>>n;
        cout<<"Hence total Sum is = "<<gp(n,r,a);

    }
    
   else if(s=="HP"||s=="hp"||s=="Hp"||s=="hP"){
        float a,n,d; 
        cout<<"Enter First term : ";
        cin>>a;
        cout<<"Enter the common Difference : ";
        cin>>d;
        cout<<"Enter no. of terms : ";
        cin>>n;
        cout<<"Hence total Sum is = "<<hp(n,d,a);
    }
    else{
        cout<<"Invalid!!";
    }
    

}