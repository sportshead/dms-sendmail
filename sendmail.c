#include <stdio.h>
#include <stdlib.h>  
#include <unistd.h>

int main() {
  freopen("/var/log/sendmail", "a", stdout);
  freopen("/var/log/sendmail", "a", stderr);

  char *args[] = {"/usr/bin/docker", "exec", "-i", "mailserver", "sendmail", "-t", NULL};

  execve("/usr/bin/docker", args, NULL);
  
  perror("execve");
  return 1; 
}
