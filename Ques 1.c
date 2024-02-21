C Program Codes for 21Feb 2024
//QUES 1-Code to input a string and check if it is palindrome or not
#include<stdio.h>
#include<string.h>
int pal(char);
int main()
{
char str[10];
printf("Enter a string\m");
fgets(str,10,stdin);
if(pal(str)){
printf("The String is Palindrome\n");
else
{
printf("The String is not Palindrome\n");
}
return 0;
}
int pal(char str[])
{
int i=0,j;
j=strlen(str)-1;
while(i<j){
if(str[i]!=str[j])
{
return 0;
}
i++;
j--;
}
return 1;
}
