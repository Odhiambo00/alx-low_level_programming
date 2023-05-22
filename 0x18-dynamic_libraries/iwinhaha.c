#include <unistd.h>
#include <string.h>

int rand()
{
	static int iw = -1;

	iw++;

	if (iw == 0)
		return (8);
	if (iw == 1)
		return (8);
	if (iw == 2)
		return (7);
	if (iw == 3)
		return (9);
	if (iw == 4)
		return (23);
	if (iw == 5)
		return (74);
	return iw * iw % 30000;
}
