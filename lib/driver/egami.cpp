#include <lib/driver/egami.h>

#include <unistd.h>
#include <fcntl.h>
#include <string>
#include <lib/base/init.h>
#include <lib/base/init_num.h>


eEGAMI *eEGAMI::instance = 0;


eEGAMI::eEGAMI()
{
	ASSERT(!instance);
	instance = this;
	mychek = 0;
	
	fd = open("/proc/stb/info/vumodel", O_RDWR);
	if (fd == "vusolo2")
		mychek = 1;
        else
		mychek = 0;
		
}

eEGAMI *eEGAMI::getInstance()
{
	return instance;
}

void eEGAMI::checkkernel(int mychek)
{
	//return mychek;
}
