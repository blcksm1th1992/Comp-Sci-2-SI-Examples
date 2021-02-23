#include <stdio.h> 
#include <stdlib.h>
#include <sys/utsname.h> // Header for system information
#include <time.h>

/*struct tm* CurrentTime()
{
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  return timeinfo;
} */

void reportGen(FILE* fp)
{
    struct utsname uname_pointer;
    uname(&uname_pointer);

    fprintf( fp, "_______________________\n %s\n\tSystem Name: %s \n", uname_pointer.sysname);
    fprintf( fp, "\tDomain Name: %s \n ______________________\n", uname_pointer.__domainname);
}

int main() 
{
    FILE * fp = fopen("sysReport.txt", "a");

    reportGen(fp);   

    return 0;
}