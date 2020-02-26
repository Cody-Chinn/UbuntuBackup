#include<stdio.h>
#include<unistd.h>
#include<limits.h>
#include<sys/types.h>
#include<pwd.h>

int main(){
    int number;
    char hostname[HOST_NAME_MAX + 1];
    char *name;
    gethostname(hostname, HOST_NAME_MAX + 1);
    struct passwd *pw;

    pw=getpwuid(getuid());
    name=pw->pw_name;

    printf("Please enter a number: ");
    scanf("%i", &number);

    printf("\nUser %s has logged into host %s and entered %i\n\n", name, hostname, number);

    return 0;
}
