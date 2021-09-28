#include <stdio.h>

int main() {
    int userpin,selection,access,a,b,c,d, input;
    //Hardcoded Values
    char name[]="Yuvraj Verma"; //Username
    int pin=1234; //ATM Pin
    int balance=5000; //User Balance
    int availablecash=8000; //Available cash in ATM

    //Program Execution
    printf("Welcome to Axis Bank!\n");
    printf("Please enter pin to continue: ");
    scanf("%d", &userpin);
    if(userpin==pin){
        access=1;
    } else {
        access=0;
        printf("Invalid Pin");
    }
    do {
    if(access==1){
        printf("Hello %s\n", name);
        printf("Press 1 for balance enquiry.\n");
        printf("Press 2 to change your pin.\n");
        printf("Press 3 for withdrawl.\n");
        printf("Press 4 to deposit.\n");
        printf("Please select an option: ");
        scanf("%d", &selection);
    switch (selection) {
        case 1:
            printf("Your available balance is %d", balance);
            break;
        case 2:
            printf("Input New Pin:");
            scanf("%d", &a);
            printf("\nVerify new pin: ");
            scanf("%d", &b);
            if (a == b) {
                pin = a;
                printf("\nPin changed sucessuflly!");
            } else {
                printf("Pin not matched!");
            }
            break;
        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%d", &c);
            if (c <= balance && c <= availablecash) {
                balance = balance - c;
                availablecash = availablecash - c;
                printf("Spitting out Money!");
            } else if (c >= balance) {
                printf("You're out of money!");
            } else {
                printf("ATM is out of money");
            }
            break;
        case 4:
            printf("Enter amount to deposit: ");
            scanf("%d", &d);
            balance = balance + d;
            availablecash = availablecash + d;
            printf("Money deposited sucessfully!");
            printf("Your balance is %d", balance);
            break;
        default:
            printf("Invalid Input");
    }
    } else {
        return 0;
    }
        printf("\nPress 1 if you wish to continue");
        printf("\nPress anything if you wish to quit");
        printf("\nInput: ");
        scanf("%d", &input);
    }
    while(input == 1);
    printf("..End of Program..");
}
