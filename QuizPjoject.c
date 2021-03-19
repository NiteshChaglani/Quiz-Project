#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main()
 {
     int countr,r,count,i,n;
     int score;
     int wrong;
     char choice;
     char playername[20];
     
     mainhome:
     system("cls");
     printf("\t\t\t QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   TEST YOUR BRAIN!!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     
     printf("\n\t\t > press any key to quit");
     printf("\n\t\t________________________________________\n\n");
     printf("\n ------------------  Welcome  to C Program Quiz Game ------------------------");
        printf("\n\n Here are some tips you might wanna know before playing:");
        printf("\n -------------------------------------------------------------------------");
        printf("\n >> Your game starts with QUIZ GAME. In this round you will be asked a");
        printf("\n    total of 10 questions. ");
      
        printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
        printf("\n    right option.");
        printf("\n >> You will be asked questions continuously");
        printf("\n >> No negative marking for wrong answers!");
        printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
        
     choice = toupper(getch());
    
        if (choice=='Q')
        {
        	exit(1);
		}
	
	else if(choice=='S')
    {
        system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name:");
        gets(playername);
		
        
		home:
        countr=0;
        for(i=1;i<=10;i++)
        {
         system("cls");
         r= i;
	
     switch(r)
		{
            case 1:
                printf("\n\n1.Sequence of numbers are 1,11,21,1211,111221.?");
                printf("\n\nA.123112\t\tB.312223\n\nC.312211\t\tD.321112");
                printf("\n\nChoose any option A\tB\tC\tD\t");
                printf("\n\nPress ENTER ");
                if (toupper(getch())=='C')
				{
		
				countr++;
				getch();
                break;
            
            }
            else{
            	getch();
            	break;
			}
        

		case 2:
            printf("\n\n\n2.If A+B means A is the brother of B,A-B means A is the sister of B and A*B means A is the father of B.Which of the following means that C is the son of M?");
            printf("\n\nA.M*N-C+F\t\tB.M-N*C+F\n\nC.F-C+N*M\t\tD.N+M-F*C");
            printf("\n\nChoose any option A\tB\tC\tD\t");
                printf("\n\nPress ENTER ");
            if (toupper(getch())=='A')
			{
			    
				countr++;
			    getch();
			    break;
			}
			else{
				getch();
				break;
			}
           

        case 3:
            printf("\n\n3.How many times can you subtract 10 from 100? ");
            printf("\n\nA.9 times\t\tB.10 times\n\nC.1 time\t\tD.0 times");
            printf("\n\nChoose any option A\tB\tC\tD\t");
                printf("\n\nPress ENTER ");
            if (toupper(getch())=='C')
			{
			    	countr++;
			    getch();
			    break;
			    
            } else{
            	getch();
            	break;
			}
          

        case 4:
            printf("\n\n\n4.The least number of five digits which is completely divisible by 39,is.....");
            printf("\n\nA.10023\t\tB.10101\n\nC.10062\t\tD.10016");
            printf("\n\nChoose any option A\tB\tC\tD\t");
                printf("\n\nPress ENTER ");
            if (toupper(getch())=='A')
			{
			    countr++;
			    getch();
			    break;
            }else{
            	getch();
            	break;
			}
           

        case 5:
            printf("\n\n\n 5.A clock reads 4:30.If the minute hand points East,in what direction will the hour hand point?");
            printf("\n\nA.North\t\tB.North-East\n\nC.North-West\t\tD.East");
            printf("\n\nChoose any option A\tB\tC\tD\t");
                printf("\n\nPress ENTER ");
            if (toupper(getch())=='B')
			{
			    countr++;
				getch();
			    break;
            }else{
            	getch();
            	break;
			}
           

		case 6:
            printf("\n\n\n 6.Which element is found in Vitamin B12?");
            printf("\n\nA.Zinc\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron");
            printf("\n\nChoose any option A\tB\tC\tD\t");
                printf("\n\nPress ENTER ");
            if (toupper(getch())=='B' )
			{
			    countr++;
			    getch();
			    break;
            }
            else{
            	getch();
            	break;}
            

        case 7:
            printf("\n\n\n 7.If the number X78Y is divisible by 55 then value of X and Y are?");
            printf("\n\nA.1,0\t\tB.6,5\n\nC.9,5\t\tD.4,5");
            printf("\n\nChoose any option A\tB\tC\tD\t");
                printf("\n\nPress ENTER ");
            if (toupper(getch())=='D')
			{
			    
				countr++;
			    getch();
			    break;
            }
            else{
            	getch();
            	break;}
            

        case 8:
            printf("\n\n\n8.How many times a piece of paper can be folded at the most?");
            printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.Depends on the size of paper");
            printf("\n\nChoose any option A\tB\tC\tD\t");
                printf("\n\nPress ENTER ");
            if (toupper(getch())=='B')
			{
			    countr++;
			    getch();
                break;
			}
			else{
            	getch();
            	break;}
			

        case 9:
            printf("\n\n\n9.Each edge of a cube is increased by 50percent .What will be the percent increase in its volume?");
            printf("\n\nA.237.5\t\tB.50\n\nC.133.5\t\tD.150");
            printf("\n\nChoose any option A\tB\tC\tD\t");
                printf("\n\nPress ENTER ");
            if (toupper(getch())=='A')
			{
			    countr++;
                getch();
                break;
			}
			else{
            	getch();
            	break;}
			

        case 10:
            printf("\n\n\n10.Which is the longest River in the world?");
            printf("\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
            printf("\n\nChoose any option A\tB\tC\tD\t");
                printf("\n\nPress ENTER ");
            if (toupper(getch())=='A')
			{
			    countr++;
			    getch();
			    break;
			    goto score;
			    break;
            }
            else{
            	getch();
            	break;
            	goto score;
            	break;
			}    
    }
	}
	
	
         
	score:
    system("cls");
	score=countr;
	wrong=(10-countr);
	if(score>0 && score<10)
	{
         printf("\n\n\t\t**************** CONGRATULATION *****************");
         printf("\n%d ANSWERS ARE CORRECT",score );
         printf("\n%d ANSWERS ARE WRONG",wrong);
        
         
         printf("\n\n ANSWER KEY");
         printf("\n\n 1>C");
         printf("\n\n 2>A");
         printf("\n\n 3>C");
         printf("\n\n 4>A");
         printf("\n\n 5>B");
         printf("\n\n 6>B");
         printf("\n\n 7>D");
         printf("\n\n 8>B");
         printf("\n\n 9>A");
         printf("\n\n 10>A");
        goto go; 
    }

    else if(score==10)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOUR ALL ANSWERS ARE CORRECT!!!!!!!!!");
	    
	    printf("\t\t Thank You!!");
	   
	 printf("\n\n ANSWER KEY");
         printf("\n\n 1>C");
         printf("\n\n 2>A");
         printf("\n\n 3>C");
         printf("\n\n 4>A");
         printf("\n\n 5>B");
         printf("\n\n 6>B");
         printf("\n\n 7>D");
         printf("\n\n 8>B");
         printf("\n\n 9>A");
         printf("\n\n 10>A");
          goto go;
     }
     
	 else
    {
        printf("\n\n\t******** SORRY YOUR ALL ANSWERS ARE INCORRECT ********");
        printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");
	    
	      printf("\n\n ANSWER KEY");
         printf("\n\n 1>C");
         printf("\n\n 2>A");
         printf("\n\n 3>C");
         printf("\n\n 4>A");
         printf("\n\n 5>B");
         printf("\n\n 6>B");
         printf("\n\n 7>D");
         printf("\n\n 8>B");
         printf("\n\n 9>A");
         printf("\n\n 10>A");
          goto go;
    }

	go:
		
	puts(" \n\nPress Y if you want to play next game");
	puts(" \n\nPress any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto mainhome;
		
	else
		{
            goto mainhome;
		}
  }
}

