#include "Validation.h"

bool ErrorCheck(VkResult res)
{
	if (res != VK_SUCCESS) {
		std::cout << "ERROR" << std::endl;
		assert(0 && "There Has an Error!");
	}
	return false;
}
