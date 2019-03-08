/*
	
	organizacion-de-computadoras-y-lenguaje-ensamblador

*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>

char matrix[10][50];
 
void _strcpy(char *str1, char *str2)
{
	int i=0;
	
	while( *str2 != 0){
		*str1 = *str2;
		*str1++; *str2++;
	}
	*str1=0;	
}

int separeWords( char *word ){
	int i=0, j=0; 
	char token='-';
	
	while( *word !=0 ){
		while( *word != token && *word !=0 ){
			matrix[i][j] = *word;
			j++;
			*word++;
		}
		matrix[i][j] = '\x0'; 
		i++;
		j=0;
		*word++;	
	}
	return i;
}

char * invertWords( char matrix[10][50], int f )
{
	int i=0, j=0, m=0; 
	char token='-';
	char final[50];
	
	f--;
	
	while( f >= 0 )
	{
		
		while( matrix[f][i] != 0 )
		{
			printf(" %c ", matrix[f][i]);
			final[m] = matrix[f][i];
			m++;
			i++;
		}
		final[m]=token;
		m++;
		i=0;
		
		f--;
	}
	
	final[m]='\x0';
	return final;
}

int main(void){
	
	int i = separeWords("organizacion-de-computadoras-y-lenguaje-ensamblador");
	char *str; 
	
	invertWords( matrix , i );
	
	//printf(" %s ", str);
	return 0;
}
