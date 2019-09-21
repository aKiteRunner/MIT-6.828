// hello, world
#include <inc/lib.h>

void
umain(int argc, char **argv)
{
	cprintf("hello, world\n");
	cprintf("%0.2f", 0.1);
	cprintf("i am environment %08x\n", thisenv->env_id);
}
