#include <unistd.h>
#include <stdlib.h>

int main()
{
    int i;
    // make app deterministic
    srand(0);
    for (i = 0; i < 10000; ++i) {
        malloc(rand() % 1000);
        usleep(100);
    }
    return 0;
}