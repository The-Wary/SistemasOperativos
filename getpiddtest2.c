// getppidtest.c

#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
    int ppid = getppid();
    printf(1, "El ID del proceso padre es: %d\n", ppid);
    exit();
}
