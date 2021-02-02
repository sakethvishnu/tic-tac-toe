#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void print();
void gotoxy(int,int);
void load();
void color(int);
void printGame();
int main(){
    system("cls");
    Z:{
        char square[10]={'0','1','2','3','4','5','6','7','8','9'};
        int choice ,player;
        int i=0,count=1,a,j;
        int returnvalue=0;
        char mark,p1[10],p2[10];
        player=1;
        system("cls");
        print();
   back:system("cls");
        load();
        system("cls");
        printGame();
        switch(getch())
        {
        case '1':{
            system("cls");
            load();
            system("cls");
            gotoxy(30,10);
            color(12);
            printf("Enter player X  :");
            gotoxy(30,12);
            scanf("%s",p1);
            color(3);
            gotoxy(30,14);
            printf("Enter player O  :");
            gotoxy(30,16);
            scanf("%s",p2);
            color(7);
            gotoxy(0,30);
            printf("Enter any key to continue.........");
            getch();
            system("cls");
            load();
            system("cls");
            x:do
              {
                gotoxy(40,6);
                color(12);
                printf("Tic  ");
                color(8);
                printf("Tac  ");
                color(3);
                printf("Toe");
                gotoxy(40,8);
                color(14);
                printf("F o r e v e r");
                gotoxy(35,10);
                color(12);
                printf("%s(X)  ",p1);
                color(3);
                printf("-  ");
                printf("%s(0)",p2);
                gotoxy(40,12);
                color(14);
                gotoxy(40,12);
                color(14);
                printf("   |   |   ");
                gotoxy(40,13);
                printf(" %c | %c | %c ",square[1],square[2],square[3]);
                gotoxy(40,14);
                printf("___|___|___");
                gotoxy(40,15);
                printf("   |   |   ");
                gotoxy(40,16);
                printf(" %c | %c | %c ",square[4],square[5],square[6]);
                gotoxy(40,17);
                printf("___|___|___");
                gotoxy(40,18);
                printf("   |   |   ");
                gotoxy(40,19);
                printf(" %c | %c | %c ",square[7],square[8],square[9]);
                gotoxy(40,20);
                printf("   |   |   "); 
                player=(player%2!=0)?1:2;
                gotoxy(0,30);
                (player == 1)?color(12):color(3);
                printf("%s please enter a number........",(player == 1)?p1:p2);
                scanf("%d",&choice);
                mark = (player==1)?'X':'O';  
                if (choice==1&&square[1]=='1')
                square[1]=mark; 
                else if (choice==2&&square[2]=='2')
                square[2]=mark;
                else if (choice==3&&square[3]=='3')
                square[3]=mark;
                else if (choice==4&&square[4]=='4')
                square[4]=mark;
                else if (choice==5&&square[5]=='5')
                square[5]=mark;
                else if (choice==6&&square[6]=='6')
                square[6]=mark;
                else if (choice==7&&square[7]=='7')
                square[7]=mark;
                else if (choice==8&&square[8]=='8')
                square[8]=mark;
                else if (choice==9&&square[9]=='9')
                square[9]=mark;
                else
                {
                    system("cls"); 
                    gotoxy(0,32);
                    color(12);
                    printf("Last Warining.\nre-enter the value........");
                    goto x;
                }
                system("cls");
                if(square[1]==square[2]&&square[2]==square[3])
                returnvalue=1;
                else if(square[4]==square[5]&&square[5]==square[6])
                returnvalue=1;
                else if(square[7]==square[8]&&square[8]==square[9])
                returnvalue=1;
                else if(square[1]==square[4]&&square[4]==square[7])
                returnvalue=1;
                else if(square[2]==square[5]&&square[5]==square[8])
                returnvalue=1;
                else if(square[3]==square[6]&&square[6]==square[9])
                returnvalue=1;
                else if(square[1]==square[5]&&square[5]==square[9])
                returnvalue=1;
                else if(square[3]==square[5]&&square[5]==square[7])
                returnvalue=1;
                else if(count==9)
                returnvalue=0;
                else
                returnvalue=2;
    
               count++;
               i=returnvalue;
               player++;
            }while(i==2);


    gotoxy(40,6);
    color(12);
    printf("Tic  ");
    color(8);
    printf("Tac  ");
    color(3);
    printf("Toe");
    gotoxy(40,8);
    color(14);
    printf("F o r e v e r");

    gotoxy(35,10);
    color(12);
    printf("%s(X)  ",p1);
    color(3);
    printf("-  ");
    printf("%s(0)",p2);
    gotoxy(40,12);
        
        color(14);
        color(14);
        printf("   |   |   ");
        gotoxy(40,13);
        printf(" %c | %c | %c ",square[1],square[2],square[3]);
        gotoxy(40,14);
        printf("___|___|___");
        gotoxy(40,15);
        printf("   |   |   ");
        gotoxy(40,16);
        printf(" %c | %c | %c ",square[4],square[5],square[6]);
        gotoxy(40,17);
        printf("___|___|___");
        gotoxy(40,18);
        printf("   |   |   ");
        gotoxy(40,19);
        printf(" %c | %c | %c ",square[7],square[8],square[9]);
        gotoxy(40,20);
        printf("   |   |   ");
  
          if(i==1)
          {
                player--;
                gotoxy(40,25);
                (player == 1)?color(12):color(3);
                printf("%s winner",(player==1)?p1:p2);
                color(14);
          }
         else
         {
                gotoxy(38,25);
                color(8);
                printf("game is draw");
         }
                gotoxy(0,30);
                color(3);
                printf("\nEnter any key to continue.......");
                getch();
                goto Z;
       }break;
       
case '2':{
              system("cls");
              load();
              system("cls");
              color(9);
              gotoxy(20,10);
              printf("HELP!!\n\n");
              color(14);
              gotoxy(20,12);
              printf("1.The game is played in 3x3 squares which consists of 1 to 9 numbers.");  
              gotoxy(20,14); 
              printf("2.If any person types the letters grater than 9 or the no is repeated warnings are shown.");
              gotoxy(20,16);
              printf("3.If warnings are more than 2 the opponent is the winnes.");
              gotoxy(0,34);
              color(7);
              printf("Enter any key to continue.......");
              getch();
              goto back;
        }break;
        
case '3':{
              system("cls");
    gotoxy(35,17);
    color(14);
    printf("Thank You");
    getch();
    color(7);
    gotoxy(0,32);
    exit(0);          
    }break;
       
default:{
            gotoxy(0,32);
            printf("Enter valid choice....");
            getch();
            goto back;
        }
     }
   }

    gotoxy(0,34);
    color(7);
   return 0;
 }

 void gotoxy(int x,int y){
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD a;
    a.X = x;
    a.Y = y;
    SetConsoleCursorPosition(h,a);
}

void load(){
    int r,delay;
    gotoxy(36,14);
    printf("Loading....");
    gotoxy(30,16);
    for(r=1;r<=20;r++){
            color(2);
            printf("%c",222);
        for(delay = 0;delay <= 10000000;delay++){}
    }
}

void color(int color){
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,color);
}

void print(){
    gotoxy(40,15);
    color(12);
    printf("Tic  ");
    color(8);
    printf("Tac  ");
    color(3);
    printf("Toe");
    gotoxy(40,17);
    color(14);
    printf("F o r e v e r");
    color(7);
    gotoxy(0,30);
    printf("Enter any key to continue.........");
    getch();
}

void printGame(){
    system("cls");
    gotoxy(40,10);
    color(12);
    printf("Tic  ");
    color(8);
    printf("Tac  ");
    color(3);
    printf("Toe");
    gotoxy(40,12);
    color(14);
    printf("F o r e v e r");

    color(7);   
    gotoxy(42,15);
    printf("1. START");

    gotoxy(42,17);
    printf("2. HELP");

    gotoxy(42,19);
    printf("3. Exit");

    gotoxy(0,30);
    printf("Enter Your Choice.........");
}