#include <stdio.h>
#include <stdlib.h>

int main(){
    int entrys=0;
    int correctPin = 1234;
    int userPin;
    
    for (int i=0;i<3;i++){
    printf("\nPlease input your PIN\n");
    scanf("%d", &userPin);
    if (userPin==correctPin){
        printf("Access Granted");
        break;
    
    }else{
        printf("Access denied");
    }
    
    entrys++;
    printf("\nToo many attempts system locked!");
    }
    
    

   
    
}