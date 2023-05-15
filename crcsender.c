#include<stdio.h>
#include<string.h>
int main(){

char data[100],div[100],data1[100];
printf("Enter dataword : ");
gets(data);
int len = strlen(data);
printf("Enter the divisor : ");
gets(div);
int dl=strlen(div);
int i;
for(i=0;i<dl-1;i++)
 data[len+i]='0';
 data[len+i]='\0';
 
 printf("updated codeward: ");
 printf("%s",data);
 int j;
 strcpy(data1,data);
 for(i=0;i<len;i++)
 {
 	if(data1[i]=='1')
 	{
 		for(j=0;j<dl;j++)
		 {
		 	if(data1[i+j]==div[j])
		 	{
		 		data1[i+j]='0';
			 }
			 else{
			 	data1[i+j]='1';
			 }
			 }	
	 }
 }
 printf("Codeword after appending final result is : \n");
 for(i=len;i<len+(dl-1);i++)
 {
 	data[i]=data1[i];
 }
 printf("\n%s",data);
}
