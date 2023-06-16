#include<stdio.h>
int mirajul=0,riva=0,mim=0,nasima=0;
void electionResult()
{
    int vote;
    if(mirajul>riva&&mirajul>mim&&mirajul>nasima)
    {
        printf("\n\n## Mirajul won the election##\n\n");
        printf("Total vote of Mirajul: %d\n",mirajul);
        vote=mirajul-riva;
        printf("Mirajul won by %d votes to Riva\n",vote);
        vote=mirajul-mim;
        printf("Mirajul won by %d votes to Mim\n",vote);
        vote=mirajul-nasima;
        printf("Mirajul won by %d votes to Nasima\n",vote);
    }
    else if(riva>mim&&riva&&nasima)
    {
        printf("\n\n## Riva won the election##\n\n");
        printf("Total vote of Riva: %d\n",riva);
        vote=riva-mirajul;
        printf("Riva won by %d votes to Mirajul\n",vote);
        vote=riva-mim;
        printf("Riva won by %d votes to Mim\n",vote);
        vote=riva-nasima;
        printf("Riva won by %d votes to Nasima\n",vote);
    }
    else if(mim>nasima)
    {
        printf("\n\n## Mim won the election##\n\n");
        printf("Total vote of Mim: %d\n",mim);
        vote=mim-mirajul;
        printf("Mim won by %d votes to Mirajul\n",vote);
        vote=mim-riva;
        printf("Mim won by %d votes to Riva\n",vote);
        vote=mim-nasima;
        printf("Mim won by %d votes to Nasima\n",vote);
    }
    else if(mirajul==riva&&mirajul==mim&&mirajul==nasima)
    {
        printf("\n\nNo one the election\n\n");
        printf("Total vote %d  %d  %d  %d\n",mirajul,riva,mim,nasima);
    }
    else
    {
        printf("\n\n## Nasima won the election##\n\n");
        printf("Total vote of Nasima: %d\n",nasima);
        vote=nasima-mirajul;
        printf("Nasima won by %d votes to Mirajul\n",vote);
        vote=nasima-riva;
        printf("Nasima won by %d votes to Riva\n",vote);
        vote=nasima-mim;
        printf("Nasima won by %d votes to Mim\n",vote);
    }
}
void calculateVote(int countVote)
{
    switch(countVote)
    {
    case 1:
        mirajul++;
        break;
    case 2:
        riva++;
        break;
    case 3:
        mim++;
        break;
    case 4:
        nasima++;
        break;
    }
}
void main()
{
    int choose;

    printf("\n          Welcome to the voting system project           \n\n");
    printf("                        MP Election                      \n\n");
    printf("********************\n");
    printf("|        1.Mirajul          |         2.Riva              |\n");
    printf("********************\n");
    printf("|        3.Mim              |         4.Nasima            |\n");
    printf("********************\n\n");

    do
    {
        printf("press 1 to vote Mirajul\n");
        printf("press 2 to vote Riva\n");
        printf("press 3 to vote Mim\n");
        printf("press 4 to vote Nasima\n");
        printf("press 5 to show election result\n");
        printf("please choose One :");
        scanf("%d",&choose);
        if(choose==5)
        {
            electionResult();
        }
        else
        {
            calculateVote(choose);
        }
        printf("\n");
    }
    while(choose !=5);
    printf("The total vote of election is = %d",mirajul+riva+mim+nasima);
    return 0;
}
