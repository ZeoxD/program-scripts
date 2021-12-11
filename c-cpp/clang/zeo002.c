#include <stdio.h>
char chtoi(char str[]);

int main()
{

char ch[4];
int morph_num;

printf("Enter the String: \n");
fgets(ch,4,stdin); 

morph_num = chtoi(ch);
printf("char to int: %d \n", morph_num);

printf("When divided by three \n");
morph_num /= 3 ;
printf(" %d \n", morph_num);

}

//function convert ascii to int

char chtoi(char str[])
{

int a,b,c,num;

a = str[0];
b = str[1];
c = str[2];
a = a - 48;
b = b - 48;
c = c - 48;
num = (a*100) + (b*10) + c;
printf("%d %d %d", a, b, c);
return (num);
}