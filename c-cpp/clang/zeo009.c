#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{ 
    char value[50];
    int convert_value,convert_valueX = 0,convert_valueV = 0,i,j,k,l,m,count_strl = 0;
    int convert_given,convert_givenX = 0,convert_givenV = 0,count_given = 0;
    char new_value[3];
    
    puts("Enter the value you wanna calculate: ");
    fgets(value,sizeof(value),stdin);

    for(i=0; value[i]!='%'; i++)
    {
        new_value[i] = value[i];
    }
    new_value[i] = '\0';

    for (j = 0; new_value[j]!='\0' ; j++)
    {      
        convert_value = new_value[j];
        convert_valueV = (convert_value - 48);
        convert_valueX += convert_valueV * pow(10, 1-j);
    }

    for(k = 0; value[k]!='f'; k++)
    {
        count_strl++;
    }
    
    count_strl = count_strl + 2;

    for (m = count_strl; value[m] != '\0'; m++)
    {
        count_given++;
    }

    count_given--;

    for (l = count_strl; value[l] != '\0'; l++)
    {       
        if (count_given > 0)
        {      
            convert_given = value[l];
            convert_givenV = (convert_given - 48);
            convert_givenX += convert_givenV * pow(10, count_given);
            --count_given;
        }
        else
        {
            break;
        }
    
    }
    //fixing value of convert given
    convert_givenX /= 10;

    float calculated_value;
    calculated_value = (convert_valueX / 100.0) * convert_givenX;
    printf("\nValue of (%d / 100) * %d is: ", convert_valueX, convert_givenX);
    printf("%f\n",calculated_value);
}