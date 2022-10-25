#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>

void display();
void create(char*);
void play(char*);
int win(char*);
void rule();
void menu();
int main()
{
int choice;
printf(" \n\n                                  WELCOME TO TIC TAC TOE \n");
printf("                           *--------------------------------*\n\n ");
display();
menu();


}
void menu(){
while(1){
system("cls");
printf("\n\n                                1.Play");
printf("\n\n                                2.Rule");
printf("\n\n                                3.Exit");
printf("\n\n                        Enter Your Choice:");
int ch;
scanf("%d",&ch);
char board[]={'1','2','3','4','5','6','7','8','9'};
switch(ch){
case 1: create(board);
        play(board);
        break;
case 2:rule();
        break;
case 3:exit(0);
default:printf("\n      Wrong Choice\n");
        }
}
}
void display()
{ char key;
printf("\n");
printf("                                ");
printf("   |   |   \n");
printf("                                ");
printf("------------\n");
printf("                                ");
printf("   |   |    \n");
printf("                                ");
printf("------------\n");
printf("                                ");
printf("   |   |   \n");
printf("\n\n                             Press Enter Key To Begin  ");
scanf("%c",&key);
system("cls");

}
void create(char *board)
{
printf("\n\n");
printf("                                ");
printf(" %c | %c | %c \n",board[0],board[1],board[2]);
printf("                                ");
printf("-----------\n");
printf("                                ");
printf(" %c | %c | %c \n",board[3],board[4],board[5]);
printf("                                ");
printf("-----------\n");
printf("                                ");
printf(" %c | %c | %c \n",board[6],board[7],board[8]);
}
void play(char *board)
{int i=1,choice,check;

while(i<10)
{
if(i%2==1)
{system("cls");
create(board);
printf("(x) turn:");
scanf("%d",&choice);
if(board[choice-1]=='x' || board[choice-1]=='0'){
    printf("\n                              Invalid Move");
    getch();
    continue;
}
board[choice-1]='x';
create(board);
check=win(board);
if(check==1)
{
    printf("\n\n");
    printf("                                ");
    printf("(x) has won the game\n");
    getch();
    break;

}
}
else
{system("cls");

create(board);
printf("(0) turn:");
scanf("%d",&choice);
if(board[choice-1]=='x' || board[choice-1]=='0'){
    printf("\n                              Invalid Move");
    getch();
    continue;
}
board[choice-1]='0';
create(board);
check=win(board);
if(check==1)
{
    printf("\n\n");
    printf("                                ");
    printf("(0) has won the game\n");
    getch();
    break;

}
}
++i;
}

if(check==0)
{
   printf("\n\n");
   printf("                                ");
   printf("Match tie\n");
   getch();
}
}
int win(char *board)
{
    if(board[0]==board[1] && board[0]==board[2])
        return 1;
    else if(board[3]==board[4] && board[3]==board[5])
        return 1;
    else if(board[6]==board[7] && board[6]==board[8])
        return 1;
    else if(board[0]==board[3] && board[0]==board[6])
        return 1;
    else if(board[1]==board[4] && board[1]==board[7])
        return 1;
    else if(board[2]==board[5] && board[2]==board[8])
        return 1;
     else if(board[0]==board[4] && board[0]==board[8])
        return 1;
     else if(board[2]==board[4] && board[2]==board[6])
        return 1;
     else
         return 0;
}
void rule(){
system("cls");
printf("\n\n");
printf("1. The game is Palyed on a grid that's 3 square by 3 square.\n2. Two players are required for the game.");
printf("\n3.  If FIrst player is X , the otherone is 0.\n4. Players take turn putting their symbols in empty squares.");
printf("\n5.  Any player cannot put symbol in already filled square.\n6. If any player get 3 of the symbols in a row ( up, down, across, or diagonally), is the winner.");
printf("\n7.  When all the 9 squaresget filled, game is over.\n8. If no player has 3 symbols in a sequence mentioned above, the game in a tie.");
printf("\n\n            1.Main Menu                         2.Exit\n");
int choice;
printf("\n\n                         Enter Your Choice:");
scanf("%d",&choice);
if(choice==1){
   menu();
}
else{
    exit(0);
}
}
