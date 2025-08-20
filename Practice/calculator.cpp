#include<iostream>
#include<cmath>
using namespace std;
float sum(float x, float y){
    float k = x + y;
    return k; 
}
float min(float x, float y){
    float k = x-y;
    return k;
}
float product(float x, float y){
    float k = x*y;
    return k;
}
float divde(float x,float y){
    float k = x/y;
    return k;
}
float sine(float x){
    float k= sin(x);
    return k;
}
float cosine(float x){
    float k = cos(x);
    return k;
}
float tangent(float x){
    float k = sin(x)/cos(x);
    return k;
}
float cotan(float x){
    float k = 1/tan(x);
    return k;
}
float cosecant (float x){
    float k = 1/sin(x);
    return k;
}
float secant(float x){
    float k = 1/cos(x);
    return k;
}
float power(float x, float y){
    float k = pow(x,y);
    return k; 
}
float square(int x){
    float k = pow(x,2);
    return k;
}
int fact(int n){
    int k =1;
    for(int i=1;i<=n;i++){
        k*=i;
    }
    return k;
    
}
float SqrRoot(float x){
    float k = pow(x,0.5);
    return k;
}
float logarithm(int x){
    float k = log(x);
    return k;
}

int main(){
    int n;
    cout<<"Press : "<<endl<<"1 for Add"<<endl<<"2 for subtract "<<endl<<"3 for prodcuct"<<endl<<"4 for divide"<<endl<<"5 for square "<<endl<<"6 for sin"<<endl<<"7 for cos"<<endl<<"8 for tan "<<endl<<"9 for cot"<<endl<<"10 for cosec "<<endl<<"11 for sec"<<endl<<"12 for facotrial"<<endl<<"13 for squreRoot"<<endl<<"14 for power"<<endl<<"15 for log (base 'e')"<<endl;
    cin>>n;
    
    if(n==1){
        float x , y;
        cout<<"enter no. 1: ";
        cin>>x;
        cout<<"enter no. 2: ";
        cin>>y;
       cout<<sum(x,y);
    }
    if(n==2){
         float x , y;
        cout<<"enter no. 1: ";
        cin>>x;
        cout<<"enter no. 2: ";
        cin>>y;
        cout<<min(x,y);
    }
    if(n==3){
        float x , y;
        cout<<"enter no. 1: ";
        cin>>x;
        cout<<"enter no. 2: ";
        cin>>y;
        cout<<product(x,y);

    }
    if(n==4){
        float x , y;
        cout<<"enter no. 1: ";
        cin>>x;
        cout<<"enter no. 2: ";
        cin>>y;
        cout<<divde(x,y);
    }
    if(n==5){
        float x;
        cout<<"Enter the no. ";
        cin>>x;
        cout<<square(x);
    }
    if(n==6){
        float x;
        cout<<"Enter the no. ";
        cin>>x;
        cout<<sine(x);
    }
    if(n==7){
        float x;
        cout<<"Enter the no. ";
        cin>>x;
        cout<<cosine(x);
    }
    if(n==8){
        float x;
        cout<<"Enter the no. ";
        cin>>x;
        cout<<tangent(x);
    }
    if(n==9){
        float x;
        cout<<"Enter the no. ";
        cin>>x;
        cout<<cotan(x);

    }
    if(n==10){
        float x;
        cout<<"Enter the no. ";
        cin>>x;
        cout<<cosecant(x);
    }
    if(n==11){
        float x;
        cout<<"Enter the no. ";
        cin>>x;
        cout<<secant(x);
    }
    if(n==12){
        int x;
        cout<<"Enter the no. ";
        cin>>x;
        cout<<fact(x);
    }
    if(n==13){
        float x;
        cout<<"Enter the no. ";
        cin>>x;
        cout<<SqrRoot(x);
    }
    if(n==14){
        float x , y;
        cout<<"enter no. 1: ";
        cin>>x;
        cout<<"enter no. 2: ";
        cin>>y;
        cout<<power(x,y);
    }
    if(n==15){
        int x;
        cout<<"Enter no: ";
        cin>>x;
        if(x>0){
            cout<<log(x);
        }
        else{
            cout<<"-_- !!! Invalid !!!";
        }
    }
}