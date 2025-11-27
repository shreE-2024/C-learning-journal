//Write a program to create an array for 10 players. For each player store name, no. of 
//matches played, runs, wickets takes. 
//a. Create function to Accept the information of each player. 
//b. Create function to display the information of all the players 
//c. Display the information of player who made maximum runs and the one who took 
//maximum number of wickets.

#include<stdio.h>
int count;
typedef struct Player{
	char pname[40];
	int jnum;
	int match;
	int run;
	int wicket;
	
}Player;

void displaylist(Player*);
void addnewplayer(Player*);
void searchPlayerrun(Player*);
void searchPlayerwicket(Player*);

void main(){
	Player p[200]={{"virat_kohali",18,415,23564,4},{"Rohit_Sharma",45,384,22123,0},{"Steve_Smith",49,344,20346,27},{"Kane_Willianson",22,304,18455,10},{"AB_de_Villiers",17,283,20014,7}};
	count=5;
	int ch;
	do{
		printf("\n___________________________________________________________________________\n");
		ch=0;
		printf("See Prasent Player information                 :1\n");
		printf("Add New Player                                 :2 \n");
		printf("Search Player Who has highest runs             :3 \n");
		printf("Update Player data                             :4 \n");
		printf("Exit                                           :0 \n");
		printf("Enter Your Choise :");
		scanf("%d",&ch);
		printf("\n___________________________________________________________________________\n");
		switch(ch!=0){
			case 0:
				if(ch==0){
					break;
				}
			case 1:
				if(ch==1){
				printf("\n\n Prasent Player information \n\n");
				displaylist(p);
				break;
				}
				
			case 2:
				if(ch==2){
					printf("\n\n Add New Player \n\n");
					addnewplayer(p);
					break;
				}
				
			case 3:
				if(ch==3){
					printf("Search Player Who make highest runs.\n");
					searchPlayerrun(p);
					break;
				}
				
			case 4:
				if(ch==4){
					printf("Search Player Who take highest Wicket.\n");
					searchPlayerwicket(p);
					break;
				}
				
				
			default:
				printf("Enter a Valid Choise \n");
		}
	}while(ch!=0);
	printf("\n \t Thank You.... ");
}



void displaylist(Player* p){
	int i;
	for(i=0;i<count;i++){
		
		printf("Name of Player :%s",p[i].pname);
		printf("Jersey Number  :%d \n",p[i].jnum);
		printf("Match Played   :%d \n",p[i].match);
		printf("Runs           :%d \n",p[i].run);
		printf("Wickets        :%d \n",p[i].wicket);
		printf("\n-----------------------------------------------\n");
	}
}


void addnewplayer(Player* p){
	
	int i=count,j,k;
	printf("\n How many Player you Enterd now :");
	scanf("%d",&j);
	count=count+j;
	
	
	for(;i<count;i++){
		
			
			printf("Enter the PLayer Name :");
			fflush(stdin);
			fgets(p[i].pname,40,stdin);
		
			printf("Enter the PLayer Jersey Number :");
			scanf("%d",&p[i].jnum);	
			for(k=0;k<count-j;k++){	
					if((p[i].jnum==p[k].jnum)){
						printf("\n Use another jersey number,it is already have in dataset...");
						printf("\n Enter the PLayer Jersey Number :");
						scanf("%d",&p[i].jnum);	
			
					}
				}
				
			printf("Enter the Number of Matches he Played:");
			scanf("%d",&p[i].match);
			printf("Enter the Number Runs:");
			scanf("%d",&p[i].run);
			printf("Enter the Number Wicket he takes :");
			scanf("%d",&p[i].wicket);	
			
		
		}		
		printf("\n Add Players Successfully.....\n");
		
}
void searchPlayerrun(Player* p){
	printf("________________________________________________________\n\n");
	int i,jnum=p[0].run;
	for(i=0;i<count;i++){
		if(p[i].run>jnum){
			jnum=p[i].run;
		}
	}
	printf("\nHigest Run's Player\n");
	for(i=0;i<count;i++){
		if(p[i].run==jnum){
			printf("Name of Player :%s",p[i].pname);
			printf("Jersey Number  :%d \n",p[i].jnum);
			printf("Match Played   :%d \n",p[i].match);
			printf("Runs           :%d \n",p[i].run);
			printf("Wickets        :%d \n",p[i].wicket);
			printf("\n-----------------------------------------------\n");	
		}
	}
}
void searchPlayerwicket(Player* p){
	printf("_________________________________________________\n\n");
	int i,jnum=p[0].wicket;
	for(i=0;i<count;i++){
		if(p[i].wicket>jnum){
			jnum=p[i].wicket;
		}
	}
	printf("\nHigest Wicket's Player\n");
	for(i=0;i<count;i++){
		if(p[i].wicket==jnum){
			printf("Name of Player :%s",p[i].pname);
			printf("Jersey Number  :%d \n",p[i].jnum);
			printf("Match Played   :%d \n",p[i].match);
			printf("Runs           :%d \n",p[i].run);
			printf("Wickets        :%d \n",p[i].wicket);
			printf("\n-----------------------------------------------\n");	
		}
	}
}
