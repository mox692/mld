
//
// No libc, No start up(like crt.c).
//

int write(int, char*, int);
int main() {
    char *buf = "asb\n";
    write(1,buf, 6);
    return 0;
}
