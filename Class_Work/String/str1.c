#include<stdio.h>
#include<string.h>


void main(){
	char str1[]="Firstbit";
	char str2[]=" Solution";
	char str3[20];
	char str9[20];

	//printf("%s \n",str1);
	
	printf("strlen(str1) : %d \n",strlen(str1));
	
	strcpy(str3,str1);
	printf("strcpy(str3,str1) : %s \n",str3);
	
	
	
	strcat(str3,str2);
	printf("strcat(str3,str2) : %s \n",str3);
	
	if(strcmp(str1,str2)==0){
		printf("strcmp(str1,str2) : both string are equal \n");
	}else{
		printf("strcmp(str1,str2) : both string are not equal \n");
	}
	

	printf("strchr(str1,'F') : %s \n",strchr(str1,'F'));

	printf("strstr(str3,'bit') : %s \n",strstr(str3,"bit"));

	char str4[]="Firstbit,Solution,Java Batch";
	printf("strtok(str4,',') : %s \n",strtok(str4,","));
	
	strncpy(str2,str1,3);
	printf("strncpy(str2,str1,3) : %s \n",str3);

	printf("%s \n",strncat(str3,str2,9));
	
	if(strncmp(str1,str2,3)==0){
		printf("both string are equal \n");
	}else{
		printf("both string are not equal \n");
	}
	
	char* str5=strdup(str1);
	printf("strdup(str1) : %s \n",str5);
	
//	char* str6=strndup(str2,3);
//	printf("%s \n",str6);

	printf("strerror(2) : %s \n",strerror(2));
	
	printf("strpbrk(str1,'st') : %s \n",strpbrk(str1,"st"));

	printf("strrchr(str1,'i') : %s \n",strrchr(str1,'i'));	
	
	printf("strrev(str1,'i') : %s \n",strrev(str1));
	
	printf("strset(str1,'x') : %s \n",strset(str1,'x'));
	
	printf("strset(str1,'x') : %s \n",strnset(str3,'x',3));	

	printf("strset(str1,'x') :   %s \n",strnset(str1,'x',3));	
	
	char str10[20];
	printf("memset(str10,'x',3) :   %s \n",memset(str10,'x',3));
	
	char str7[]="Firstbit";
	printf("strupr(str7) :   %s \n",strupr(str7));
	
	printf("strlwr(str7) :   %s \n",strlwr(str7));
	
	printf("strrev(str7) :   %s \n",strrev(str7));
}


