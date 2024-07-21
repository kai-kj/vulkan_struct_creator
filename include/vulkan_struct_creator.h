#ifndef VULKAN_STRUCT_CREATOR_H
#define VULKAN_STRUCT_CREATOR_H

#include <vulkan/vk_platform.h>
#include <vulkan/vulkan.h>

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

VkSubmitInfo vscSubmitInfo(
    uint32_t waitSemaphoreCount,
    const VkSemaphore* pWaitSemaphores,
    const VkPipelineStageFlags* pWaitDstStageMask,
    uint32_t commandBufferCount,
    const VkCommandBuffer* pCommandBuffers,
    uint32_t signalSemaphoreCount,
    const VkSemaphore* pSignalSemaphores
);

VkDevicePrivateDataCreateInfo vscDevicePrivateDataCreateInfo(
    uint32_t privateDataSlotRequestCount
);

VkPrivateDataSlotCreateInfo vscPrivateDataSlotCreateInfo(
    VkPrivateDataSlotCreateFlags flags
);

VkPhysicalDeviceExternalImageFormatInfo vscPhysicalDeviceExternalImageFormatInfo(
    VkExternalMemoryHandleTypeFlagBits handleType
);

VkPhysicalDeviceExternalBufferInfo vscPhysicalDeviceExternalBufferInfo(
    VkBufferCreateFlags flags,
    VkBufferUsageFlags usage,
    VkExternalMemoryHandleTypeFlagBits handleType
);

VkExternalMemoryImageCreateInfo vscExternalMemoryImageCreateInfo(
    VkExternalMemoryHandleTypeFlags handleTypes
);

VkExternalMemoryBufferCreateInfo vscExternalMemoryBufferCreateInfo(
    VkExternalMemoryHandleTypeFlags handleTypes
);

VkExportMemoryAllocateInfo vscExportMemoryAllocateInfo(
    VkExternalMemoryHandleTypeFlags handleTypes
);

VkPhysicalDeviceExternalSemaphoreInfo vscPhysicalDeviceExternalSemaphoreInfo(
    VkExternalSemaphoreHandleTypeFlagBits handleType
);

VkExportSemaphoreCreateInfo vscExportSemaphoreCreateInfo(
    VkExternalSemaphoreHandleTypeFlags handleTypes
);

VkPhysicalDeviceExternalFenceInfo vscPhysicalDeviceExternalFenceInfo(
    VkExternalFenceHandleTypeFlagBits handleType
);

VkExportFenceCreateInfo vscExportFenceCreateInfo(
    VkExternalFenceHandleTypeFlags handleTypes
);

VkRenderPassMultiviewCreateInfo vscRenderPassMultiviewCreateInfo(
    uint32_t subpassCount,
    const uint32_t* pViewMasks,
    uint32_t dependencyCount,
    const int32_t* pViewOffsets,
    uint32_t correlationMaskCount,
    const uint32_t* pCorrelationMasks
);

VkMemoryAllocateFlagsInfo vscMemoryAllocateFlagsInfo(
    VkMemoryAllocateFlags flags,
    uint32_t deviceMask
);

VkBindBufferMemoryInfo vscBindBufferMemoryInfo(
    VkBuffer buffer,
    VkDeviceMemory memory,
    VkDeviceSize memoryOffset
);

VkBindBufferMemoryDeviceGroupInfo vscBindBufferMemoryDeviceGroupInfo(
    uint32_t deviceIndexCount,
    const uint32_t* pDeviceIndices
);

VkBindImageMemoryInfo vscBindImageMemoryInfo(
    VkImage image,
    VkDeviceMemory memory,
    VkDeviceSize memoryOffset
);

VkBindImageMemoryDeviceGroupInfo vscBindImageMemoryDeviceGroupInfo(
    uint32_t deviceIndexCount,
    const uint32_t* pDeviceIndices,
    uint32_t splitInstanceBindRegionCount,
    const VkRect2D* pSplitInstanceBindRegions
);

VkDeviceGroupRenderPassBeginInfo vscDeviceGroupRenderPassBeginInfo(
    uint32_t deviceMask,
    uint32_t deviceRenderAreaCount,
    const VkRect2D* pDeviceRenderAreas
);

VkDeviceGroupCommandBufferBeginInfo vscDeviceGroupCommandBufferBeginInfo(
    uint32_t deviceMask
);

VkDeviceGroupSubmitInfo vscDeviceGroupSubmitInfo(
    uint32_t waitSemaphoreCount,
    const uint32_t* pWaitSemaphoreDeviceIndices,
    uint32_t commandBufferCount,
    const uint32_t* pCommandBufferDeviceMasks,
    uint32_t signalSemaphoreCount,
    const uint32_t* pSignalSemaphoreDeviceIndices
);

VkDeviceGroupBindSparseInfo vscDeviceGroupBindSparseInfo(
    uint32_t resourceDeviceIndex,
    uint32_t memoryDeviceIndex
);

VkDeviceGroupDeviceCreateInfo vscDeviceGroupDeviceCreateInfo(
    uint32_t physicalDeviceCount,
    const VkPhysicalDevice* pPhysicalDevices
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

VkRenderPassInputAttachmentAspectCreateInfo vscRenderPassInputAttachmentAspectCreateInfo(
    uint32_t aspectReferenceCount,
    const VkInputAttachmentAspectReference* pAspectReferences
);

VkMemoryDedicatedAllocateInfo vscMemoryDedicatedAllocateInfo(
    VkImage image,
    VkBuffer buffer
);

VkImageViewUsageCreateInfo vscImageViewUsageCreateInfo(
    VkImageUsageFlags usage
);

VkPipelineTessellationDomainOriginStateCreateInfo vscPipelineTessellationDomainOriginStateCreateInfo(
    VkTessellationDomainOrigin domainOrigin
);

VkSamplerYcbcrConversionInfo vscSamplerYcbcrConversionInfo(
    VkSamplerYcbcrConversion conversion
);

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

VkBindImagePlaneMemoryInfo vscBindImagePlaneMemoryInfo(
    VkImageAspectFlagBits planeAspect
);

VkImagePlaneMemoryRequirementsInfo vscImagePlaneMemoryRequirementsInfo(
    VkImageAspectFlagBits planeAspect
);

VkProtectedSubmitInfo vscProtectedSubmitInfo(
    VkBool32 protectedSubmit
);

VkSamplerReductionModeCreateInfo vscSamplerReductionModeCreateInfo(
    VkSamplerReductionMode reductionMode
);

VkDescriptorPoolInlineUniformBlockCreateInfo vscDescriptorPoolInlineUniformBlockCreateInfo(
    uint32_t maxInlineUniformBlockBindings
);

VkImageFormatListCreateInfo vscImageFormatListCreateInfo(
    uint32_t viewFormatCount,
    const VkFormat* pViewFormats
);

VkDescriptorSetLayoutBindingFlagsCreateInfo vscDescriptorSetLayoutBindingFlagsCreateInfo(
    uint32_t bindingCount,
    const VkDescriptorBindingFlags* pBindingFlags
);

VkDescriptorSetVariableDescriptorCountAllocateInfo vscDescriptorSetVariableDescriptorCountAllocateInfo(
    uint32_t descriptorSetCount,
    const uint32_t* pDescriptorCounts
);

VkSubpassBeginInfo vscSubpassBeginInfo(
    VkSubpassContents contents
);

VkSubpassEndInfo vscSubpassEndInfo(

);

VkSemaphoreTypeCreateInfo vscSemaphoreTypeCreateInfo(
    VkSemaphoreType semaphoreType,
    uint64_t initialValue
);

VkTimelineSemaphoreSubmitInfo vscTimelineSemaphoreSubmitInfo(
    uint32_t waitSemaphoreValueCount,
    const uint64_t* pWaitSemaphoreValues,
    uint32_t signalSemaphoreValueCount,
    const uint64_t* pSignalSemaphoreValues
);

VkSemaphoreWaitInfo vscSemaphoreWaitInfo(
    VkSemaphoreWaitFlags flags,
    uint32_t semaphoreCount,
    const VkSemaphore* pSemaphores,
    const uint64_t* pValues
);

VkSemaphoreSignalInfo vscSemaphoreSignalInfo(
    VkSemaphore semaphore,
    uint64_t value
);

VkImageStencilUsageCreateInfo vscImageStencilUsageCreateInfo(
    VkImageUsageFlags stencilUsage
);

VkBufferDeviceAddressInfo vscBufferDeviceAddressInfo(
    VkBuffer buffer
);

VkBufferOpaqueCaptureAddressCreateInfo vscBufferOpaqueCaptureAddressCreateInfo(
    uint64_t opaqueCaptureAddress
);

VkFramebufferAttachmentsCreateInfo vscFramebufferAttachmentsCreateInfo(
    uint32_t attachmentImageInfoCount,
    const VkFramebufferAttachmentImageInfo* pAttachmentImageInfos
);

VkFramebufferAttachmentImageInfo vscFramebufferAttachmentImageInfo(
    VkImageCreateFlags flags,
    VkImageUsageFlags usage,
    uint32_t width,
    uint32_t height,
    uint32_t layerCount,
    uint32_t viewFormatCount,
    const VkFormat* pViewFormats
);

VkRenderPassAttachmentBeginInfo vscRenderPassAttachmentBeginInfo(
    uint32_t attachmentCount,
    const VkImageView* pAttachments
);

VkPipelineCreationFeedbackCreateInfo vscPipelineCreationFeedbackCreateInfo(
    VkPipelineCreationFeedback* pPipelineCreationFeedback,
    uint32_t pipelineStageCreationFeedbackCount,
    VkPipelineCreationFeedback* pPipelineStageCreationFeedbacks
);

VkPipelineShaderStageRequiredSubgroupSizeCreateInfo vscPipelineShaderStageRequiredSubgroupSizeCreateInfo(
    uint32_t requiredSubgroupSize
);

VkMemoryOpaqueCaptureAddressAllocateInfo vscMemoryOpaqueCaptureAddressAllocateInfo(
    uint64_t opaqueCaptureAddress
);

VkDeviceMemoryOpaqueCaptureAddressInfo vscDeviceMemoryOpaqueCaptureAddressInfo(
    VkDeviceMemory memory
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

VkSemaphoreSubmitInfo vscSemaphoreSubmitInfo(
    VkSemaphore semaphore,
    uint64_t value,
    VkPipelineStageFlags2 stageMask,
    uint32_t deviceIndex
);

VkCommandBufferSubmitInfo vscCommandBufferSubmitInfo(
    VkCommandBuffer commandBuffer,
    uint32_t deviceMask
);

VkPipelineRenderingCreateInfo vscPipelineRenderingCreateInfo(
    uint32_t viewMask,
    uint32_t colorAttachmentCount,
    const VkFormat* pColorAttachmentFormats,
    VkFormat depthAttachmentFormat,
    VkFormat stencilAttachmentFormat
);

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

VkCommandBufferInheritanceRenderingInfo vscCommandBufferInheritanceRenderingInfo(
    VkRenderingFlags flags,
    uint32_t viewMask,
    uint32_t colorAttachmentCount,
    const VkFormat* pColorAttachmentFormats,
    VkFormat depthAttachmentFormat,
    VkFormat stencilAttachmentFormat,
    VkSampleCountFlagBits rasterizationSamples
);

#endif