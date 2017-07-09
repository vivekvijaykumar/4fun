#include <stdio.h>


void urlify(char input[], unsigned int len)
{
    int index = 0, i = len-1;

    if(len == 0 || !input)
        return;

    while(input[i] == ' ')
        i--;
    
    index = i;
    for(i=(len-1); i>=0;) {
        if(input[index] != ' ') {
            input[i] = input[index];
        } else {
            input[index] = '%';
            input[index+1] = '2';
            input[index+2] = '0';
        }
        index--;
        i--;
    }
    printf("%s\n", input);
}


int main()
{
    char input[] =  "Mr John Smith    ";

    printf("%s.\n", input);
    urlify(input, sizeof(input)/sizeof(char));

    return 0;
}
