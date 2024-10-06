#include <fcntl.h>
#include <stdio.h>
#include <poll.h>
#include <errno.h>

void printValue(char* constName, const long constValue) {
  printf("%s, decimal=%ld, unsigned long hex=0x%08lx, unsigned int hex=0x%08x\n",
    constName, constValue, constValue, (int)constValue);
}

int main(int argc, char *argv[]) {
  printValue("O_WRONLY", O_WRONLY); // fcntl.h
  printValue("O_RDWR", O_RDWR); // fcntl.h
  printValue("POLLIN", POLLIN); // poll.h
  printValue("EAGAIN", EAGAIN); // errno.h
  printValue("EINTR", EINTR); // errno.h
  printValue("O_NOCTTY", O_NOCTTY); // fcntl.h
  return 0;
}
