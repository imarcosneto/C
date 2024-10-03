#include <stdio.h>
int main(){
    int a;
    printf("\nEntre com um número do array: ");
    scanf("%d", &a);
    
    if(a>=1 && a<=24){
        a = a + (a-1);
        printf("\nO valor retornado é %d", a);
    }
    else if(a>=25 && a<=48){
        a = (a - 25) * 2 + 2;
        printf("\nO valor retornado é %d", a);
    }
}
