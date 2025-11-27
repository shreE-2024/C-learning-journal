#include<stdio.h>
#include<string.h>

void mystrcpy(char*,char*);
int mystrlen(char*);	
int mystrcmp(char*,char*);	
void mystrcat(char*,char*);	
void mystrncpy(char*,char*,int);
char* mystrupr(char*);	
char* mystrlwr(char*);	
char* mystrrev(char*);	
char* mystrstr(char*,char*);
int mystrcasecmp(char*,char*);
char* mystrrchr(char*,char);
int mystrncmp(char*,char*,int);
char* mystrncat(char*,char*,int);
char* mystrpbrk(char*,char*);
char* mystrset(char*,char);
char* mystrnset(char*,char,int);
char* mymemset(char*,char,int);

void main(){
	
	char str1[]="Firstbit";
	char str2[]=" Solution";
	char str3[20];
	char str4[20];
	
	printf("strlen(str1) : %d \n",strlen(str1));
	printf("mystrlen(str1) : %d \n",mystrlen(str1));
	
	strcpy(str3,str1);
	printf("strcpy(str3,str1) : %s \n",str3);
	mystrcpy(str4,str1);
	printf("mystrcpy(str4,str1) : %s \n",str4);
	
	strcat(str3,str2);
	printf("strcat(str3,str2) : %s \n",str3);
	mystrcat(str4,str2);
	printf("strcat(str4,str2) : %s \n",str4);
	
	
	printf("strncat(str1,str2,9) : %s \n",strncat(str1,str2,9));
	printf("mystrncat(str1,str2,9) : %s\n",mystrncat(str1,str2,9));

	
	if(strcmp(str3,str4)==0){
		printf("strcmp(str3,str4) : both string are equal \n");
	}else{
		printf("strcmp(str3,str4) : both string are not equal \n");
	}
	
	
	if(mystrcmp(str3,str4)==0){
		printf("strcmp(str3,str4) : both string are equal \n");
	}else{
		printf("strcmp(str3,str4) : both string are not equal \n");
	}
	
	
	if(strncmp(str1,str3,11)==0){
		printf("strncmp(str1,str3,11) : both string are equal \n");
	}else{
		printf("strncmp(str1,str3,11) : both string are not equal \n");
	}
	if(mystrncmp(str1,str3,11)==0){
		printf("strncmp(str1,str3,11) : both string are equal \n");
	}else{
		printf("strncmp(str1,str3,11) : both string are not equal \n");
	}
	
	
	printf("strchr(str1,'b') : %s \n",strchr(str1,'b'));
	//printf("mystrchr(str1,'b') : %s \n",mystrchr(str1,'b'));
	
	printf("strstr(str3,'bit') : %s \n",strstr(str3,"bit"));
	printf("mystrstr(str3,'bit') : %s \n",mystrstr(str3,"bit"));
	
		
	
	char str5[]="Firstbit,Solution,Java Batch";
	printf("strtok(str4,',') : %s \n",strtok(str4,","));
	
	
	char str6[]="Firstbit";
	char str7[]="lastbit";
	strncpy(str6,str7,3);
	printf("strncpy(str6,str7,3) : %s \n",str6);	
	
	char str8[]="Firstbit";
	char str9[]="lastbit";
	mystrncpy(str8,str9,3);
	printf("mystrncpy(str8,str9,3) : %s \n",str8);	
	
	printf("strpbrk(str1,'rt') : %s \n",strpbrk(str1,"rt"));
	printf("mystrpbrk(str1,'rt') : %s \n",mystrpbrk(str1,"rt"));
	
	
	printf("%s \n",str1);
	printf("strrchr(str1,'i') : %s \n",strrchr(str1,'u'));
	printf("mystrrchr(str1,'i') : %s \n",mystrrchr(str1,'u'));	
	
	printf("%s \n",str1);
	printf("strrev(str1,'i') : %s \n",strrev(str1));
	printf("mystrrev(str1,'i') : %s \n",mystrrev(str1));
	
	
	printf("strset(str3,  'x') : %s \n",strset(str3,'x'));
	printf("mystrset(str4,'x') : %s \n",mystrset(str4,'x'));
	
	
	printf("strset(str1,'x') :   %s \n",strnset(str1,'x',3));	
	printf("mystrset(str2,'x') : %s \n",mystrnset(str2,'x',3));
	
	
	char str10[20];
	char str11[20];
	printf("memset(str10,'x',6) :   %s \n",memset(str10,'x',6));
	printf("mymemset(str10,'x',6) : %s \n",mymemset(str10,'x',6));
	
	
	//str7[]="Firstbit";
	printf("strupr(str7) :   %s \n",strupr(str7));
	
	printf("strlwr(str6) :   %s \n",strlwr(str6));
	
	printf("strupr(str6) :   %s \n",mystrupr(str6));
	
	printf("strlwr(str7) :   %s \n",mystrlwr(str7));
	
	if(strcasecmp(str6,str7)==0){
		printf("strcasecmp(str6,str7) : both string are equal \n");
	}else{
		printf("strcasecmp(str6,str7) : both string are not equal \n");
	}
	if(mystrcasecmp(str6,str7)==0){
		printf("mystrcasecmp(str6,str7) : both string are equal \n");
	}else{
		printf("mystrcasecmp(str6,str7) : both string are not equal \n");
	}
	
	if(strncasecmp(str6,str7,3)==0){
		printf("strncasecmp(str1,str3,11) : both string are equal \n");
	}else{
		printf("strncasecmp(str1,str3,11) : both string are not equal \n");
	}
	if(mystrncasecmp(str6,str7,3)==0){
		printf("strncasecmp(str6,str7,3) : both string are equal \n");
	}else{
		printf("strncasecmp(str6,str7,3) : both string are not equal \n");
	}
	
	

}



int mystrlen(char* str1){
	
	int i=0,count=0;
	while(str1[i]!='\0'){
		count++;
		i++;	
	}
	return count;
}

void mystrcpy(char* str4,char* str1){
	int i=0;
	while(str1[i]!='\0'){
		str4[i]=str1[i];
		i++;	
	}
	str4[i]=str1[i];
	
}

void mystrcat(char* str4,char* str2){
	int i=0,j=0;
	while(str4[i]!='\0'){
		
		i++;	
	}
	while(str4[j]!='\0'){
		str4[i]=str2[j];
		i++;
		j++;	
	}	
}


char* mystrncat(char* str1,char* str2,int a){
	int i=0,j=0;
	while(str1[i]!='\0'){
		
		i++;	
	}
	while(a>0&&str2[j]!='\0'){
		
		str1[i]=str2[j];
		i++;
		j++;
		a--;	
	}	
	str1[i]=str2[j];
	return str1;
	
}




int mystrcmp(char* str3,char* str4){
	int i=0;
	
	while(str3[i]==str4[i]){
		if(str3[i]=='\0'&&str4[i]=='\0'){
			return 0;
		}
		i++;	
	}
	return 1;
}


int mystrncmp(char* str3,char* str4,int a){
	int i=0;
	
	while(a>0&&str3[i]==str4[i]){
		if(str3[i]=='\0'&&str4[i]=='\0'){
			return 0;
		}
		i++;	
	}
	return 1;
}

void mystrncpy(char* str8,char* str9,int a){
	
	int i=0;
	while(i<=a){
		
		str8[i]=str9[i];
		i++;
		
	}
}

char* mystrpbrk(char* str,char* a){
	int i=0;
	while(str[i]!='\0'){
		if(str[i]==a[0]){
			return &str[i];
				
			}
			
			i++;
			
		
	}
}

char* mystrrchr(char* str,char a){
	int i=0;
	while(str[i]!='\0'){
		i++;
				
		}
	do{
		if(str[i]==a){
			return &str[i];
			
		}
		i--;				
	}while(i>0);
}

char* mystrrev(char* str1){
	
	
	int i=0,j=0;
	while(str1[i]!='\0'){
		//printf("--> %c \n",str1[i]);	
		i++;		
		
	}
	
	char str[i];
	for(i=0;str1[i]!='\0';i++){
		str[i]=str1[i];
	}
	//str[i]=str1[i];
	i--;
	
	do{
		//printf(" %c = %c  <--\n",str1[j],str[i]);
		str1[j]=str[i];
		j++;
		i--;				
	}while(i>=0);
	return str1;
}

char* mystrset(char* str,char a){
	
	int i=0;
	while(str[i]!='\0'){
		str[i]=a;
		i++;		
		
	}
	return str;
}

char* mystrnset(char* str,char a,int x){
	
	
	int i=0;
	while(x>0&&str[i]!='\0'){
		str[i]=a;
		i++;
		x--;		
		
	}
	return str;

}


char* mymemset(char* str,char a,int x){
	
	
	int i=0;
	while(x>0){
		str[i]=a;
		i++;
		x--;		
		
	}
	return str;

}


int mystrcasecmp(char* str6,char* str7){
	int i=0;
	
	while(str6[i]==str7[i]){
		if(str6[i]=='\0'&&str7[i]=='\0'){
			return 0;
		}
		i++;	
	}
	return 1;
}

int mystrncasecmp(char* str6,char* str7,int a){
	int i=0;
	
	while(a>0&&str6[i]==str7[i]){
		if(str6[i]=='\0'&&str7[i]=='\0'){
			return 0;
		}
		i++;	
	}
	return 1;
}


char* mystrstr(char* str3,char* str){
		int i=0,j=0,check;
		for(i=0;str3[i]!='\0';i++){
			
			if(str[0]==str3[i]){
				check=0;
				for(j=1;str[j]==str3[i+j];j++){
					}
				if(str[j]=='\0'){
						check=1;
					}
				if(check==1){
				
					return &str3[i];
					
				}
			}
	}
	
	return NULL;
	
}

char* mystrupr(char* str6){
	
	int i;
	for(i=0;str6[i]!='\0';i++){
		str6[i]=str6[i]-32;
	}
	return str6;
}

char* mystrlwr(char* str7){
	{
	
	int i;
	for(i=0;str7[i]!='\0';i++){
		str7[i]=str7[i]+32;
		
	}
	return str7;
}

}
