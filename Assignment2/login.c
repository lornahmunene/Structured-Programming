#include <stdio.h>
#include <string.h>
int login(){
    char pin[10];
    // char correctPin[]="1234";


    printf("Enter your pin: ");
    scanf("%s", pin); 
    int length =strlen(pin);

    if (length>4){
        printf("Pin is too long(Must be 4 digits)");
    }
    else if (length<4){
        printf("Pin is too short(must be 4 digits)");
    }
    else{    
        if (strcmp(pin,"1234")==0){
         printf("Access granted");
        } else{
         printf("Access denied");
        };
    }
}
int checkBalance(){
    int balance=0;
    
    printf("\n Your balance is:%d",balance);
    return balance;

}
int deposit(){
    int amount;
    printf("Enter amount to deposit:");
    scanf("%d",&amount);
    int result=amount+checkBalance();
    return result;
    printf("\n Successful deposit of:%d",result);
}
int withdraw(){
    int amount;
    printf("Enter amount to withdraw:");
    scanf("%d",&amount);
    
    int result=checkBalance()-amount;
    return result;
    printf("\n You've withdrawn:%d",result);
}
int display(){
    int choice;
    printf("\nChoose an option:\n");
    printf("\n1. Check Balance\n");
    printf("\n2. Deposit\n");
    printf("\n3. Withdraw\n");
    printf("\n4. Exit\n");
    printf("\nEnter your choice: \n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            checkBalance();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdraw();
            break;
        case 4:
            printf("Exiting system.");
            break;
        default:
            printf("Invalid option! Please try again.");
    }

    return 0;

}
int main(){
    login();
    display();
}