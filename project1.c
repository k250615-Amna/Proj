	/* edit delete create set of flashcards of different subjects 
	shuffling sets of arrays so u get diff questions each time
	user gets to choose difficulty level
	review questions answered incorectly
	user promptes to enter goal time 
	streak count of how many answers answered correctly in a row
	saving notes on question that the user will be allowed to view later */
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	#include <time.h>
	#include <ctype.h>
	
main(){
		int num,i,subjectNo;
		char choice;
		struct FlashCards{
			char question[500];
			char answer[100];
			int difficultyLevel;
		};
		struct FlashCards Maths[100];
		struct FlashCards Science[100];
		struct FlashCards General[100];
		printf("Do you want to store flashcards ? y/n ");
		scanf("%c", &choice);
		if(choice=='y'){
			printf("Enter the number of questions you want to input right now: ");
		    scanf("%d",&num);
		    printf("What subject of flashcards do you want to access:\n ");
		    printf("(1:Maths, 2:Science, 3:GeneralKnowledge)\n");
		    scanf("%d", &subjectNo);
		
		    switch(subjectNo){
			   case 1:
			    	for(i=0;i<num;i++){
			        printf("Enter your question: ");
			        scanf(" %[^\n]" , Maths[i].question);
			        printf("Enter the answer to the question: ");
			        scanf(" %[^\n]" ,  Maths[i].answer);
			        printf("Enter the difficulty level of this question: ");
			        scanf(" %d", &Maths[i].difficultyLevel);
		            }
		            break;
		       case 2:
		        	for(i=0;i<num;i++){
		    	   	printf("Enetr your question: ");
		    		scanf(" %[^\n]", Science[i].question);
		    		printf("Enter the answer to the question: ");
		    		scanf(" %[^\n]", Science[i].answer);
		    		printf("Enter the difficulty level of this question: ");
		    		scanf("%d", &Science[i].difficultyLevel);
				    }
				    break;
			   case 3:
			    	printf("\t\tGeneral Knowledge\n");
				    printf("\n");
				    for(i=0;i<num;i++){
		    		printf("Enter your question: ");
		    		scanf(" %[^\n]", General[i].question);
		    		printf("Enter the answer to the question: ");
		    		scanf(" %[^\n]", General[i].answer);
		    		printf("Enter the difficulty level of this question: ");
		    		scanf("%d", &General[i].difficultyLevel);
				  }
		    }
			
		}
		
		
	
}

