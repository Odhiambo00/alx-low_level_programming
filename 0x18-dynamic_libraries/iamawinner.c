#include <stdio.h>
#include <stdlib.h>

void __attribute__((constructor)) init(void)
{
	system("echo \"d52e6c18e0723f5b025a75dea19ef365  gm\" > /tmp/gm.md5");
	system("echo \"#!/bin/bash\n\n./gm 9 8 10 24 75 9\n\" > /tmp/gm");
	system("chmod +x /tmp/gm");
}
