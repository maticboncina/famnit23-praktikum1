#include <stdio.h>

int main()
{
    // Data Type 	    Size 	                            Range
    //
    // short 	        2 bytes 	                        -32,768 -> 32,767
    // int 	            2 or 4 bytes 	                    -32,768 -> 32,767 || -2,147,483,648 -> 2,147,483,647
    // unsigned int 	2 or 4 bytes 	                    0 -> 65,535 || 0 -> 4,294,967,295
    // long 	        8 bytes or (4bytes for 32 bit OS) 	-9,223,372,036,854,775,808 -> 9,223,372,036,854,775,807
    // unsigned long 	8 bytes 	                        0 -> 18,446,744,073,709,551,615
    // char 	        1 byte 	                            -128 -> 127

    int my_integer;
    printf("Integer %i\n", my_integer);

    long my_long = 1234567;
    printf("Long %li\n", my_long);

    float my_float = 3.5f;
    printf("Float %f\n", my_float);

    double my_double = 23.9999;
    printf("Double %lf\n", my_double);

    char my_char = 'a';
    printf("Character %c\n", my_char);
    printf("Character %d\n", my_char);

    my_char = 'A';
    printf("Character %c\n", my_char);
    printf("Character %d\n", my_char);

    my_char = my_char + 32;
    printf("Character %c\n", my_char);

    char my_char_number = 100;
}