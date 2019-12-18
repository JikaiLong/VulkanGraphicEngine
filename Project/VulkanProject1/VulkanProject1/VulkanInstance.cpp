#include "VulkanInstance.h"

VulkanInstance::VulkanInstance(VulkanConfiguration& vulkanconfig)
{
	VkApplicationInfo application_info = Initilizers::ApplicationInfo(vulkanconfig);
	VkInstanceCreateInfo instance_info = Initilizers::InstanceCreateInfo(application_info, layers, extensions);
	ErrorCheck(vkCreateInstance(&instance_info, NULL, &instance));
}

VulkanInstance::~VulkanInstance()
{
	vkDestroyInstance(instance, NULL);
}

VkInstance& VulkanInstance::GetInstance()
{
	return instance;
}
