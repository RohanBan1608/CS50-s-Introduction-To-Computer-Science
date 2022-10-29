#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef uint8_t BYTE;


int main(int argc, char *argv[])
{
    //check command line argument
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;

    }
    //open argument 1 file with fopen
    FILE *input = fopen(argv[1], "r");
    //if file cannot open, print error message
    if (input == NULL)
    {
        printf("Could not open file\n");
        return 1;
    }
    // array to write jpg bytes to
    BYTE buffer[512];
    //file counter
    int count = 0;
    //initialize pointer of output file
    FILE *output = NULL;
    //free up space for pointer of the name of file
    char *filename = malloc(8 * sizeof(char));
    //loop for reading the input file
    while (fread(buffer, sizeof(char), 512, input) != 0)
    {
        //checking if jpg file requirements are met
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            //prints filename using sprintf to filename variable
            sprintf(filename, "%03i.jpg", count);
            //open output file for writing to it
            output = fopen(filename, "w");
            count++;
        }
        //check if output is NULL or not
        if (output != NULL)
        {
            //write jpg bytes to the file
            fwrite(buffer, sizeof(char), 512, output);
        }

    }
    //frees memory used
    free(filename);
    fclose(input);
    fclose(output);

    return 0;

}