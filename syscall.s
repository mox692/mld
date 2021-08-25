.text
.global _syscall
.global write

// Call syscall. In current implementation, up to 4 args can be given.
// void _syscall(int sysno, args...)
_syscall:
    push %rbp
    mov %rsp, %rbp
    //
    // SYS_NOをraxにsetするためにレジスタをズラす
    // 
    mov %rdi, %rax
    mov %rsi, %rdi
    mov %rdx, %rsi
    mov %r10, %rdx
    syscall
    pop %rbp
    ret

// Write to the area fd points to.
// int write(int fd, const void *buf, int count);
write:
    push %rbp   
    mov %rsp, %rbp

    mov %rdx, %r10
    mov %rsi, %rdx
    mov %rdi, %rsi
    mov $1, %rdi

    //
    // _syscall(int SYS_num(%rdi), int fd(%rsi), const void *buf(%rdx), int count(%rsp))
    //
    call _syscall

    pop %rbp
    ret
