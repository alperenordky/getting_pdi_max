#include "pid_max.h"

int kesif()
{
	int fd;
	char *buf;

	buf = malloc(16);
	if(!buf)
		return(0);
	fd = open("/proc/sys/kernel/pid_max",O_RDONLY,0777);
	if(fd < 0)
		return(0);
	int byte_read = read(fd, buf, 15);
	buf[byte_read] = '\0';
	return(pi_atoi(buf));
}
int main()
{
  printf("sistemimzin maksimum process sayısı = %d" ,kesif());
}
