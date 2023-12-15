#include<stdio.h>
double add(double a, double b);
double sub(double a, double b);
double mul(double a, double b);

int main(){
    char choice;
    double a,b,ans;
    printf("Would you like to add(a), subtract(s), or multiply(m): \n");
    scanf("%c" , &choice);
    printf("Enter two numbers: \n");
    scanf("%lf" , &a);
    scanf("%lf" , &b);
    
    switch (choice){
        case 'a':
            ans = add(a,b);
            break;
        case 's':
            ans = sub(a,b);
            break;
        case 'm':
            ans  = mul(a,b);
            break;
        default:
            printf("Invalid opperation");
    }


    printf("%lf", ans);
    return 0;
    

}

double add(double a, double b){
    return(a+b);
}

double sub(double a, double b){
    return(a-b);
}

double mul(double a, double b){
    return(a*b);
}
