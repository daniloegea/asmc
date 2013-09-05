#include <stdio.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/sysctl.h>


int main() {

	int x, y, z;
	size_t size = sizeof(int);

	for(;;) {

		sysctlbyname("dev.asmc.0.sms.x", &x, &size, NULL, 0);
		sysctlbyname("dev.asmc.0.sms.y", &y, &size, NULL, 0);
		sysctlbyname("dev.asmc.0.sms.z", &z, &size, NULL, 0);

		printf("x:%3d y: %3d z: %3d\n", x, y, z);

		usleep(100000);

	}

}

