#include <stdio.h>
#include <stdlib.h>


int hanoiPassos(int discos){
    if (discos == 1) return 1;
    return (2 * hanoiPassos(discos - 1) + 1);
    //  (2 ^ n – 1)
}

int main()
{
    printf("%d",hanoiPassos(7));
    return 0;
}
