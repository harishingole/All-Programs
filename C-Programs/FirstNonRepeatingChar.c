#include<stdio.h>
#include<string.h>
char returnFirstNonRepeatedChar( char * str )
{
    int i, j, repeated = 0;
    int len = strlen(str);

    for( i = 0; i < len; i++ )
    {
        repeated = 0;
        for( j = 0; j < len; j++ )
        {
            if( i != j && str[i] == str[j] ) {
                repeated = 1;
                break;
            }
        }         

        if( repeated == 0 ) {  // Found the first non-repeated character
            return str[i];
        }
    }

    return str[i];
}
int main()
{
	char str[] ="abcdefghiabcdghi";
	char result = returnFirstNonRepeatedChar(str);
	printf("%c is non repeating character\n",result);
	
}
