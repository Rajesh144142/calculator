#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int k=0 ;
int result =0;
void instraction(){
    printf ("----------------------------\n");
    printf ("|1.addition                |\n");
    printf ("|2.subtraction             |\n");
    printf ("|3.multiplication          |\n");
    printf ("|4.division                |\n");
    printf ("|5.modulus or remainder    |\n");
    printf ("|6.factorial               |\n");
    printf ("|7.exit                    |\n");
    printf ("|8.clearsc                 |\n");
    printf ("----------------------------\n");
}
void add(){
    int a,b;
    if (k){
        printf ("enter your next number:\n ");
        scanf ("%d",&a);
        result +=a;
        printf ("\nresult=%d\n",result );
    }
    else {
        printf ("enter the two numbers :\n");
        scanf ("%d%d",&a,&b);
        result =a+b;
         printf ("\nresult=%d\n",result );
        }
        k=1;
    
}
void sub(){
    int a,b;
    if (k){
        printf ("enter your next number:\n ");
        scanf ("%d",&a);
        result -=a;
        printf ("\nresult=%d\n",result );
    }
    else {
        printf ("enter the two numbers :\n");
        scanf ("%d%d",&a,&b);
        result =a-b;
         printf ("\nresult=%d\n",result );
        }
        k=1;
    
}
void mul(){
    int a,b;
    if (k){
        printf ("enter your next number:\n ");
        scanf ("%d",&a);
        result *=a;
        printf ("\nresult=%d\n",result );
    }
    else {
        printf ("enter the two numbers :\n");
        scanf ("%d%d",&a,&b);
        result =a*b;
         printf ("\nresult=%d\n",result );
        }
        k=1;
    
}
void dive(){
    int a,b;
    if (k){
        printf ("enter your next number:\n ");
        scanf ("%d",&a);
        result =result/a;
        printf ("\nresult=%d\n",result );
    }
    else {
        printf ("enter the two numbers :\n");
        scanf ("%d%d",&a,&b);
        result =a/b;
         printf ("\nresult=%d\n",result );
        }
        k=1;
    
}
void rema(){
    int a,b;
    if (k==1){
        printf ("enter your next number:\n ");
        scanf ("%d",&a);
        result %=a;
        printf ("\nresult=%d\n",result );
    }
    else {
        printf ("enter the two numbers :\n");
        scanf ("%d%d",&a,&b);
        result =a%b;
         printf ("\nresult=%d\n",result );
        }
        k=1;
    
}
void clearsc(){
    result=0;
    k=0;
}
void factorial (){
    int a ;
    result =1;
    printf ("enter the number than you want to get factorial :\n=>");
    scanf ("%d",&a);
    if (a==0){
        printf ("\nfactorial of zero is impossible\n");
    }
    else{
    while (a!=0){
        result =result*a;
        a--;

    }
    printf ("your result is %d\n",result);
    }
}
int main(){
    int ch ;
    while (1){
        instraction();
    printf ("enter your choice :\n=>");
    scanf ("%d",&ch);
    switch(ch){
        case 1:
            add();
             break;
    case 2:
        sub();
        break;
    case 3:
        mul();
        break;

    case 4:
         dive();
         break;
    case 5:
        rema();
        break ;
    case 6:
     factorial();
     break;
    case 7:
        exit(0);
    case 8:
       clearsc();
       break;
    default:
    printf ("wrong combination \n give something new \n");
    break ;
}
    }
return 0;
}
