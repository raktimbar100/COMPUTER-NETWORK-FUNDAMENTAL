// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main(){
char str[100],s1[10]={'0'},s2[10]={'1'};
printf("Enter String: ");
gets(str);
int i=0,count=0;
while(str[i]!='\0')
{
    if(str[i]=='1')
    {
        ++count;
    }
    
    
    i++;
}
printf("\nNumber of 1's is/are: %d",count);
char ch;
printf("\nEnter your choice e for even parity o for odd parity: ");
scanf("%c",&ch);
switch(ch)
{
    case 'e':
       if(count%2==0)
       {
           strcat(str,s1);
       }
       else{
           strcat(str,s2);
       }
       break;
    case 'o':
        if(count%2==0)
       {
           strcat(str,s2);
       }
       else{
           strcat(str,s1);
       }
      break;
      
     default:
       printf("Wrong choice");
}
printf("%s",str);

}
