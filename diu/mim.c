#include <stdio.h>
int miraj=0, riva=0, mim=0, nasima=0;

void electionResult()
{
    int wonByVote;
    
    if (miraj > riva && miraj > mim && miraj >nasima)
    {
        printf("\n***Miraj won the election***\n\n");
        printf("Total vote of Miraj : %d\n\n",miraj);
        wonByVote=miraj-riva;
        printf("Miraj won by %d votes to Riva\n",wonByVote);
        wonByVote=miraj-mim;
        printf("Miraj won by %d votes to Mim\n",wonByVote);
        wonByVote=miraj-nasima;
        printf("Miraj won by %d votes to Nasima\n",wonByVote);
    }
    
    else if (riva > miraj && riva > mim && riva >nasima)
    {
        printf("\n***Riva won the election***\n\n");
        printf("Total vote of Riva : %d\n\n",riva);
        wonByVote=riva-miraj;
        printf("Riva won by %d votes to Miraj\n",wonByVote);
        wonByVote=riva-mim;
        printf("Riva won by %d votes to Mim\n",wonByVote);
        wonByVote=riva-nasima;
        printf("Riva won by %d votes to Nasima\n",wonByVote);
    }
    else if (mim > miraj && mim > riva && mim >nasima)
    {
        printf("\n***Mim won the election***\n\n");
        printf("Total vote of Mim : %d\n\n",mim);
        wonByVote=mim-miraj;
        printf("Mim won by %d votes to miraj\n",wonByVote);
        wonByVote=mim-riva;
        printf("Mim won by %d votes to riva\n",wonByVote);
        wonByVote=mim-nasima;
        printf("Mim won by %d votes to nasima\n",wonByVote);
    }
     else if (nasima > miraj && nasima > riva && nasima >mim)
    {
         printf("\n***Nasima won the election***\n\n");
        printf("Total vote of Nasima : %d\n\n",nasima);
        wonByVote=nasima-miraj;
        printf("Nasima won by %d votes to Miraj\n",wonByVote);
        wonByVote=nasima-riva;
        printf("Nasima won by %d votes to Riva\n",wonByVote);
        wonByVote=nasima-mim;
        printf("Nasima won by %d votes to Mim\n",wonByVote);
    }
    
    else
    {
        printf("\n\n***Election Draw***\n\n");

    }
  
}
void calculateVote(int vote)
{
    switch (vote)
    {
    case 1:
       miraj+=1;
        break;
    case 2:
        riva+=1;
        break;
    case 3:
       mim+=1;
        break;
    case 4:
        nasima+=1;
        break;
    }
}
void main()
{
    int choose;


        printf("\n********Welcome to the simple voting system project*********\n\n");
        printf("                         MP Election                        \n\n");
        printf("*************************************************************\n");
        printf("|           1. Miraj            |          2. Riva          |\n");
        printf("*************************************************************\n");
        printf("|           3. Mim              |          4. Nasima        |\n");
        printf("*************************************************************\n\n");
        printf("Candidates are : \n");
    	printf("\t1. Miraj\n\t2. Riva\n\t3. Mim\n\t4. Nasima\n\n\t5. Show Result");
    	printf("\n\nPress any digit to vote your candidate:(1 to 4) \n");
    	
    	
    do
    {
        printf("Vote for : ");
        scanf("%d", &choose);
        if (choose==5)
        {
            electionResult();
        }
		else
        {
            calculateVote(choose);
        }
        printf("\n");
    } while (choose != 5);
    
        printf("Miraj---Riva---Mim---Nasima\n");
        printf("%d       %d       %d       %d\n",miraj,riva,mim,nasima);
        printf("\nTotal Vote Count : %d",miraj+riva+mim+nasima);
}
