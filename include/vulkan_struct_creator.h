#ifndef VULKAN_STRUCT_CREATOR_H
#define VULKAN_STRUCT_CREATOR_H

#include <vulkan/vk_platform.h>
#include <vulkan/vulkan.h>

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

VkDevicePrivateDataCreateInfo vscDevicePrivateDataCreateInfo(
    uint32_t privateDataSlotRequestCount
);

VkPrivateDataSlotCreateInfo vscPrivateDataSlotCreateInfo(
    VkPrivateDataSlotCreateFlags flags
);

VkExternalMemoryImageCreateInfo vscExternalMemoryImageCreateInfo(
    VkExternalMemoryHandleTypeFlags handleTypes
);

VkExternalMemoryBufferCreateInfo vscExternalMemoryBufferCreateInfo(
    VkExternalMemoryHandleTypeFlags handleTypes
);

VkExportSemaphoreCreateInfo vscExportSemaphoreCreateInfo(
    VkExternalSemaphoreHandleTypeFlags handleTypes
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

VkImageViewUsageCreateInfo vscImageViewUsageCreateInfo(
    VkImageUsageFlags usage
);

VkPipelineTessellationDomainOriginStateCreateInfo vscPipelineTessellationDomainOriginStateCreateInfo(
    VkTessellationDomainOrigin domainOrigin
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

VkSemaphoreTypeCreateInfo vscSemaphoreTypeCreateInfo(
    VkSemaphoreType semaphoreType,
    uint64_t initialValue
);

VkImageStencilUsageCreateInfo vscImageStencilUsageCreateInfo(
    VkImageUsageFlags stencilUsage
);

VkBufferOpaqueCaptureAddressCreateInfo vscBufferOpaqueCaptureAddressCreateInfo(
    uint64_t opaqueCaptureAddress
);

VkFramebufferAttachmentsCreateInfo vscFramebufferAttachmentsCreateInfo(
    uint32_t attachmentImageInfoCount,
    const VkFramebufferAttachmentImageInfo* pAttachmentImageInfos
);

VkPipelineCreationFeedbackCreateInfo vscPipelineCreationFeedbackCreateInfo(
    VkPipelineCreationFeedback* pPipelineCreationFeedback,
    uint32_t pipelineStageCreationFeedbackCount,
    VkPipelineCreationFeedback* pPipelineStageCreationFeedbacks
);

VkPipelineShaderStageRequiredSubgroupSizeCreateInfo vscPipelineShaderStageRequiredSubgroupSizeCreateInfo(
    uint32_t requiredSubgroupSize
);

VkPipelineRenderingCreateInfo vscPipelineRenderingCreateInfo(
    uint32_t viewMask,
    uint32_t colorAttachmentCount,
    const VkFormat* pColorAttachmentFormats,
    VkFormat depthAttachmentFormat,
    VkFormat stencilAttachmentFormat
);

#endif