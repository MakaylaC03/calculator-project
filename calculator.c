#include<stdio.h>
double add(double a, double b);

int main(){
    double a,b,ans;
    printf("Enter two numbers to add: \n");
    scanf("%lf" , &a);
    scanf("%lf" , &b);
    ans= add(a,b);
    printf("%lf", ans);
    return 0;
    

}

double add(double a, double b){
    return(a+b);
}
