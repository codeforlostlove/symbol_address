#define _GNU_SOURCE
#include <dlfcn.h>
#include <stdio.h>
int main(int   argc,   char*   argv[])
{
printf("%p\n",dlsym(RTLD_NEXT, argv[1]));
return 0;
}
