TARG=main
OBJS=main.o crt.o syscall.o
AS_FLGS=-fno-builtin
LD_FLGS=-nostdlib

$(TARG): $(OBJS)
	gcc -o $@ $(LD_FLGS) $^ 

%.o: %.c
	gcc -c $(AS_FLGS) $*.c

clean:
	rm *.o $(TARG)
