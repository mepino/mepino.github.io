#include <stdio.h>

void add(int x) { x = x+1; }

int main()

{

        int p = 8;

        add(p);

        printf("p=%d\n", p);

        return 0;

}