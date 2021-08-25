
#define SYS_exit 60

int _syscall();
extern int main();

static void _exit(int status) {
    _syscall(SYS_exit, status);
}

void exit(int status) {
    _exit(status);
}

void _start() {
    exit(main());
}
