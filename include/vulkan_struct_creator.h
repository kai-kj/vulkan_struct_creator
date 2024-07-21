#ifndef VULKAN_STRUCT_CREATOR_H
#define VULKAN_STRUCT_CREATOR_H

#include <vulkan/vk_platform.h>
#include <vulkan/vulkan.h>

#define VSC_GET_INSTANCE_PROC_ADDR(instance, name) ((PFN_##name)vkGetInstanceProcAddr(instance, #name))

VkApplicationInfo vscApplicationInfo(
    const char* pApplicationName,
    uint32_t applicationVersion,
    const char* pEngineName,
    uint32_t engineVersion,
    uint32_t apiVersion
);

VkDeviceQueueCreateInfo vscDeviceQueueCreateInfo(
    VkDeviceQueueCreateFlags flags,
    uint32_t queueFamilyIndex,
    uint32_t queueCount,
    const float* pQueuePriorities
);

VkDeviceCreateInfo vscDeviceCreateInfo(
    VkDeviceCreateFlags flags,
    uint32_t queueCreateInfoCount,
    const VkDeviceQueueCreateInfo* pQueueCreateInfos,
    uint32_t enabledLayerCount,
    const char* const* ppEnabledLayerNames,
    uint32_t enabledExtensionCount,
    const char* const* ppEnabledExtensionNames,
    const VkPhysicalDeviceFeatures* pEnabledFeatures
);

VkInstanceCreateInfo vscInstanceCreateInfo(
    VkInstanceCreateFlags flags,
    const VkApplicationInfo* pApplicationInfo,
    uint32_t enabledLayerCount,
    const char* const* ppEnabledLayerNames,
    uint32_t enabledExtensionCount,
    const char* const* ppEnabledExtensionNames
);

VkMemoryAllocateInfo vscMemoryAllocateInfo(
    VkDeviceSize allocationSize,
    uint32_t memoryTypeIndex
);

VkDescriptorBufferInfo vscDescriptorBufferInfo(
    VkBuffer buffer,
    VkDeviceSize offset,
    VkDeviceSize range
);

VkDescriptorImageInfo vscDescriptorImageInfo(
    VkSampler sampler,
    VkImageView imageView,
    VkImageLayout imageLayout
);

VkBufferCreateInfo vscBufferCreateInfo(
    VkBufferCreateFlags flags,
    VkDeviceSize size,
    VkBufferUsageFlags usage,
    VkSharingMode sharingMode,
    uint32_t queueFamilyIndexCount,
    const uint32_t* pQueueFamilyIndices
);

VkBufferViewCreateInfo vscBufferViewCreateInfo(
    VkBufferViewCreateFlags flags,
    VkBuffer buffer,
    VkFormat format,
    VkDeviceSize offset,
    VkDeviceSize range
);

VkImageCreateInfo vscImageCreateInfo(
    VkImageCreateFlags flags,
    VkImageType imageType,
    VkFormat format,
    VkExtent3D extent,
    uint32_t mipLevels,
    uint32_t arrayLayers,
    VkSampleCountFlagBits samples,
    VkImageTiling tiling,
    VkImageUsageFlags usage,
    VkSharingMode sharingMode,
    uint32_t queueFamilyIndexCount,
    const uint32_t* pQueueFamilyIndices,
    VkImageLayout initialLayout
);

VkImageViewCreateInfo vscImageViewCreateInfo(
    VkImageViewCreateFlags flags,
    VkImage image,
    VkImageViewType viewType,
    VkFormat format,
    VkComponentMapping components,
    VkImageSubresourceRange subresourceRange
);

VkSparseBufferMemoryBindInfo vscSparseBufferMemoryBindInfo(
    VkBuffer buffer,
    uint32_t bindCount,
    const VkSparseMemoryBind* pBinds
);

VkSparseImageOpaqueMemoryBindInfo vscSparseImageOpaqueMemoryBindInfo(
    VkImage image,
    uint32_t bindCount,
    const VkSparseMemoryBind* pBinds
);

VkSparseImageMemoryBindInfo vscSparseImageMemoryBindInfo(
    VkImage image,
    uint32_t bindCount,
    const VkSparseImageMemoryBind* pBinds
);

VkBindSparseInfo vscBindSparseInfo(
    uint32_t waitSemaphoreCount,
    const VkSemaphore* pWaitSemaphores,
    uint32_t bufferBindCount,
    const VkSparseBufferMemoryBindInfo* pBufferBinds,
    uint32_t imageOpaqueBindCount,
    const VkSparseImageOpaqueMemoryBindInfo* pImageOpaqueBinds,
    uint32_t imageBindCount,
    const VkSparseImageMemoryBindInfo* pImageBinds,
    uint32_t signalSemaphoreCount,
    const VkSemaphore* pSignalSemaphores
);

VkShaderModuleCreateInfo vscShaderModuleCreateInfo(
    VkShaderModuleCreateFlags flags,
    size_t codeSize,
    const uint32_t* pCode
);

VkDescriptorSetLayoutCreateInfo vscDescriptorSetLayoutCreateInfo(
    VkDescriptorSetLayoutCreateFlags flags,
    uint32_t bindingCount,
    const VkDescriptorSetLayoutBinding* pBindings
);

VkDescriptorPoolCreateInfo vscDescriptorPoolCreateInfo(
    VkDescriptorPoolCreateFlags flags,
    uint32_t maxSets,
    uint32_t poolSizeCount,
    const VkDescriptorPoolSize* pPoolSizes
);

VkDescriptorSetAllocateInfo vscDescriptorSetAllocateInfo(
    VkDescriptorPool descriptorPool,
    uint32_t descriptorSetCount,
    const VkDescriptorSetLayout* pSetLayouts
);

VkSpecializationInfo vscSpecializationInfo(
    uint32_t mapEntryCount,
    const VkSpecializationMapEntry* pMapEntries,
    size_t dataSize,
    const void* pData
);

VkPipelineShaderStageCreateInfo vscPipelineShaderStageCreateInfo(
    VkPipelineShaderStageCreateFlags flags,
    VkShaderStageFlagBits stage,
    VkShaderModule module,
    const char* pName,
    const VkSpecializationInfo* pSpecializationInfo
);

VkComputePipelineCreateInfo vscComputePipelineCreateInfo(
    VkPipelineCreateFlags flags,
    VkPipelineShaderStageCreateInfo stage,
    VkPipelineLayout layout,
    VkPipeline basePipelineHandle,
    int32_t basePipelineIndex
);

VkPipelineVertexInputStateCreateInfo vscPipelineVertexInputStateCreateInfo(
    VkPipelineVertexInputStateCreateFlags flags,
    uint32_t vertexBindingDescriptionCount,
    const VkVertexInputBindingDescription* pVertexBindingDescriptions,
    uint32_t vertexAttributeDescriptionCount,
    const VkVertexInputAttributeDescription* pVertexAttributeDescriptions
);

VkPipelineInputAssemblyStateCreateInfo vscPipelineInputAssemblyStateCreateInfo(
    VkPipelineInputAssemblyStateCreateFlags flags,
    VkPrimitiveTopology topology,
    VkBool32 primitiveRestartEnable
);

VkPipelineTessellationStateCreateInfo vscPipelineTessellationStateCreateInfo(
    VkPipelineTessellationStateCreateFlags flags,
    uint32_t patchControlPoints
);

VkPipelineViewportStateCreateInfo vscPipelineViewportStateCreateInfo(
    VkPipelineViewportStateCreateFlags flags,
    uint32_t viewportCount,
    const VkViewport* pViewports,
    uint32_t scissorCount,
    const VkRect2D* pScissors
);

VkPipelineRasterizationStateCreateInfo vscPipelineRasterizationStateCreateInfo(
    VkPipelineRasterizationStateCreateFlags flags,
    VkBool32 depthClampEnable,
    VkBool32 rasterizerDiscardEnable,
    VkPolygonMode polygonMode,
    VkCullModeFlags cullMode,
    VkFrontFace frontFace,
    VkBool32 depthBiasEnable,
    float depthBiasConstantFactor,
    float depthBiasClamp,
    float depthBiasSlopeFactor,
    float lineWidth
);

VkPipelineMultisampleStateCreateInfo vscPipelineMultisampleStateCreateInfo(
    VkPipelineMultisampleStateCreateFlags flags,
    VkSampleCountFlagBits rasterizationSamples,
    VkBool32 sampleShadingEnable,
    float minSampleShading,
    const VkSampleMask* pSampleMask,
    VkBool32 alphaToCoverageEnable,
    VkBool32 alphaToOneEnable
);

VkPipelineDynamicStateCreateInfo vscPipelineDynamicStateCreateInfo(
    VkPipelineDynamicStateCreateFlags flags,
    uint32_t dynamicStateCount,
    const VkDynamicState* pDynamicStates
);

VkPipelineDepthStencilStateCreateInfo vscPipelineDepthStencilStateCreateInfo(
    VkPipelineDepthStencilStateCreateFlags flags,
    VkBool32 depthTestEnable,
    VkBool32 depthWriteEnable,
    VkCompareOp depthCompareOp,
    VkBool32 depthBoundsTestEnable,
    VkBool32 stencilTestEnable,
    VkStencilOpState front,
    VkStencilOpState back,
    float minDepthBounds,
    float maxDepthBounds
);

VkGraphicsPipelineCreateInfo vscGraphicsPipelineCreateInfo(
    VkPipelineCreateFlags flags,
    uint32_t stageCount,
    const VkPipelineShaderStageCreateInfo* pStages,
    const VkPipelineVertexInputStateCreateInfo* pVertexInputState,
    const VkPipelineInputAssemblyStateCreateInfo* pInputAssemblyState,
    const VkPipelineTessellationStateCreateInfo* pTessellationState,
    const VkPipelineViewportStateCreateInfo* pViewportState,
    const VkPipelineRasterizationStateCreateInfo* pRasterizationState,
    const VkPipelineMultisampleStateCreateInfo* pMultisampleState,
    const VkPipelineDepthStencilStateCreateInfo* pDepthStencilState,
    const VkPipelineColorBlendStateCreateInfo* pColorBlendState,
    const VkPipelineDynamicStateCreateInfo* pDynamicState,
    VkPipelineLayout layout,
    VkRenderPass renderPass,
    uint32_t subpass,
    VkPipeline basePipelineHandle,
    int32_t basePipelineIndex
);

VkPipelineCacheCreateInfo vscPipelineCacheCreateInfo(
    VkPipelineCacheCreateFlags flags,
    size_t initialDataSize,
    const void* pInitialData
);

VkPipelineLayoutCreateInfo vscPipelineLayoutCreateInfo(
    VkPipelineLayoutCreateFlags flags,
    uint32_t setLayoutCount,
    const VkDescriptorSetLayout* pSetLayouts,
    uint32_t pushConstantRangeCount,
    const VkPushConstantRange* pPushConstantRanges
);

VkSamplerCreateInfo vscSamplerCreateInfo(
    VkSamplerCreateFlags flags,
    VkFilter magFilter,
    VkFilter minFilter,
    VkSamplerMipmapMode mipmapMode,
    VkSamplerAddressMode addressModeU,
    VkSamplerAddressMode addressModeV,
    VkSamplerAddressMode addressModeW,
    float mipLodBias,
    VkBool32 anisotropyEnable,
    float maxAnisotropy,
    VkBool32 compareEnable,
    VkCompareOp compareOp,
    float minLod,
    float maxLod,
    VkBorderColor borderColor,
    VkBool32 unnormalizedCoordinates
);

VkCommandPoolCreateInfo vscCommandPoolCreateInfo(
    VkCommandPoolCreateFlags flags,
    uint32_t queueFamilyIndex
);

VkCommandBufferAllocateInfo vscCommandBufferAllocateInfo(
    VkCommandPool commandPool,
    VkCommandBufferLevel level,
    uint32_t commandBufferCount
);

VkCommandBufferInheritanceInfo vscCommandBufferInheritanceInfo(
    VkRenderPass renderPass,
    uint32_t subpass,
    VkFramebuffer framebuffer,
    VkBool32 occlusionQueryEnable,
    VkQueryControlFlags queryFlags,
    VkQueryPipelineStatisticFlags pipelineStatistics
);

VkCommandBufferBeginInfo vscCommandBufferBeginInfo(
    VkCommandBufferUsageFlags flags,
    const VkCommandBufferInheritanceInfo* pInheritanceInfo
);

VkRenderPassBeginInfo vscRenderPassBeginInfo(
    VkRenderPass renderPass,
    VkFramebuffer framebuffer,
    VkRect2D renderArea,
    uint32_t clearValueCount,
    const VkClearValue* pClearValues
);

VkRenderPassCreateInfo vscRenderPassCreateInfo(
    VkRenderPassCreateFlags flags,
    uint32_t attachmentCount,
    const VkAttachmentDescription* pAttachments,
    uint32_t subpassCount,
    const VkSubpassDescription* pSubpasses,
    uint32_t dependencyCount,
    const VkSubpassDependency* pDependencies
);

VkEventCreateInfo vscEventCreateInfo(
    VkEventCreateFlags flags
);

VkFenceCreateInfo vscFenceCreateInfo(
    VkFenceCreateFlags flags
);

VkSemaphoreCreateInfo vscSemaphoreCreateInfo(
    VkSemaphoreCreateFlags flags
);

VkQueryPoolCreateInfo vscQueryPoolCreateInfo(
    VkQueryPoolCreateFlags flags,
    VkQueryType queryType,
    uint32_t queryCount,
    VkQueryPipelineStatisticFlags pipelineStatistics
);

VkFramebufferCreateInfo vscFramebufferCreateInfo(
    VkFramebufferCreateFlags flags,
    VkRenderPass renderPass,
    uint32_t attachmentCount,
    const VkImageView* pAttachments,
    uint32_t width,
    uint32_t height,
    uint32_t layers
);

VkMultiDrawInfoEXT vscMultiDrawInfoEXT(
    uint32_t firstVertex,
    uint32_t vertexCount
);

VkMultiDrawIndexedInfoEXT vscMultiDrawIndexedInfoEXT(
    uint32_t firstIndex,
    uint32_t indexCount,
    int32_t vertexOffset
);

VkSubmitInfo vscSubmitInfo(
    uint32_t waitSemaphoreCount,
    const VkSemaphore* pWaitSemaphores,
    const VkPipelineStageFlags* pWaitDstStageMask,
    uint32_t commandBufferCount,
    const VkCommandBuffer* pCommandBuffers,
    uint32_t signalSemaphoreCount,
    const VkSemaphore* pSignalSemaphores
);

VkDisplayModeCreateInfoKHR vscDisplayModeCreateInfoKHR(
    VkDisplayModeCreateFlagsKHR flags,
    VkDisplayModeParametersKHR parameters
);

VkDisplaySurfaceCreateInfoKHR vscDisplaySurfaceCreateInfoKHR(
    VkDisplaySurfaceCreateFlagsKHR flags,
    VkDisplayModeKHR displayMode,
    uint32_t planeIndex,
    uint32_t planeStackIndex,
    VkSurfaceTransformFlagBitsKHR transform,
    float globalAlpha,
    VkDisplayPlaneAlphaFlagBitsKHR alphaMode,
    VkExtent2D imageExtent
);

VkDisplayPresentInfoKHR vscDisplayPresentInfoKHR(
    VkRect2D srcRect,
    VkRect2D dstRect,
    VkBool32 persistent
);

VkSwapchainCreateInfoKHR vscSwapchainCreateInfoKHR(
    VkSwapchainCreateFlagsKHR flags,
    VkSurfaceKHR surface,
    uint32_t minImageCount,
    VkFormat imageFormat,
    VkColorSpaceKHR imageColorSpace,
    VkExtent2D imageExtent,
    uint32_t imageArrayLayers,
    VkImageUsageFlags imageUsage,
    VkSharingMode imageSharingMode,
    uint32_t queueFamilyIndexCount,
    const uint32_t* pQueueFamilyIndices,
    VkSurfaceTransformFlagBitsKHR preTransform,
    VkCompositeAlphaFlagBitsKHR compositeAlpha,
    VkPresentModeKHR presentMode,
    VkBool32 clipped,
    VkSwapchainKHR oldSwapchain
);

VkPresentInfoKHR vscPresentInfoKHR(
    uint32_t waitSemaphoreCount,
    const VkSemaphore* pWaitSemaphores,
    uint32_t swapchainCount,
    const VkSwapchainKHR* pSwapchains,
    const uint32_t* pImageIndices,
    VkResult* pResults
);

VkDebugReportCallbackCreateInfoEXT vscDebugReportCallbackCreateInfoEXT(
    VkDebugReportFlagsEXT flags,
    PFN_vkDebugReportCallbackEXT pfnCallback,
    void* pUserData
);

VkDebugMarkerObjectNameInfoEXT vscDebugMarkerObjectNameInfoEXT(
    VkDebugReportObjectTypeEXT objectType,
    uint64_t object,
    const char* pObjectName
);

VkDebugMarkerObjectTagInfoEXT vscDebugMarkerObjectTagInfoEXT(
    VkDebugReportObjectTypeEXT objectType,
    uint64_t object,
    uint64_t tagName,
    size_t tagSize,
    const void* pTag
);

VkDedicatedAllocationImageCreateInfoNV vscDedicatedAllocationImageCreateInfoNV(
    VkBool32 dedicatedAllocation
);

VkDedicatedAllocationBufferCreateInfoNV vscDedicatedAllocationBufferCreateInfoNV(
    VkBool32 dedicatedAllocation
);

VkDedicatedAllocationMemoryAllocateInfoNV vscDedicatedAllocationMemoryAllocateInfoNV(
    VkImage image,
    VkBuffer buffer
);

VkExternalMemoryImageCreateInfoNV vscExternalMemoryImageCreateInfoNV(
    VkExternalMemoryHandleTypeFlagsNV handleTypes
);

VkExportMemoryAllocateInfoNV vscExportMemoryAllocateInfoNV(
    VkExternalMemoryHandleTypeFlagsNV handleTypes
);

VkDevicePrivateDataCreateInfo vscDevicePrivateDataCreateInfo(
    uint32_t privateDataSlotRequestCount
);

#define vscDevicePrivateDataCreateInfoEXT vscDevicePrivateDataCreateInfo

VkPrivateDataSlotCreateInfo vscPrivateDataSlotCreateInfo(
    VkPrivateDataSlotCreateFlags flags
);

#define vscPrivateDataSlotCreateInfoEXT vscPrivateDataSlotCreateInfo

VkGraphicsShaderGroupCreateInfoNV vscGraphicsShaderGroupCreateInfoNV(
    uint32_t stageCount,
    const VkPipelineShaderStageCreateInfo* pStages,
    const VkPipelineVertexInputStateCreateInfo* pVertexInputState,
    const VkPipelineTessellationStateCreateInfo* pTessellationState
);

VkGraphicsPipelineShaderGroupsCreateInfoNV vscGraphicsPipelineShaderGroupsCreateInfoNV(
    uint32_t groupCount,
    const VkGraphicsShaderGroupCreateInfoNV* pGroups,
    uint32_t pipelineCount,
    const VkPipeline* pPipelines
);

VkIndirectCommandsLayoutCreateInfoNV vscIndirectCommandsLayoutCreateInfoNV(
    VkIndirectCommandsLayoutUsageFlagsNV flags,
    VkPipelineBindPoint pipelineBindPoint,
    uint32_t tokenCount,
    const VkIndirectCommandsLayoutTokenNV* pTokens,
    uint32_t streamCount,
    const uint32_t* pStreamStrides
);

VkGeneratedCommandsInfoNV vscGeneratedCommandsInfoNV(
    VkPipelineBindPoint pipelineBindPoint,
    VkPipeline pipeline,
    VkIndirectCommandsLayoutNV indirectCommandsLayout,
    uint32_t streamCount,
    const VkIndirectCommandsStreamNV* pStreams,
    uint32_t sequencesCount,
    VkBuffer preprocessBuffer,
    VkDeviceSize preprocessOffset,
    VkDeviceSize preprocessSize,
    VkBuffer sequencesCountBuffer,
    VkDeviceSize sequencesCountOffset,
    VkBuffer sequencesIndexBuffer,
    VkDeviceSize sequencesIndexOffset
);

VkGeneratedCommandsMemoryRequirementsInfoNV vscGeneratedCommandsMemoryRequirementsInfoNV(
    VkPipelineBindPoint pipelineBindPoint,
    VkPipeline pipeline,
    VkIndirectCommandsLayoutNV indirectCommandsLayout,
    uint32_t maxSequencesCount
);

VkPhysicalDeviceImageFormatInfo2 vscPhysicalDeviceImageFormatInfo2(
    VkFormat format,
    VkImageType type,
    VkImageTiling tiling,
    VkImageUsageFlags usage,
    VkImageCreateFlags flags
);

#define vscPhysicalDeviceImageFormatInfo2KHR vscPhysicalDeviceImageFormatInfo2

VkPhysicalDeviceSparseImageFormatInfo2 vscPhysicalDeviceSparseImageFormatInfo2(
    VkFormat format,
    VkImageType type,
    VkSampleCountFlagBits samples,
    VkImageUsageFlags usage,
    VkImageTiling tiling
);

#define vscPhysicalDeviceSparseImageFormatInfo2KHR vscPhysicalDeviceSparseImageFormatInfo2

VkPhysicalDeviceExternalImageFormatInfo vscPhysicalDeviceExternalImageFormatInfo(
    VkExternalMemoryHandleTypeFlagBits handleType
);

#define vscPhysicalDeviceExternalImageFormatInfoKHR vscPhysicalDeviceExternalImageFormatInfo

VkPhysicalDeviceExternalBufferInfo vscPhysicalDeviceExternalBufferInfo(
    VkBufferCreateFlags flags,
    VkBufferUsageFlags usage,
    VkExternalMemoryHandleTypeFlagBits handleType
);

#define vscPhysicalDeviceExternalBufferInfoKHR vscPhysicalDeviceExternalBufferInfo

VkExternalMemoryImageCreateInfo vscExternalMemoryImageCreateInfo(
    VkExternalMemoryHandleTypeFlags handleTypes
);

#define vscExternalMemoryImageCreateInfoKHR vscExternalMemoryImageCreateInfo

VkExternalMemoryBufferCreateInfo vscExternalMemoryBufferCreateInfo(
    VkExternalMemoryHandleTypeFlags handleTypes
);

#define vscExternalMemoryBufferCreateInfoKHR vscExternalMemoryBufferCreateInfo

VkExportMemoryAllocateInfo vscExportMemoryAllocateInfo(
    VkExternalMemoryHandleTypeFlags handleTypes
);

#define vscExportMemoryAllocateInfoKHR vscExportMemoryAllocateInfo

VkImportMemoryFdInfoKHR vscImportMemoryFdInfoKHR(
    VkExternalMemoryHandleTypeFlagBits handleType,
    int fd
);

VkMemoryGetFdInfoKHR vscMemoryGetFdInfoKHR(
    VkDeviceMemory memory,
    VkExternalMemoryHandleTypeFlagBits handleType
);

VkPhysicalDeviceExternalSemaphoreInfo vscPhysicalDeviceExternalSemaphoreInfo(
    VkExternalSemaphoreHandleTypeFlagBits handleType
);

#define vscPhysicalDeviceExternalSemaphoreInfoKHR vscPhysicalDeviceExternalSemaphoreInfo

VkExportSemaphoreCreateInfo vscExportSemaphoreCreateInfo(
    VkExternalSemaphoreHandleTypeFlags handleTypes
);

#define vscExportSemaphoreCreateInfoKHR vscExportSemaphoreCreateInfo

VkImportSemaphoreFdInfoKHR vscImportSemaphoreFdInfoKHR(
    VkSemaphore semaphore,
    VkSemaphoreImportFlags flags,
    VkExternalSemaphoreHandleTypeFlagBits handleType,
    int fd
);

VkSemaphoreGetFdInfoKHR vscSemaphoreGetFdInfoKHR(
    VkSemaphore semaphore,
    VkExternalSemaphoreHandleTypeFlagBits handleType
);

VkPhysicalDeviceExternalFenceInfo vscPhysicalDeviceExternalFenceInfo(
    VkExternalFenceHandleTypeFlagBits handleType
);

#define vscPhysicalDeviceExternalFenceInfoKHR vscPhysicalDeviceExternalFenceInfo

VkExportFenceCreateInfo vscExportFenceCreateInfo(
    VkExternalFenceHandleTypeFlags handleTypes
);

#define vscExportFenceCreateInfoKHR vscExportFenceCreateInfo

VkImportFenceFdInfoKHR vscImportFenceFdInfoKHR(
    VkFence fence,
    VkFenceImportFlags flags,
    VkExternalFenceHandleTypeFlagBits handleType,
    int fd
);

VkFenceGetFdInfoKHR vscFenceGetFdInfoKHR(
    VkFence fence,
    VkExternalFenceHandleTypeFlagBits handleType
);

VkRenderPassMultiviewCreateInfo vscRenderPassMultiviewCreateInfo(
    uint32_t subpassCount,
    const uint32_t* pViewMasks,
    uint32_t dependencyCount,
    const int32_t* pViewOffsets,
    uint32_t correlationMaskCount,
    const uint32_t* pCorrelationMasks
);

#define vscRenderPassMultiviewCreateInfoKHR vscRenderPassMultiviewCreateInfo

VkDisplayPowerInfoEXT vscDisplayPowerInfoEXT(
    VkDisplayPowerStateEXT powerState
);

VkDeviceEventInfoEXT vscDeviceEventInfoEXT(
    VkDeviceEventTypeEXT deviceEvent
);

VkDisplayEventInfoEXT vscDisplayEventInfoEXT(
    VkDisplayEventTypeEXT displayEvent
);

VkSwapchainCounterCreateInfoEXT vscSwapchainCounterCreateInfoEXT(
    VkSurfaceCounterFlagsEXT surfaceCounters
);

VkMemoryAllocateFlagsInfo vscMemoryAllocateFlagsInfo(
    VkMemoryAllocateFlags flags,
    uint32_t deviceMask
);

#define vscMemoryAllocateFlagsInfoKHR vscMemoryAllocateFlagsInfo

VkBindBufferMemoryInfo vscBindBufferMemoryInfo(
    VkBuffer buffer,
    VkDeviceMemory memory,
    VkDeviceSize memoryOffset
);

#define vscBindBufferMemoryInfoKHR vscBindBufferMemoryInfo

VkBindBufferMemoryDeviceGroupInfo vscBindBufferMemoryDeviceGroupInfo(
    uint32_t deviceIndexCount,
    const uint32_t* pDeviceIndices
);

#define vscBindBufferMemoryDeviceGroupInfoKHR vscBindBufferMemoryDeviceGroupInfo

VkBindImageMemoryInfo vscBindImageMemoryInfo(
    VkImage image,
    VkDeviceMemory memory,
    VkDeviceSize memoryOffset
);

#define vscBindImageMemoryInfoKHR vscBindImageMemoryInfo

VkBindImageMemoryDeviceGroupInfo vscBindImageMemoryDeviceGroupInfo(
    uint32_t deviceIndexCount,
    const uint32_t* pDeviceIndices,
    uint32_t splitInstanceBindRegionCount,
    const VkRect2D* pSplitInstanceBindRegions
);

#define vscBindImageMemoryDeviceGroupInfoKHR vscBindImageMemoryDeviceGroupInfo

VkDeviceGroupRenderPassBeginInfo vscDeviceGroupRenderPassBeginInfo(
    uint32_t deviceMask,
    uint32_t deviceRenderAreaCount,
    const VkRect2D* pDeviceRenderAreas
);

#define vscDeviceGroupRenderPassBeginInfoKHR vscDeviceGroupRenderPassBeginInfo

VkDeviceGroupCommandBufferBeginInfo vscDeviceGroupCommandBufferBeginInfo(
    uint32_t deviceMask
);

#define vscDeviceGroupCommandBufferBeginInfoKHR vscDeviceGroupCommandBufferBeginInfo

VkDeviceGroupSubmitInfo vscDeviceGroupSubmitInfo(
    uint32_t waitSemaphoreCount,
    const uint32_t* pWaitSemaphoreDeviceIndices,
    uint32_t commandBufferCount,
    const uint32_t* pCommandBufferDeviceMasks,
    uint32_t signalSemaphoreCount,
    const uint32_t* pSignalSemaphoreDeviceIndices
);

#define vscDeviceGroupSubmitInfoKHR vscDeviceGroupSubmitInfo

VkDeviceGroupBindSparseInfo vscDeviceGroupBindSparseInfo(
    uint32_t resourceDeviceIndex,
    uint32_t memoryDeviceIndex
);

#define vscDeviceGroupBindSparseInfoKHR vscDeviceGroupBindSparseInfo

VkImageSwapchainCreateInfoKHR vscImageSwapchainCreateInfoKHR(
    VkSwapchainKHR swapchain
);

VkBindImageMemorySwapchainInfoKHR vscBindImageMemorySwapchainInfoKHR(
    VkSwapchainKHR swapchain,
    uint32_t imageIndex
);

VkAcquireNextImageInfoKHR vscAcquireNextImageInfoKHR(
    VkSwapchainKHR swapchain,
    uint64_t timeout,
    VkSemaphore semaphore,
    VkFence fence,
    uint32_t deviceMask
);

VkDeviceGroupPresentInfoKHR vscDeviceGroupPresentInfoKHR(
    uint32_t swapchainCount,
    const uint32_t* pDeviceMasks,
    VkDeviceGroupPresentModeFlagBitsKHR mode
);

VkDeviceGroupDeviceCreateInfo vscDeviceGroupDeviceCreateInfo(
    uint32_t physicalDeviceCount,
    const VkPhysicalDevice* pPhysicalDevices
);

#define vscDeviceGroupDeviceCreateInfoKHR vscDeviceGroupDeviceCreateInfo

VkDeviceGroupSwapchainCreateInfoKHR vscDeviceGroupSwapchainCreateInfoKHR(
    VkDeviceGroupPresentModeFlagsKHR modes
);

VkDescriptorUpdateTemplateCreateInfo vscDescriptorUpdateTemplateCreateInfo(
    VkDescriptorUpdateTemplateCreateFlags flags,
    uint32_t descriptorUpdateEntryCount,
    const VkDescriptorUpdateTemplateEntry* pDescriptorUpdateEntries,
    VkDescriptorUpdateTemplateType templateType,
    VkDescriptorSetLayout descriptorSetLayout,
    VkPipelineBindPoint pipelineBindPoint,
    VkPipelineLayout pipelineLayout,
    uint32_t set
);

#define vscDescriptorUpdateTemplateCreateInfoKHR vscDescriptorUpdateTemplateCreateInfo

VkSwapchainDisplayNativeHdrCreateInfoAMD vscSwapchainDisplayNativeHdrCreateInfoAMD(
    VkBool32 localDimmingEnable
);

VkPresentTimesInfoGOOGLE vscPresentTimesInfoGOOGLE(
    uint32_t swapchainCount,
    const VkPresentTimeGOOGLE* pTimes
);

VkPipelineViewportWScalingStateCreateInfoNV vscPipelineViewportWScalingStateCreateInfoNV(
    VkBool32 viewportWScalingEnable,
    uint32_t viewportCount,
    const VkViewportWScalingNV* pViewportWScalings
);

VkPipelineViewportSwizzleStateCreateInfoNV vscPipelineViewportSwizzleStateCreateInfoNV(
    VkPipelineViewportSwizzleStateCreateFlagsNV flags,
    uint32_t viewportCount,
    const VkViewportSwizzleNV* pViewportSwizzles
);

VkPipelineDiscardRectangleStateCreateInfoEXT vscPipelineDiscardRectangleStateCreateInfoEXT(
    VkPipelineDiscardRectangleStateCreateFlagsEXT flags,
    VkDiscardRectangleModeEXT discardRectangleMode,
    uint32_t discardRectangleCount,
    const VkRect2D* pDiscardRectangles
);

VkRenderPassInputAttachmentAspectCreateInfo vscRenderPassInputAttachmentAspectCreateInfo(
    uint32_t aspectReferenceCount,
    const VkInputAttachmentAspectReference* pAspectReferences
);

#define vscRenderPassInputAttachmentAspectCreateInfoKHR vscRenderPassInputAttachmentAspectCreateInfo

VkPhysicalDeviceSurfaceInfo2KHR vscPhysicalDeviceSurfaceInfo2KHR(
    VkSurfaceKHR surface
);

VkDisplayPlaneInfo2KHR vscDisplayPlaneInfo2KHR(
    VkDisplayModeKHR mode,
    uint32_t planeIndex
);

VkBufferMemoryRequirementsInfo2 vscBufferMemoryRequirementsInfo2(
    VkBuffer buffer
);

#define vscBufferMemoryRequirementsInfo2KHR vscBufferMemoryRequirementsInfo2

VkImageMemoryRequirementsInfo2 vscImageMemoryRequirementsInfo2(
    VkImage image
);

#define vscImageMemoryRequirementsInfo2KHR vscImageMemoryRequirementsInfo2

VkImageSparseMemoryRequirementsInfo2 vscImageSparseMemoryRequirementsInfo2(
    VkImage image
);

#define vscImageSparseMemoryRequirementsInfo2KHR vscImageSparseMemoryRequirementsInfo2

VkMemoryDedicatedAllocateInfo vscMemoryDedicatedAllocateInfo(
    VkImage image,
    VkBuffer buffer
);

#define vscMemoryDedicatedAllocateInfoKHR vscMemoryDedicatedAllocateInfo

VkImageViewUsageCreateInfo vscImageViewUsageCreateInfo(
    VkImageUsageFlags usage
);

#define vscImageViewUsageCreateInfoKHR vscImageViewUsageCreateInfo

VkPipelineTessellationDomainOriginStateCreateInfo vscPipelineTessellationDomainOriginStateCreateInfo(
    VkTessellationDomainOrigin domainOrigin
);

#define vscPipelineTessellationDomainOriginStateCreateInfoKHR vscPipelineTessellationDomainOriginStateCreateInfo

VkSamplerYcbcrConversionInfo vscSamplerYcbcrConversionInfo(
    VkSamplerYcbcrConversion conversion
);

#define vscSamplerYcbcrConversionInfoKHR vscSamplerYcbcrConversionInfo

VkSamplerYcbcrConversionCreateInfo vscSamplerYcbcrConversionCreateInfo(
    VkFormat format,
    VkSamplerYcbcrModelConversion ycbcrModel,
    VkSamplerYcbcrRange ycbcrRange,
    VkComponentMapping components,
    VkChromaLocation xChromaOffset,
    VkChromaLocation yChromaOffset,
    VkFilter chromaFilter,
    VkBool32 forceExplicitReconstruction
);

#define vscSamplerYcbcrConversionCreateInfoKHR vscSamplerYcbcrConversionCreateInfo

VkBindImagePlaneMemoryInfo vscBindImagePlaneMemoryInfo(
    VkImageAspectFlagBits planeAspect
);

#define vscBindImagePlaneMemoryInfoKHR vscBindImagePlaneMemoryInfo

VkImagePlaneMemoryRequirementsInfo vscImagePlaneMemoryRequirementsInfo(
    VkImageAspectFlagBits planeAspect
);

#define vscImagePlaneMemoryRequirementsInfoKHR vscImagePlaneMemoryRequirementsInfo

VkConditionalRenderingBeginInfoEXT vscConditionalRenderingBeginInfoEXT(
    VkBuffer buffer,
    VkDeviceSize offset,
    VkConditionalRenderingFlagsEXT flags
);

VkProtectedSubmitInfo vscProtectedSubmitInfo(
    VkBool32 protectedSubmit
);

VkDeviceQueueInfo2 vscDeviceQueueInfo2(
    VkDeviceQueueCreateFlags flags,
    uint32_t queueFamilyIndex,
    uint32_t queueIndex
);

VkPipelineCoverageToColorStateCreateInfoNV vscPipelineCoverageToColorStateCreateInfoNV(
    VkPipelineCoverageToColorStateCreateFlagsNV flags,
    VkBool32 coverageToColorEnable,
    uint32_t coverageToColorLocation
);

VkSampleLocationsInfoEXT vscSampleLocationsInfoEXT(
    VkSampleCountFlagBits sampleLocationsPerPixel,
    VkExtent2D sampleLocationGridSize,
    uint32_t sampleLocationsCount,
    const VkSampleLocationEXT* pSampleLocations
);

VkRenderPassSampleLocationsBeginInfoEXT vscRenderPassSampleLocationsBeginInfoEXT(
    uint32_t attachmentInitialSampleLocationsCount,
    const VkAttachmentSampleLocationsEXT* pAttachmentInitialSampleLocations,
    uint32_t postSubpassSampleLocationsCount,
    const VkSubpassSampleLocationsEXT* pPostSubpassSampleLocations
);

VkPipelineSampleLocationsStateCreateInfoEXT vscPipelineSampleLocationsStateCreateInfoEXT(
    VkBool32 sampleLocationsEnable,
    VkSampleLocationsInfoEXT sampleLocationsInfo
);

VkSamplerReductionModeCreateInfo vscSamplerReductionModeCreateInfo(
    VkSamplerReductionMode reductionMode
);

#define vscSamplerReductionModeCreateInfoEXT vscSamplerReductionModeCreateInfo

VkPipelineColorBlendAdvancedStateCreateInfoEXT vscPipelineColorBlendAdvancedStateCreateInfoEXT(
    VkBool32 srcPremultiplied,
    VkBool32 dstPremultiplied,
    VkBlendOverlapEXT blendOverlap
);

VkDescriptorPoolInlineUniformBlockCreateInfo vscDescriptorPoolInlineUniformBlockCreateInfo(
    uint32_t maxInlineUniformBlockBindings
);

#define vscDescriptorPoolInlineUniformBlockCreateInfoEXT vscDescriptorPoolInlineUniformBlockCreateInfo

VkPipelineCoverageModulationStateCreateInfoNV vscPipelineCoverageModulationStateCreateInfoNV(
    VkPipelineCoverageModulationStateCreateFlagsNV flags,
    VkCoverageModulationModeNV coverageModulationMode,
    VkBool32 coverageModulationTableEnable,
    uint32_t coverageModulationTableCount,
    const float* pCoverageModulationTable
);

VkImageFormatListCreateInfo vscImageFormatListCreateInfo(
    uint32_t viewFormatCount,
    const VkFormat* pViewFormats
);

#define vscImageFormatListCreateInfoKHR vscImageFormatListCreateInfo

VkValidationCacheCreateInfoEXT vscValidationCacheCreateInfoEXT(
    VkValidationCacheCreateFlagsEXT flags,
    size_t initialDataSize,
    const void* pInitialData
);

VkShaderModuleValidationCacheCreateInfoEXT vscShaderModuleValidationCacheCreateInfoEXT(
    VkValidationCacheEXT validationCache
);

VkDeviceQueueGlobalPriorityCreateInfoKHR vscDeviceQueueGlobalPriorityCreateInfoKHR(
    VkQueueGlobalPriorityKHR globalPriority
);

#define vscDeviceQueueGlobalPriorityCreateInfoEXT vscDeviceQueueGlobalPriorityCreateInfoKHR

VkDebugUtilsObjectNameInfoEXT vscDebugUtilsObjectNameInfoEXT(
    VkObjectType objectType,
    uint64_t objectHandle,
    const char* pObjectName
);

VkDebugUtilsObjectTagInfoEXT vscDebugUtilsObjectTagInfoEXT(
    VkObjectType objectType,
    uint64_t objectHandle,
    uint64_t tagName,
    size_t tagSize,
    const void* pTag
);

VkDebugUtilsMessengerCreateInfoEXT vscDebugUtilsMessengerCreateInfoEXT(
    VkDebugUtilsMessengerCreateFlagsEXT flags,
    VkDebugUtilsMessageSeverityFlagsEXT messageSeverity,
    VkDebugUtilsMessageTypeFlagsEXT messageType,
    PFN_vkDebugUtilsMessengerCallbackEXT pfnUserCallback,
    void* pUserData
);

VkDeviceDeviceMemoryReportCreateInfoEXT vscDeviceDeviceMemoryReportCreateInfoEXT(
    VkDeviceMemoryReportFlagsEXT flags,
    PFN_vkDeviceMemoryReportCallbackEXT pfnUserCallback,
    void* pUserData
);

VkImportMemoryHostPointerInfoEXT vscImportMemoryHostPointerInfoEXT(
    VkExternalMemoryHandleTypeFlagBits handleType,
    void* pHostPointer
);

#define vscCalibratedTimestampInfoEXT vscCalibratedTimestampInfoKHR

VkPipelineRasterizationConservativeStateCreateInfoEXT vscPipelineRasterizationConservativeStateCreateInfoEXT(
    VkPipelineRasterizationConservativeStateCreateFlagsEXT flags,
    VkConservativeRasterizationModeEXT conservativeRasterizationMode,
    float extraPrimitiveOverestimationSize
);

VkDescriptorSetLayoutBindingFlagsCreateInfo vscDescriptorSetLayoutBindingFlagsCreateInfo(
    uint32_t bindingCount,
    const VkDescriptorBindingFlags* pBindingFlags
);

#define vscDescriptorSetLayoutBindingFlagsCreateInfoEXT vscDescriptorSetLayoutBindingFlagsCreateInfo

VkDescriptorSetVariableDescriptorCountAllocateInfo vscDescriptorSetVariableDescriptorCountAllocateInfo(
    uint32_t descriptorSetCount,
    const uint32_t* pDescriptorCounts
);

#define vscDescriptorSetVariableDescriptorCountAllocateInfoEXT vscDescriptorSetVariableDescriptorCountAllocateInfo

VkRenderPassCreateInfo2 vscRenderPassCreateInfo2(
    VkRenderPassCreateFlags flags,
    uint32_t attachmentCount,
    const VkAttachmentDescription2* pAttachments,
    uint32_t subpassCount,
    const VkSubpassDescription2* pSubpasses,
    uint32_t dependencyCount,
    const VkSubpassDependency2* pDependencies,
    uint32_t correlatedViewMaskCount,
    const uint32_t* pCorrelatedViewMasks
);

#define vscRenderPassCreateInfo2KHR vscRenderPassCreateInfo2

VkSubpassBeginInfo vscSubpassBeginInfo(
    VkSubpassContents contents
);

#define vscSubpassBeginInfoKHR vscSubpassBeginInfo

VkSubpassEndInfo vscSubpassEndInfo(

);

#define vscSubpassEndInfoKHR vscSubpassEndInfo

VkSemaphoreTypeCreateInfo vscSemaphoreTypeCreateInfo(
    VkSemaphoreType semaphoreType,
    uint64_t initialValue
);

#define vscSemaphoreTypeCreateInfoKHR vscSemaphoreTypeCreateInfo

VkTimelineSemaphoreSubmitInfo vscTimelineSemaphoreSubmitInfo(
    uint32_t waitSemaphoreValueCount,
    const uint64_t* pWaitSemaphoreValues,
    uint32_t signalSemaphoreValueCount,
    const uint64_t* pSignalSemaphoreValues
);

#define vscTimelineSemaphoreSubmitInfoKHR vscTimelineSemaphoreSubmitInfo

VkSemaphoreWaitInfo vscSemaphoreWaitInfo(
    VkSemaphoreWaitFlags flags,
    uint32_t semaphoreCount,
    const VkSemaphore* pSemaphores,
    const uint64_t* pValues
);

#define vscSemaphoreWaitInfoKHR vscSemaphoreWaitInfo

VkSemaphoreSignalInfo vscSemaphoreSignalInfo(
    VkSemaphore semaphore,
    uint64_t value
);

#define vscSemaphoreSignalInfoKHR vscSemaphoreSignalInfo

#define vscPipelineVertexInputDivisorStateCreateInfoEXT vscPipelineVertexInputDivisorStateCreateInfoKHR

VkPhysicalDevicePCIBusInfoPropertiesEXT vscPhysicalDevicePCIBusInfoPropertiesEXT(
    uint32_t pciDomain,
    uint32_t pciBus,
    uint32_t pciDevice,
    uint32_t pciFunction
);

VkCommandBufferInheritanceConditionalRenderingInfoEXT vscCommandBufferInheritanceConditionalRenderingInfoEXT(
    VkBool32 conditionalRenderingEnable
);

VkPipelineRasterizationStateStreamCreateInfoEXT vscPipelineRasterizationStateStreamCreateInfoEXT(
    VkPipelineRasterizationStateStreamCreateFlagsEXT flags,
    uint32_t rasterizationStream
);

VkPipelineRepresentativeFragmentTestStateCreateInfoNV vscPipelineRepresentativeFragmentTestStateCreateInfoNV(
    VkBool32 representativeFragmentTestEnable
);

VkPipelineViewportExclusiveScissorStateCreateInfoNV vscPipelineViewportExclusiveScissorStateCreateInfoNV(
    uint32_t exclusiveScissorCount,
    const VkRect2D* pExclusiveScissors
);

VkPipelineViewportShadingRateImageStateCreateInfoNV vscPipelineViewportShadingRateImageStateCreateInfoNV(
    VkBool32 shadingRateImageEnable,
    uint32_t viewportCount,
    const VkShadingRatePaletteNV* pShadingRatePalettes
);

VkPipelineViewportCoarseSampleOrderStateCreateInfoNV vscPipelineViewportCoarseSampleOrderStateCreateInfoNV(
    VkCoarseSampleOrderTypeNV sampleOrderType,
    uint32_t customSampleOrderCount,
    const VkCoarseSampleOrderCustomNV* pCustomSampleOrders
);

VkRayTracingShaderGroupCreateInfoNV vscRayTracingShaderGroupCreateInfoNV(
    VkRayTracingShaderGroupTypeKHR type,
    uint32_t generalShader,
    uint32_t closestHitShader,
    uint32_t anyHitShader,
    uint32_t intersectionShader
);

VkRayTracingShaderGroupCreateInfoKHR vscRayTracingShaderGroupCreateInfoKHR(
    VkRayTracingShaderGroupTypeKHR type,
    uint32_t generalShader,
    uint32_t closestHitShader,
    uint32_t anyHitShader,
    uint32_t intersectionShader,
    const void* pShaderGroupCaptureReplayHandle
);

VkRayTracingPipelineCreateInfoNV vscRayTracingPipelineCreateInfoNV(
    VkPipelineCreateFlags flags,
    uint32_t stageCount,
    const VkPipelineShaderStageCreateInfo* pStages,
    uint32_t groupCount,
    const VkRayTracingShaderGroupCreateInfoNV* pGroups,
    uint32_t maxRecursionDepth,
    VkPipelineLayout layout,
    VkPipeline basePipelineHandle,
    int32_t basePipelineIndex
);

VkRayTracingPipelineCreateInfoKHR vscRayTracingPipelineCreateInfoKHR(
    VkPipelineCreateFlags flags,
    uint32_t stageCount,
    const VkPipelineShaderStageCreateInfo* pStages,
    uint32_t groupCount,
    const VkRayTracingShaderGroupCreateInfoKHR* pGroups,
    uint32_t maxPipelineRayRecursionDepth,
    const VkPipelineLibraryCreateInfoKHR* pLibraryInfo,
    const VkRayTracingPipelineInterfaceCreateInfoKHR* pLibraryInterface,
    const VkPipelineDynamicStateCreateInfo* pDynamicState,
    VkPipelineLayout layout,
    VkPipeline basePipelineHandle,
    int32_t basePipelineIndex
);

VkAccelerationStructureInfoNV vscAccelerationStructureInfoNV(
    VkAccelerationStructureTypeNV type,
    VkBuildAccelerationStructureFlagsNV flags,
    uint32_t instanceCount,
    uint32_t geometryCount,
    const VkGeometryNV* pGeometries
);

VkAccelerationStructureCreateInfoNV vscAccelerationStructureCreateInfoNV(
    VkDeviceSize compactedSize,
    VkAccelerationStructureInfoNV info
);

VkBindAccelerationStructureMemoryInfoNV vscBindAccelerationStructureMemoryInfoNV(
    VkAccelerationStructureNV accelerationStructure,
    VkDeviceMemory memory,
    VkDeviceSize memoryOffset,
    uint32_t deviceIndexCount,
    const uint32_t* pDeviceIndices
);

VkAccelerationStructureMemoryRequirementsInfoNV vscAccelerationStructureMemoryRequirementsInfoNV(
    VkAccelerationStructureMemoryRequirementsTypeNV type,
    VkAccelerationStructureNV accelerationStructure
);

VkPhysicalDeviceImageDrmFormatModifierInfoEXT vscPhysicalDeviceImageDrmFormatModifierInfoEXT(
    uint64_t drmFormatModifier,
    VkSharingMode sharingMode,
    uint32_t queueFamilyIndexCount,
    const uint32_t* pQueueFamilyIndices
);

VkImageDrmFormatModifierListCreateInfoEXT vscImageDrmFormatModifierListCreateInfoEXT(
    uint32_t drmFormatModifierCount,
    const uint64_t* pDrmFormatModifiers
);

VkImageDrmFormatModifierExplicitCreateInfoEXT vscImageDrmFormatModifierExplicitCreateInfoEXT(
    uint64_t drmFormatModifier,
    uint32_t drmFormatModifierPlaneCount,
    const VkSubresourceLayout* pPlaneLayouts
);

VkImageStencilUsageCreateInfo vscImageStencilUsageCreateInfo(
    VkImageUsageFlags stencilUsage
);

#define vscImageStencilUsageCreateInfoEXT vscImageStencilUsageCreateInfo

VkDeviceMemoryOverallocationCreateInfoAMD vscDeviceMemoryOverallocationCreateInfoAMD(
    VkMemoryOverallocationBehaviorAMD overallocationBehavior
);

VkRenderPassFragmentDensityMapCreateInfoEXT vscRenderPassFragmentDensityMapCreateInfoEXT(
    VkAttachmentReference fragmentDensityMapAttachment
);

VkSubpassFragmentDensityMapOffsetEndInfoQCOM vscSubpassFragmentDensityMapOffsetEndInfoQCOM(
    uint32_t fragmentDensityOffsetCount,
    const VkOffset2D* pFragmentDensityOffsets
);

VkPipelineRasterizationDepthClipStateCreateInfoEXT vscPipelineRasterizationDepthClipStateCreateInfoEXT(
    VkPipelineRasterizationDepthClipStateCreateFlagsEXT flags,
    VkBool32 depthClipEnable
);

VkMemoryPriorityAllocateInfoEXT vscMemoryPriorityAllocateInfoEXT(
    float priority
);

VkBufferDeviceAddressInfo vscBufferDeviceAddressInfo(
    VkBuffer buffer
);

#define vscBufferDeviceAddressInfoKHR vscBufferDeviceAddressInfo

#define vscBufferDeviceAddressInfoEXT vscBufferDeviceAddressInfo

VkBufferOpaqueCaptureAddressCreateInfo vscBufferOpaqueCaptureAddressCreateInfo(
    uint64_t opaqueCaptureAddress
);

#define vscBufferOpaqueCaptureAddressCreateInfoKHR vscBufferOpaqueCaptureAddressCreateInfo

VkBufferDeviceAddressCreateInfoEXT vscBufferDeviceAddressCreateInfoEXT(
    VkDeviceAddress deviceAddress
);

VkPhysicalDeviceImageViewImageFormatInfoEXT vscPhysicalDeviceImageViewImageFormatInfoEXT(
    VkImageViewType imageViewType
);

VkFramebufferAttachmentsCreateInfo vscFramebufferAttachmentsCreateInfo(
    uint32_t attachmentImageInfoCount,
    const VkFramebufferAttachmentImageInfo* pAttachmentImageInfos
);

#define vscFramebufferAttachmentsCreateInfoKHR vscFramebufferAttachmentsCreateInfo

VkFramebufferAttachmentImageInfo vscFramebufferAttachmentImageInfo(
    VkImageCreateFlags flags,
    VkImageUsageFlags usage,
    uint32_t width,
    uint32_t height,
    uint32_t layerCount,
    uint32_t viewFormatCount,
    const VkFormat* pViewFormats
);

#define vscFramebufferAttachmentImageInfoKHR vscFramebufferAttachmentImageInfo

VkRenderPassAttachmentBeginInfo vscRenderPassAttachmentBeginInfo(
    uint32_t attachmentCount,
    const VkImageView* pAttachments
);

#define vscRenderPassAttachmentBeginInfoKHR vscRenderPassAttachmentBeginInfo

VkImageViewHandleInfoNVX vscImageViewHandleInfoNVX(
    VkImageView imageView,
    VkDescriptorType descriptorType,
    VkSampler sampler
);

VkPipelineCreationFeedbackCreateInfo vscPipelineCreationFeedbackCreateInfo(
    VkPipelineCreationFeedback* pPipelineCreationFeedback,
    uint32_t pipelineStageCreationFeedbackCount,
    VkPipelineCreationFeedback* pPipelineStageCreationFeedbacks
);

#define vscPipelineCreationFeedbackCreateInfoEXT vscPipelineCreationFeedbackCreateInfo

VkQueryPoolPerformanceCreateInfoKHR vscQueryPoolPerformanceCreateInfoKHR(
    uint32_t queueFamilyIndex,
    uint32_t counterIndexCount,
    const uint32_t* pCounterIndices
);

VkAcquireProfilingLockInfoKHR vscAcquireProfilingLockInfoKHR(
    VkAcquireProfilingLockFlagsKHR flags,
    uint64_t timeout
);

VkPerformanceQuerySubmitInfoKHR vscPerformanceQuerySubmitInfoKHR(
    uint32_t counterPassIndex
);

VkHeadlessSurfaceCreateInfoEXT vscHeadlessSurfaceCreateInfoEXT(
    VkHeadlessSurfaceCreateFlagsEXT flags
);

VkPipelineCoverageReductionStateCreateInfoNV vscPipelineCoverageReductionStateCreateInfoNV(
    VkPipelineCoverageReductionStateCreateFlagsNV flags,
    VkCoverageReductionModeNV coverageReductionMode
);

VkInitializePerformanceApiInfoINTEL vscInitializePerformanceApiInfoINTEL(
    void* pUserData
);

VkQueryPoolPerformanceQueryCreateInfoINTEL vscQueryPoolPerformanceQueryCreateInfoINTEL(
    VkQueryPoolSamplingModeINTEL performanceCountersSampling
);

#define vscQueryPoolCreateInfoINTEL vscQueryPoolPerformanceQueryCreateInfoINTEL

VkPerformanceMarkerInfoINTEL vscPerformanceMarkerInfoINTEL(
    uint64_t marker
);

VkPerformanceStreamMarkerInfoINTEL vscPerformanceStreamMarkerInfoINTEL(
    uint32_t marker
);

VkPerformanceOverrideInfoINTEL vscPerformanceOverrideInfoINTEL(
    VkPerformanceOverrideTypeINTEL type,
    VkBool32 enable,
    uint64_t parameter
);

VkPerformanceConfigurationAcquireInfoINTEL vscPerformanceConfigurationAcquireInfoINTEL(
    VkPerformanceConfigurationTypeINTEL type
);

VkPipelineInfoKHR vscPipelineInfoKHR(
    VkPipeline pipeline
);

VkPipelineExecutableInfoKHR vscPipelineExecutableInfoKHR(
    VkPipeline pipeline,
    uint32_t executableIndex
);

VkPipelineShaderStageRequiredSubgroupSizeCreateInfo vscPipelineShaderStageRequiredSubgroupSizeCreateInfo(
    uint32_t requiredSubgroupSize
);

#define vscPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT vscPipelineShaderStageRequiredSubgroupSizeCreateInfo

VkSubpassShadingPipelineCreateInfoHUAWEI vscSubpassShadingPipelineCreateInfoHUAWEI(
    VkRenderPass renderPass,
    uint32_t subpass
);

VkMemoryOpaqueCaptureAddressAllocateInfo vscMemoryOpaqueCaptureAddressAllocateInfo(
    uint64_t opaqueCaptureAddress
);

#define vscMemoryOpaqueCaptureAddressAllocateInfoKHR vscMemoryOpaqueCaptureAddressAllocateInfo

VkDeviceMemoryOpaqueCaptureAddressInfo vscDeviceMemoryOpaqueCaptureAddressInfo(
    VkDeviceMemory memory
);

#define vscDeviceMemoryOpaqueCaptureAddressInfoKHR vscDeviceMemoryOpaqueCaptureAddressInfo

#define vscPipelineRasterizationLineStateCreateInfoEXT vscPipelineRasterizationLineStateCreateInfoKHR

VkPipelineCompilerControlCreateInfoAMD vscPipelineCompilerControlCreateInfoAMD(
    VkPipelineCompilerControlFlagsAMD compilerControlFlags
);

VkSamplerCustomBorderColorCreateInfoEXT vscSamplerCustomBorderColorCreateInfoEXT(
    VkClearColorValue customBorderColor,
    VkFormat format
);

VkSamplerBorderColorComponentMappingCreateInfoEXT vscSamplerBorderColorComponentMappingCreateInfoEXT(
    VkComponentMapping components,
    VkBool32 srgb
);

VkAccelerationStructureBuildGeometryInfoKHR vscAccelerationStructureBuildGeometryInfoKHR(
    VkAccelerationStructureTypeKHR type,
    VkBuildAccelerationStructureFlagsKHR flags,
    VkBuildAccelerationStructureModeKHR mode,
    VkAccelerationStructureKHR srcAccelerationStructure,
    VkAccelerationStructureKHR dstAccelerationStructure,
    uint32_t geometryCount,
    const VkAccelerationStructureGeometryKHR* pGeometries,
    const VkAccelerationStructureGeometryKHR* const* ppGeometries,
    VkDeviceOrHostAddressKHR scratchData
);

VkAccelerationStructureBuildRangeInfoKHR vscAccelerationStructureBuildRangeInfoKHR(
    uint32_t primitiveCount,
    uint32_t primitiveOffset,
    uint32_t firstVertex,
    uint32_t transformOffset
);

VkAccelerationStructureCreateInfoKHR vscAccelerationStructureCreateInfoKHR(
    VkAccelerationStructureCreateFlagsKHR createFlags,
    VkBuffer buffer,
    VkDeviceSize offset,
    VkDeviceSize size,
    VkAccelerationStructureTypeKHR type,
    VkDeviceAddress deviceAddress
);

VkAccelerationStructureDeviceAddressInfoKHR vscAccelerationStructureDeviceAddressInfoKHR(
    VkAccelerationStructureKHR accelerationStructure
);

VkAccelerationStructureVersionInfoKHR vscAccelerationStructureVersionInfoKHR(
    const uint8_t* pVersionData
);

VkCopyAccelerationStructureInfoKHR vscCopyAccelerationStructureInfoKHR(
    VkAccelerationStructureKHR src,
    VkAccelerationStructureKHR dst,
    VkCopyAccelerationStructureModeKHR mode
);

VkCopyAccelerationStructureToMemoryInfoKHR vscCopyAccelerationStructureToMemoryInfoKHR(
    VkAccelerationStructureKHR src,
    VkDeviceOrHostAddressKHR dst,
    VkCopyAccelerationStructureModeKHR mode
);

VkCopyMemoryToAccelerationStructureInfoKHR vscCopyMemoryToAccelerationStructureInfoKHR(
    VkDeviceOrHostAddressConstKHR src,
    VkAccelerationStructureKHR dst,
    VkCopyAccelerationStructureModeKHR mode
);

VkRayTracingPipelineInterfaceCreateInfoKHR vscRayTracingPipelineInterfaceCreateInfoKHR(
    uint32_t maxPipelineRayPayloadSize,
    uint32_t maxPipelineRayHitAttributeSize
);

VkPipelineLibraryCreateInfoKHR vscPipelineLibraryCreateInfoKHR(
    uint32_t libraryCount,
    const VkPipeline* pLibraries
);

VkRenderPassTransformBeginInfoQCOM vscRenderPassTransformBeginInfoQCOM(
    VkSurfaceTransformFlagBitsKHR transform
);

VkCopyCommandTransformInfoQCOM vscCopyCommandTransformInfoQCOM(
    VkSurfaceTransformFlagBitsKHR transform
);

VkCommandBufferInheritanceRenderPassTransformInfoQCOM vscCommandBufferInheritanceRenderPassTransformInfoQCOM(
    VkSurfaceTransformFlagBitsKHR transform,
    VkRect2D renderArea
);

VkDeviceDiagnosticsConfigCreateInfoNV vscDeviceDiagnosticsConfigCreateInfoNV(
    VkDeviceDiagnosticsConfigFlagsNV flags
);

VkCopyBufferInfo2 vscCopyBufferInfo2(
    VkBuffer srcBuffer,
    VkBuffer dstBuffer,
    uint32_t regionCount,
    const VkBufferCopy2* pRegions
);

#define vscCopyBufferInfo2KHR vscCopyBufferInfo2

VkCopyImageInfo2 vscCopyImageInfo2(
    VkImage srcImage,
    VkImageLayout srcImageLayout,
    VkImage dstImage,
    VkImageLayout dstImageLayout,
    uint32_t regionCount,
    const VkImageCopy2* pRegions
);

#define vscCopyImageInfo2KHR vscCopyImageInfo2

VkBlitImageInfo2 vscBlitImageInfo2(
    VkImage srcImage,
    VkImageLayout srcImageLayout,
    VkImage dstImage,
    VkImageLayout dstImageLayout,
    uint32_t regionCount,
    const VkImageBlit2* pRegions,
    VkFilter filter
);

#define vscBlitImageInfo2KHR vscBlitImageInfo2

VkCopyBufferToImageInfo2 vscCopyBufferToImageInfo2(
    VkBuffer srcBuffer,
    VkImage dstImage,
    VkImageLayout dstImageLayout,
    uint32_t regionCount,
    const VkBufferImageCopy2* pRegions
);

#define vscCopyBufferToImageInfo2KHR vscCopyBufferToImageInfo2

VkCopyImageToBufferInfo2 vscCopyImageToBufferInfo2(
    VkImage srcImage,
    VkImageLayout srcImageLayout,
    VkBuffer dstBuffer,
    uint32_t regionCount,
    const VkBufferImageCopy2* pRegions
);

#define vscCopyImageToBufferInfo2KHR vscCopyImageToBufferInfo2

VkResolveImageInfo2 vscResolveImageInfo2(
    VkImage srcImage,
    VkImageLayout srcImageLayout,
    VkImage dstImage,
    VkImageLayout dstImageLayout,
    uint32_t regionCount,
    const VkImageResolve2* pRegions
);

#define vscResolveImageInfo2KHR vscResolveImageInfo2

VkFragmentShadingRateAttachmentInfoKHR vscFragmentShadingRateAttachmentInfoKHR(
    const VkAttachmentReference2* pFragmentShadingRateAttachment,
    VkExtent2D shadingRateAttachmentTexelSize
);

VkAccelerationStructureBuildSizesInfoKHR vscAccelerationStructureBuildSizesInfoKHR(
    VkDeviceSize accelerationStructureSize,
    VkDeviceSize updateScratchSize,
    VkDeviceSize buildScratchSize
);

#define vscMutableDescriptorTypeCreateInfoVALVE vscMutableDescriptorTypeCreateInfoEXT

VkPipelineViewportDepthClipControlCreateInfoEXT vscPipelineViewportDepthClipControlCreateInfoEXT(
    VkBool32 negativeOneToOne
);

VkPipelineColorWriteCreateInfoEXT vscPipelineColorWriteCreateInfoEXT(
    uint32_t attachmentCount,
    const VkBool32* pColorWriteEnables
);

VkDependencyInfo vscDependencyInfo(
    VkDependencyFlags dependencyFlags,
    uint32_t memoryBarrierCount,
    const VkMemoryBarrier2* pMemoryBarriers,
    uint32_t bufferMemoryBarrierCount,
    const VkBufferMemoryBarrier2* pBufferMemoryBarriers,
    uint32_t imageMemoryBarrierCount,
    const VkImageMemoryBarrier2* pImageMemoryBarriers
);

#define vscDependencyInfoKHR vscDependencyInfo

VkSemaphoreSubmitInfo vscSemaphoreSubmitInfo(
    VkSemaphore semaphore,
    uint64_t value,
    VkPipelineStageFlags2 stageMask,
    uint32_t deviceIndex
);

#define vscSemaphoreSubmitInfoKHR vscSemaphoreSubmitInfo

VkCommandBufferSubmitInfo vscCommandBufferSubmitInfo(
    VkCommandBuffer commandBuffer,
    uint32_t deviceMask
);

#define vscCommandBufferSubmitInfoKHR vscCommandBufferSubmitInfo

VkSubmitInfo2 vscSubmitInfo2(
    VkSubmitFlags flags,
    uint32_t waitSemaphoreInfoCount,
    const VkSemaphoreSubmitInfo* pWaitSemaphoreInfos,
    uint32_t commandBufferInfoCount,
    const VkCommandBufferSubmitInfo* pCommandBufferInfos,
    uint32_t signalSemaphoreInfoCount,
    const VkSemaphoreSubmitInfo* pSignalSemaphoreInfos
);

#define vscSubmitInfo2KHR vscSubmitInfo2

VkCommandBufferInheritanceViewportScissorInfoNV vscCommandBufferInheritanceViewportScissorInfoNV(
    VkBool32 viewportScissor2D,
    uint32_t viewportDepthCount,
    const VkViewport* pViewportDepths
);

VkPipelineRasterizationProvokingVertexStateCreateInfoEXT vscPipelineRasterizationProvokingVertexStateCreateInfoEXT(
    VkProvokingVertexModeEXT provokingVertexMode
);

VkCuModuleCreateInfoNVX vscCuModuleCreateInfoNVX(
    size_t dataSize,
    const void* pData
);

VkCuFunctionCreateInfoNVX vscCuFunctionCreateInfoNVX(
    VkCuModuleNVX module,
    const char* pName
);

VkCuLaunchInfoNVX vscCuLaunchInfoNVX(
    VkCuFunctionNVX function,
    uint32_t gridDimX,
    uint32_t gridDimY,
    uint32_t gridDimZ,
    uint32_t blockDimX,
    uint32_t blockDimY,
    uint32_t blockDimZ,
    uint32_t sharedMemBytes,
    size_t paramCount,
    const void* const * pParams,
    size_t extraCount,
    const void* const * pExtras
);

VkAccelerationStructureMotionInfoNV vscAccelerationStructureMotionInfoNV(
    uint32_t maxInstances,
    VkAccelerationStructureMotionInfoFlagsNV flags
);

VkMemoryGetRemoteAddressInfoNV vscMemoryGetRemoteAddressInfoNV(
    VkDeviceMemory memory,
    VkExternalMemoryHandleTypeFlagBits handleType
);

VkPipelineRenderingCreateInfo vscPipelineRenderingCreateInfo(
    uint32_t viewMask,
    uint32_t colorAttachmentCount,
    const VkFormat* pColorAttachmentFormats,
    VkFormat depthAttachmentFormat,
    VkFormat stencilAttachmentFormat
);

#define vscPipelineRenderingCreateInfoKHR vscPipelineRenderingCreateInfo

VkRenderingInfo vscRenderingInfo(
    VkRenderingFlags flags,
    VkRect2D renderArea,
    uint32_t layerCount,
    uint32_t viewMask,
    uint32_t colorAttachmentCount,
    const VkRenderingAttachmentInfo* pColorAttachments,
    const VkRenderingAttachmentInfo* pDepthAttachment,
    const VkRenderingAttachmentInfo* pStencilAttachment
);

#define vscRenderingInfoKHR vscRenderingInfo

VkRenderingAttachmentInfo vscRenderingAttachmentInfo(
    VkImageView imageView,
    VkImageLayout imageLayout,
    VkResolveModeFlagBits resolveMode,
    VkImageView resolveImageView,
    VkImageLayout resolveImageLayout,
    VkAttachmentLoadOp loadOp,
    VkAttachmentStoreOp storeOp,
    VkClearValue clearValue
);

#define vscRenderingAttachmentInfoKHR vscRenderingAttachmentInfo

VkRenderingFragmentShadingRateAttachmentInfoKHR vscRenderingFragmentShadingRateAttachmentInfoKHR(
    VkImageView imageView,
    VkImageLayout imageLayout,
    VkExtent2D shadingRateAttachmentTexelSize
);

VkRenderingFragmentDensityMapAttachmentInfoEXT vscRenderingFragmentDensityMapAttachmentInfoEXT(
    VkImageView imageView,
    VkImageLayout imageLayout
);

VkCommandBufferInheritanceRenderingInfo vscCommandBufferInheritanceRenderingInfo(
    VkRenderingFlags flags,
    uint32_t viewMask,
    uint32_t colorAttachmentCount,
    const VkFormat* pColorAttachmentFormats,
    VkFormat depthAttachmentFormat,
    VkFormat stencilAttachmentFormat,
    VkSampleCountFlagBits rasterizationSamples
);

#define vscCommandBufferInheritanceRenderingInfoKHR vscCommandBufferInheritanceRenderingInfo

VkAttachmentSampleCountInfoAMD vscAttachmentSampleCountInfoAMD(
    uint32_t colorAttachmentCount,
    const VkSampleCountFlagBits* pColorAttachmentSamples,
    VkSampleCountFlagBits depthStencilAttachmentSamples
);

#define vscAttachmentSampleCountInfoNV vscAttachmentSampleCountInfoAMD

VkMultiviewPerViewAttributesInfoNVX vscMultiviewPerViewAttributesInfoNVX(
    VkBool32 perViewAttributes,
    VkBool32 perViewAttributesPositionXOnly
);

VkImageViewMinLodCreateInfoEXT vscImageViewMinLodCreateInfoEXT(
    float minLod
);

#endif