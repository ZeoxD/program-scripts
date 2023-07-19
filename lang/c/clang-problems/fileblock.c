#include <stdio.h>
#include <string.h>
#define SIZE 100 

int main( )
{
    FILE *filePointer ;
    char data[SIZE];
    for (int i = 0; i < 30; i++)
    {
        scanf("%c", &data);    
    }    
    filePointer = fopen("archive.dat", "wb") ;  
    if ( strlen (  data  ) > 0 )
    {
        fputc( (long long)data, filePointer) ;
    }
    fclose(filePointer) ;

    filePointer = fopen("archive.dat", "rb") ;
    while( fgetc(filePointer ) != EOF )
    {
        printf("%c",data) ;
    }
    fclose(filePointer) ;

    return 0;        
}