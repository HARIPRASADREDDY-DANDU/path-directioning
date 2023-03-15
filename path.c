#include<stdio.h>
int main()
{
    //Fill the code
    int num;
    char ch;
    printf("Welcome to AsInTra\n");
    printf("1.CSE\n2.ECE\n3.MECH\n4.CIVIL\n");
    printf("Enter Department\n");
    scanf("%i",&num);
    if(num==1){
        printf("Go Straight\n");
        printf("Welcome to CSE Department\n");
        printf("a. Coding\nb. Web Designing\nc. Database\n");
        printf("Enter Event \n");
        scanf(" %c",&ch);
        if(ch=='a'){
            printf("Go to hall S108");
        }
        else if(ch=='b'){
            printf("Go to hall S208");
        }
        else if(ch=='c'){
            printf("Go to hall S206");
        }
        else{
            printf("No Event exist");
        }
    }
    if(num==2){
        printf("Go Right\n");
        printf("Welcome to ECE Department\n");
        printf("a. Project Expo\nb. PPT\nc. Circuit Debug\n");
        printf("Enter Event \n");
        scanf(" %c",&ch);
        if(ch=='a'){
            printf("Go to hall M108");
        }
        else if(ch=='b'){
            printf("Go to hall M208");
        }
        else if(ch=='c'){
            printf("Go to hall M206");
        }
        else{
            printf("No Event exist");
        }
    }
    if(num==3){
        printf("Go Left\n");
        printf("Welcome to MECH Department\n");
        printf("a. BottleRocketery\nb. PPT\nc. Mad 4 CAD\n");
        printf("Enter Event \n");
        scanf(" %c",&ch);
        if(ch=='a'){
            printf("Go to hall N108");
        }
        else if(ch=='b'){
            printf("Go to hall N208");
        }
        else if(ch=='c'){
            printf("Go to hall N206");
        }
        else{
            printf("No Event exist");
        }
    }
    if(num==4){
        printf("Go Straight and turn Left\n");
        printf("Welcome to CIVIL Department\n");
        printf("a. CADD Quest\nb. Brick Bonding\nc. Model Making\n");
        printf("Enter Event \n");
        scanf(" %c",&ch);
        if(ch=='a'){
            printf("Go to hall C108");
        }
        else if(ch=='b'){
            printf("Go to hall C208");
        }
        else if(ch=='c'){
            printf("Go to hall C206");
        }
        else{
            printf("No Event exist");
        }
    }
    if(num>4){
        printf("Wrong Input");
    }
    return 0;
}
