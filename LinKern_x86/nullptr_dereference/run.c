#include <unistd.h>

/* setuid script wrapper */ 

int main()
{
    char *argv[] = { "/challenge/app-systeme/ch2/._start_vm", NULL };
    execve(argv[0], argv, NULL);
    return 0;
}

