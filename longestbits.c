#include <stdio.h>
#include <stdlib.h>


int main()
{
    unsigned int a=1775;

    int max_len = 0, flip=0, curr_len=0, i=1;
    while(a) {
        if(a & 0x1) {
            curr_len++;
        } else {
            if(flip) {
                max_len = (curr_len > max_len) ? curr_len : max_len;
                curr_len -= flip + 1; 
            } else {
                curr_len++;
            }
            flip = i;
        }
        a >>= 1;
        i++;
    }

    printf("%d\n", max_len);
}
