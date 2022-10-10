/*
 * Auth: Micah Crenwelge
 * Date: 10/09/22 (the due date of course, cause why would I give myself a reasonable amount of time like a normal person)
 * Course: CSCI-3550
 * Desc: Simple program that prints the hostname of the local machine. 
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define ARRAY_SIZE 80

char hostname[ARRAY_SIZE];

int main(void)
{
  if (gethostname(hostname, ARRAY_SIZE) == 0) {
    printf("Hostname: %s\n", hostname);
    exit(EXIT_SUCCESS);
  }
  else {
    printf("ERROR: gethostname()\n");
    exit(EXIT_FAILURE);
  }
}
