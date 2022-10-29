#include <stdio.h>
#include <string.h>


size_t ft_strlcat(char *dest, const char *src, size_t size){
	
}

int main()
{
    char first[] = "This is ";
    const char last[] = "a potentially long string";
    size_t r;
    size_t size = 16;
    char buffer[size];

    strcpy(buffer,first);
    r = strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %ld\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}