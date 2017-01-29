		/* # 1 :: ROCK
		   # 2 :: PAPER
		   # 3 :: SCISSORS
		   # 4 :: SPOCK
		   # 5 :: LIZARD  */

#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#include <windows.h>

time_t t;

// game1 if the game is played between two people //
int game1(){
  char pasword[1],ch;
  char pasword2[1],ch2;

  // choice of player 1 taken and * is displayed to hide the real number //
  printf("Enter the choice number of player1 from 1 to 5 as per folowing order 1.rock \n2.paper \n3.scissor \n4.spock \n5.lizard \n ");

  ch = getch();
  pasword[0] = ch;
  ch = '*' ;
  printf("%c\n",ch);

  // choice of player 2 taken and * is displayed to hide the real number //
  printf("Enter the choice number of player2 from 1 to 5 as per folowing order \n1.rock \n2.paper \n3.scissor \n4.spock \n5.lizard \n ");

  ch2 = getch();
  pasword2[0] = ch2;
  ch2 = '*' ;
  printf("%c\n",ch2);

  // After taking both choices the choices are displayed //
  printf("Player1 choice:%c\n",pasword[0]);
  printf("Player2 choice:%c\n",pasword2[0]);

  // decider is considered for the winner //
  int decider;
  decider= (10+(int)pasword[0]-(int)pasword2[0])%5;
	if(decider==0) return 1;    // 0 if same outputs //
	else if(decider%2==0) return 2;  // 2 or 4 if player 2 wins //
	else return 3;                   // 1 or 3 if player 1 wins //
   }

int game0(){
    int computer_choice;
    char pasword[1],ch;
  // choice of player 1 taken and  is displayed  //
	printf("Enter the choice number of player1 from 1 to 5 as per folowing order \n1.rock \n2.paper \n3.scissor \n4.spock \n5.lizard \n ");

	ch = getch();
    pasword[0] = ch;

	printf("Your choice:%c\n",ch);

	srand((unsigned) time(&t));
    computer_choice = rand() % 5 + 1;
// choice of computer is taken and is displayed//
	printf("Computer : %d\n",computer_choice);

	int decider;
	decider= (10+(int)pasword[0]-computer_choice-48)%5;
	if(decider==0) return 1;
	else if(decider%2==0) return 2;
	else return 3;

   }

void main()
{   int player1_score=0,player2_score=0,tie=0;
    char usrname[10];
    char usrname2[10];
    int enemy_choice;
    
	printf("Welcome to ROCK PAPER SCISSOR LIZARD SPOCK \n");

   // choice of opponent is taken //
	printf("Who do you want to play with? :: 0 for against Computer & 1 for against Human\n");
	scanf("%d",&enemy_choice);
	getchar();

    printf("Player1 \n ");
    printf("Enter User name: \n");
    gets(usrname);

	// if opponent is also human //
     if(enemy_choice==1)
           {
		      int result;
			  char quit;
		    printf("Player2 \n ");
		    printf("Enter User name:\n ");
		    gets(usrname2);
            while(1){
	                  result=game1();
			          if (result==1){
							                 printf("Its a DRAW\n");
									         tie++;
			                        }
			          else if (result==2) {
							                 printf("%s wins\n",usrname2);
											  player2_score++;
 										  }
			          else if (result==3) {
							                 printf("%s wins\n",usrname);
											 player1_score++;
 										  }
			          printf("do you want to continue? Y Or N\n");
		              quit=getchar();
		              if(quit=='N' || quit=='n') break;
		           }
           }
// if opponent is computer //
     if(enemy_choice==0)
          {
				 int result;
				 char quit;
		
                 while(1){
	                         result=game0();
							 if (result==1){
									              printf("Its a DRAW\n");
                                                  tie++;
							               }
					         else if (result==2) {
							                       printf("Computer wins");
										           player2_score++;
 										         }
			                 else if (result==3) {
							                       printf("%s wins\n",usrname);
										           player1_score++;
 										  }
						     printf("do you want to continue? Y Or N\n");
						     quit=getchar();
					         if(quit=='N' || quit=='n') break;
						 }
		  }
	// scorecard displayed //
   printf("Player1 score: %d, Player2 score: %d,\n",player1_score,player2_score);
   getch();
}
