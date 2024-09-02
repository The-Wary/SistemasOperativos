#include "types.h"
#include "user.h"

int main(void) {
    int ppid = getppid(); // Llama a la nueva syscall
    printf("ID del proceso padre: %d\n", ppid);
    exit(0);
}
