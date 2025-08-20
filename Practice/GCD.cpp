#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x,y;
    cin>>x;
    cin>>y;
    int ans;
    if(x>=y){
    for(int i=1;i<=y;i++){
        if(x%i==0&&y%i==0){
            ans = i;
        }

    }
    cout<<ans;
}
     else if(y>x){
        for(int i=1;i<=x;i++){
            if(x%i==0&&y%i==0){
                ans = i;
            }
        }
        cout<<ans;
     }

}