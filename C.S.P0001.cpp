#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
	char str[30]; 
	int i,length;
	char k;
do{
	printf("chuoi cua ban la: ");
	gets(str);
	length=strlen(str);
	for(i=strlen(str)-1;i>=0;i--){
		if(str[i]==' '){
			str[i]='\0';
			printf("%s ", &str[i]+1);
		}
	}
	printf("%s ", str);
	k = getch();
}
while( k !=27);
return 0;
}

