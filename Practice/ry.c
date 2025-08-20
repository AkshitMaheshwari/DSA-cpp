#include<stdio.h>


int main(){
 

float subject_one ;
float subject_two ;

printf(" Enter your subject_one");
scanf("%d", &subject_one);

printf(" Enter your subjec_two");
scanf("%d", &subject_two);

float total_marks = subject_one + subject_two;




if(  total_marks>=40&& subject_one>=16 &&subject_two>=16){
    printf(" You are pass dont break my flow");



}

else{

    printf( "You are fail ");
}



}


