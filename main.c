#include <kernel.h>

int main(int argc, char *argv[])
{
    (void)argc;
    (void)argv;

    while (1) {
        SleepThread();
    }

    return 0;
}
