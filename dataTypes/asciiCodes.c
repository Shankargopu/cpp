// computer only understands numeric form as it will understands only 0 and 1 store it in 0 and 1 in memory.
// so characters associated with the ascii codes.

// one char size is 1 bytes = 8 bits. total (2^8=256 codes).

//ASCII provides a standardized way to represent characters, which is crucial for interoperability. By using a common encoding scheme, 
// computers and communication devices from different manufacturers and regions can reliably exchange text data.

#include <stdio.h>

int main(){
    int a='A', b='B';
    printf("%d %d", a, b); //65, 66 (ASCII CODES)
    return 0;
}