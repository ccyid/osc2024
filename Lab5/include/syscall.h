#ifndef __SYSCALL_H__
#define __SYSCALL_H__

#include "thread.h"
#include "exception.h"
#include <stddef.h>

int sys_getpid();
size_t sys_uartread(char buf[], size_t size);
size_t sys_uartwrite(char buf[], size_t size);
int sys_exec(const char *name, char *const argv[]);
int sys_fork(trapframe *tf);
void sys_exit();
int sys_mbox_call(unsigned char ch, unsigned int *mbox);
void sys_kill(int pid);

/* Wrapper of system call */
int getpid();
int fork();
void exit();

/* For test */
void jump_to_el0();
void fork_test();
void sys_fork_test();

#endif