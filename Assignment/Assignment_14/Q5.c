// Movie Database: Create a program that uses structures to manage a movie 
//database with details like title, director, release year, and genre. Allow users 
//to add, search for, and update movie records.


#include<stdio.h>
int count;
typedef struct Movie{
	char tname[40];
	char dname[40];
	int day;
	int month;
	int year;
	char genre[30];
}Movie;

void displaylist(Movie*);
void addnewMovie(Movie*);
void removeMovie(Movie*);
void searchMovie(Movie*);
void main(){
	Movie m[200]={{"The Lord Of Rings","Peter Jackson",17,12,2003,"Fantacy,Adventure"},{"Inception","Christopher Nolan",16,7,2010,"Drama"},{"Pulp Fiction","Quentin Tarantino",14,10,1994,"Crime,Thriller"},{"Jawan","Atlee",7,7,2024,"Action Thriller"},{"Indian 2","S. Shankar",12,7,2024,"Action Thriller"}};
	count=5;
	int ch;
	do{
		printf("\n___________________________________________________________________________\n");
		ch=0;
		printf("Add Movie                                      :1 \n");
		printf("Remove Movie                                   :2 \n");
		printf("Search Movie                                   :3 \n");
		printf("See the List of Movies                         :4 \n");
		printf("Exit                                           :0 \n");
		printf("Enter Your Choise :");
		scanf("%d",&ch);
		printf("\n___________________________________________________________________________\n");
		switch(ch){
			case 0:
				if(ch==0){
					break;
				}
			case 1:
				if(ch==1){
				printf("\n\n Add Movies is List \n\n");
				addnewMovie(m);
				break;
				}
				
			case 2:
				if(ch==2){
					printf("\n\n Remove the movie \n\n");
					removeMovie(m);
					break;
				}
				
			case 3:
				if(ch==3){
					printf("Search A Movie\n");
					searchMovie(m);
					break;
				}
				
			case 4:
				if(ch==4){
					printf("See the list of movies.\n");
					displaylist(m);
					break;
				}
				
				
			default:
				printf("Enter a Valid Choise \n");
		}
	}while(ch!=0);
	printf("\n \t Thank You.... ");
}



void displaylist(Movie* m){
	int i;
	for(i=0;i<count;i++){
		
		printf("Name of Movie   :%s \n",m[i].tname);
		printf("Director Name   :%s \n",m[i].dname);
		printf("Release Date    :%d-%d-%d \n",m[i].day,m[i].month,m[i].year);
		printf("Genre           :%s \n",m[i].genre);
		
		printf("\n-----------------------------------------------\n");
	}
}


void addnewMovie(Movie* m){
	
	int i=count,j,k;
	printf("\n How many Movie you add now :");
	scanf("%d",&j);
	count=count+j;
	
	
	for(;i<count;i++){
		
			
			printf("Enter the Movie title :");
			fflush(stdin);
			fgets(m[i].tname,40,stdin);
		
			printf("Enter the Director Name :");
			fflush(stdin);
			fgets(m[i].dname,40,stdin);
				
			printf("Enter the Relear day of Movie:");
			scanf("%d",&m[i].day);
			printf("Enter the Relear Month of Movie:");
			scanf("%d",&m[i].month);
			printf("Enter the Relear Year of Movie :");
			scanf("%d",&m[i].year);	
			
		}		
		printf("\n Add Players Successfully.....\n");
		
}

void removeMovie(Movie* m){
	char nm[40];
	int i,flag=0;
	if(count==0){
		printf(" No any Movie Prasent in List to remove...");
		return;
	}
	else{
		printf("Enter the Movie Name :");
		scanf("%s",nm);
		for(i=0;i<count;i++){
			if((strcmp(m[i].tname,nm)==0)){
				flag=1;
			}
			m[i]=m[i+flag];
		}
	count--;
	}
}
void searchMovie(Movie* m){
	printf("________________________________________________________\n\n");
	int i;
	char nm[40];
	printf("\n Enter the Movie Name :");
	scanf("%s",nm);
	for(i=0;i<count;i++){
		if(strcmp((m[i].tname,nm))==0){
			printf("Name of Movie   :%s \n",m[i].tname);
			printf("Director Name   :%s \n",m[i].dname);
			printf("Release Date    :%d-%d-%d \n",m[i].day,m[i].month,m[i].year);
			printf("Genre           :%s \n",m[i].genre);
		
			printf("\n-----------------------------------------------\n");	
		}
	}
}
