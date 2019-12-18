#include "BUILD_ORDER.h"

VulkanInstance *instance;

int main()
{
	VulkanConfiguration vulkanconfig;
	vulkanconfig.application_name = "My_Vulkan_App";
	vulkanconfig.application_version = VK_MAKE_VERSION(1, 0, 0);

	instance = new VulkanInstance(vulkanconfig);


	delete instance;

	return 0;
}