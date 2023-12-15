#include<stdio.h>
double add(double a, double b);
double sub(double a, double b);
double mul(double a, double b);
double div(double a, double b);

int main(){
    char choice;
    double a,b,ans;
    printf("Would you like to add(a), subtract(s), multiply(m), or divide(d): \n");
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
        case 'd':
            if(b==0){
                printf("Cannot divide by 0");
                return 0;
                break;
            }else
            ans = div(a,b);
            break;
        default:
            printf("Invalid opperation");
    }


    printf("%lf", ans);

    

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

double div(double a, double b){
    return(a/b);
}
