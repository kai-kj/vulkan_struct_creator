#include "vulkan_struct_creator.h"

VkDeviceQueueCreateInfo vscDeviceQueueCreateInfo(
    VkDeviceQueueCreateFlags flags,
    uint32_t queueFamilyIndex,
    uint32_t queueCount,
    const float* pQueuePriorities
) {
    return (VkDeviceQueueCreateInfo){
        .sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .queueFamilyIndex = queueFamilyIndex,
        .queueCount = queueCount,
        .pQueuePriorities = pQueuePriorities,
    };
}

VkDeviceCreateInfo vscDeviceCreateInfo(
    VkDeviceCreateFlags flags,
    uint32_t queueCreateInfoCount,
    const VkDeviceQueueCreateInfo* pQueueCreateInfos,
    uint32_t enabledLayerCount,
    const char* const* ppEnabledLayerNames,
    uint32_t enabledExtensionCount,
    const char* const* ppEnabledExtensionNames,
    const VkPhysicalDeviceFeatures* pEnabledFeatures
) {
    return (VkDeviceCreateInfo){
        .sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .queueCreateInfoCount = queueCreateInfoCount,
        .pQueueCreateInfos = pQueueCreateInfos,
        .enabledLayerCount = enabledLayerCount,
        .ppEnabledLayerNames = ppEnabledLayerNames,
        .enabledExtensionCount = enabledExtensionCount,
        .ppEnabledExtensionNames = ppEnabledExtensionNames,
        .pEnabledFeatures = pEnabledFeatures,
    };
}

VkInstanceCreateInfo vscInstanceCreateInfo(
    VkInstanceCreateFlags flags,
    const VkApplicationInfo* pApplicationInfo,
    uint32_t enabledLayerCount,
    const char* const* ppEnabledLayerNames,
    uint32_t enabledExtensionCount,
    const char* const* ppEnabledExtensionNames
) {
    return (VkInstanceCreateInfo){
        .sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .pApplicationInfo = pApplicationInfo,
        .enabledLayerCount = enabledLayerCount,
        .ppEnabledLayerNames = ppEnabledLayerNames,
        .enabledExtensionCount = enabledExtensionCount,
        .ppEnabledExtensionNames = ppEnabledExtensionNames,
    };
}

VkBufferCreateInfo vscBufferCreateInfo(
    VkBufferCreateFlags flags,
    VkDeviceSize size,
    VkBufferUsageFlags usage,
    VkSharingMode sharingMode,
    uint32_t queueFamilyIndexCount,
    const uint32_t* pQueueFamilyIndices
) {
    return (VkBufferCreateInfo){
        .sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .size = size,
        .usage = usage,
        .sharingMode = sharingMode,
        .queueFamilyIndexCount = queueFamilyIndexCount,
        .pQueueFamilyIndices = pQueueFamilyIndices,
    };
}

VkBufferViewCreateInfo vscBufferViewCreateInfo(
    VkBufferViewCreateFlags flags,
    VkBuffer buffer,
    VkFormat format,
    VkDeviceSize offset,
    VkDeviceSize range
) {
    return (VkBufferViewCreateInfo){
        .sType = VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .buffer = buffer,
        .format = format,
        .offset = offset,
        .range = range,
    };
}

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
) {
    return (VkImageCreateInfo){
        .sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .imageType = imageType,
        .format = format,
        .extent = extent,
        .mipLevels = mipLevels,
        .arrayLayers = arrayLayers,
        .samples = samples,
        .tiling = tiling,
        .usage = usage,
        .sharingMode = sharingMode,
        .queueFamilyIndexCount = queueFamilyIndexCount,
        .pQueueFamilyIndices = pQueueFamilyIndices,
        .initialLayout = initialLayout,
    };
}

VkImageViewCreateInfo vscImageViewCreateInfo(
    VkImageViewCreateFlags flags,
    VkImage image,
    VkImageViewType viewType,
    VkFormat format,
    VkComponentMapping components,
    VkImageSubresourceRange subresourceRange
) {
    return (VkImageViewCreateInfo){
        .sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .image = image,
        .viewType = viewType,
        .format = format,
        .components = components,
        .subresourceRange = subresourceRange,
    };
}

VkShaderModuleCreateInfo vscShaderModuleCreateInfo(
    VkShaderModuleCreateFlags flags,
    size_t codeSize,
    const uint32_t* pCode
) {
    return (VkShaderModuleCreateInfo){
        .sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .codeSize = codeSize,
        .pCode = pCode,
    };
}

VkDescriptorSetLayoutCreateInfo vscDescriptorSetLayoutCreateInfo(
    VkDescriptorSetLayoutCreateFlags flags,
    uint32_t bindingCount,
    const VkDescriptorSetLayoutBinding* pBindings
) {
    return (VkDescriptorSetLayoutCreateInfo){
        .sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .bindingCount = bindingCount,
        .pBindings = pBindings,
    };
}

VkDescriptorPoolCreateInfo vscDescriptorPoolCreateInfo(
    VkDescriptorPoolCreateFlags flags,
    uint32_t maxSets,
    uint32_t poolSizeCount,
    const VkDescriptorPoolSize* pPoolSizes
) {
    return (VkDescriptorPoolCreateInfo){
        .sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .maxSets = maxSets,
        .poolSizeCount = poolSizeCount,
        .pPoolSizes = pPoolSizes,
    };
}

VkPipelineShaderStageCreateInfo vscPipelineShaderStageCreateInfo(
    VkPipelineShaderStageCreateFlags flags,
    VkShaderStageFlagBits stage,
    VkShaderModule module,
    const char* pName,
    const VkSpecializationInfo* pSpecializationInfo
) {
    return (VkPipelineShaderStageCreateInfo){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .stage = stage,
        .module = module,
        .pName = pName,
        .pSpecializationInfo = pSpecializationInfo,
    };
}

VkComputePipelineCreateInfo vscComputePipelineCreateInfo(
    VkPipelineCreateFlags flags,
    VkPipelineShaderStageCreateInfo stage,
    VkPipelineLayout layout,
    VkPipeline basePipelineHandle,
    int32_t basePipelineIndex
) {
    return (VkComputePipelineCreateInfo){
        .sType = VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .stage = stage,
        .layout = layout,
        .basePipelineHandle = basePipelineHandle,
        .basePipelineIndex = basePipelineIndex,
    };
}

VkPipelineVertexInputStateCreateInfo vscPipelineVertexInputStateCreateInfo(
    VkPipelineVertexInputStateCreateFlags flags,
    uint32_t vertexBindingDescriptionCount,
    const VkVertexInputBindingDescription* pVertexBindingDescriptions,
    uint32_t vertexAttributeDescriptionCount,
    const VkVertexInputAttributeDescription* pVertexAttributeDescriptions
) {
    return (VkPipelineVertexInputStateCreateInfo){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .vertexBindingDescriptionCount = vertexBindingDescriptionCount,
        .pVertexBindingDescriptions = pVertexBindingDescriptions,
        .vertexAttributeDescriptionCount = vertexAttributeDescriptionCount,
        .pVertexAttributeDescriptions = pVertexAttributeDescriptions,
    };
}

VkPipelineInputAssemblyStateCreateInfo vscPipelineInputAssemblyStateCreateInfo(
    VkPipelineInputAssemblyStateCreateFlags flags,
    VkPrimitiveTopology topology,
    VkBool32 primitiveRestartEnable
) {
    return (VkPipelineInputAssemblyStateCreateInfo){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .topology = topology,
        .primitiveRestartEnable = primitiveRestartEnable,
    };
}

VkPipelineTessellationStateCreateInfo vscPipelineTessellationStateCreateInfo(
    VkPipelineTessellationStateCreateFlags flags,
    uint32_t patchControlPoints
) {
    return (VkPipelineTessellationStateCreateInfo){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .patchControlPoints = patchControlPoints,
    };
}

VkPipelineViewportStateCreateInfo vscPipelineViewportStateCreateInfo(
    VkPipelineViewportStateCreateFlags flags,
    uint32_t viewportCount,
    const VkViewport* pViewports,
    uint32_t scissorCount,
    const VkRect2D* pScissors
) {
    return (VkPipelineViewportStateCreateInfo){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .viewportCount = viewportCount,
        .pViewports = pViewports,
        .scissorCount = scissorCount,
        .pScissors = pScissors,
    };
}

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
) {
    return (VkPipelineRasterizationStateCreateInfo){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .depthClampEnable = depthClampEnable,
        .rasterizerDiscardEnable = rasterizerDiscardEnable,
        .polygonMode = polygonMode,
        .cullMode = cullMode,
        .frontFace = frontFace,
        .depthBiasEnable = depthBiasEnable,
        .depthBiasConstantFactor = depthBiasConstantFactor,
        .depthBiasClamp = depthBiasClamp,
        .depthBiasSlopeFactor = depthBiasSlopeFactor,
        .lineWidth = lineWidth,
    };
}

VkPipelineMultisampleStateCreateInfo vscPipelineMultisampleStateCreateInfo(
    VkPipelineMultisampleStateCreateFlags flags,
    VkSampleCountFlagBits rasterizationSamples,
    VkBool32 sampleShadingEnable,
    float minSampleShading,
    const VkSampleMask* pSampleMask,
    VkBool32 alphaToCoverageEnable,
    VkBool32 alphaToOneEnable
) {
    return (VkPipelineMultisampleStateCreateInfo){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .rasterizationSamples = rasterizationSamples,
        .sampleShadingEnable = sampleShadingEnable,
        .minSampleShading = minSampleShading,
        .pSampleMask = pSampleMask,
        .alphaToCoverageEnable = alphaToCoverageEnable,
        .alphaToOneEnable = alphaToOneEnable,
    };
}

VkPipelineDynamicStateCreateInfo vscPipelineDynamicStateCreateInfo(
    VkPipelineDynamicStateCreateFlags flags,
    uint32_t dynamicStateCount,
    const VkDynamicState* pDynamicStates
) {
    return (VkPipelineDynamicStateCreateInfo){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .dynamicStateCount = dynamicStateCount,
        .pDynamicStates = pDynamicStates,
    };
}

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
) {
    return (VkPipelineDepthStencilStateCreateInfo){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .depthTestEnable = depthTestEnable,
        .depthWriteEnable = depthWriteEnable,
        .depthCompareOp = depthCompareOp,
        .depthBoundsTestEnable = depthBoundsTestEnable,
        .stencilTestEnable = stencilTestEnable,
        .front = front,
        .back = back,
        .minDepthBounds = minDepthBounds,
        .maxDepthBounds = maxDepthBounds,
    };
}

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
) {
    return (VkGraphicsPipelineCreateInfo){
        .sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .stageCount = stageCount,
        .pStages = pStages,
        .pVertexInputState = pVertexInputState,
        .pInputAssemblyState = pInputAssemblyState,
        .pTessellationState = pTessellationState,
        .pViewportState = pViewportState,
        .pRasterizationState = pRasterizationState,
        .pMultisampleState = pMultisampleState,
        .pDepthStencilState = pDepthStencilState,
        .pColorBlendState = pColorBlendState,
        .pDynamicState = pDynamicState,
        .layout = layout,
        .renderPass = renderPass,
        .subpass = subpass,
        .basePipelineHandle = basePipelineHandle,
        .basePipelineIndex = basePipelineIndex,
    };
}

VkPipelineCacheCreateInfo vscPipelineCacheCreateInfo(
    VkPipelineCacheCreateFlags flags,
    size_t initialDataSize,
    const void* pInitialData
) {
    return (VkPipelineCacheCreateInfo){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .initialDataSize = initialDataSize,
        .pInitialData = pInitialData,
    };
}

VkPipelineLayoutCreateInfo vscPipelineLayoutCreateInfo(
    VkPipelineLayoutCreateFlags flags,
    uint32_t setLayoutCount,
    const VkDescriptorSetLayout* pSetLayouts,
    uint32_t pushConstantRangeCount,
    const VkPushConstantRange* pPushConstantRanges
) {
    return (VkPipelineLayoutCreateInfo){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .setLayoutCount = setLayoutCount,
        .pSetLayouts = pSetLayouts,
        .pushConstantRangeCount = pushConstantRangeCount,
        .pPushConstantRanges = pPushConstantRanges,
    };
}

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
) {
    return (VkSamplerCreateInfo){
        .sType = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .magFilter = magFilter,
        .minFilter = minFilter,
        .mipmapMode = mipmapMode,
        .addressModeU = addressModeU,
        .addressModeV = addressModeV,
        .addressModeW = addressModeW,
        .mipLodBias = mipLodBias,
        .anisotropyEnable = anisotropyEnable,
        .maxAnisotropy = maxAnisotropy,
        .compareEnable = compareEnable,
        .compareOp = compareOp,
        .minLod = minLod,
        .maxLod = maxLod,
        .borderColor = borderColor,
        .unnormalizedCoordinates = unnormalizedCoordinates,
    };
}

VkCommandPoolCreateInfo vscCommandPoolCreateInfo(
    VkCommandPoolCreateFlags flags,
    uint32_t queueFamilyIndex
) {
    return (VkCommandPoolCreateInfo){
        .sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .queueFamilyIndex = queueFamilyIndex,
    };
}

VkRenderPassCreateInfo vscRenderPassCreateInfo(
    VkRenderPassCreateFlags flags,
    uint32_t attachmentCount,
    const VkAttachmentDescription* pAttachments,
    uint32_t subpassCount,
    const VkSubpassDescription* pSubpasses,
    uint32_t dependencyCount,
    const VkSubpassDependency* pDependencies
) {
    return (VkRenderPassCreateInfo){
        .sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .attachmentCount = attachmentCount,
        .pAttachments = pAttachments,
        .subpassCount = subpassCount,
        .pSubpasses = pSubpasses,
        .dependencyCount = dependencyCount,
        .pDependencies = pDependencies,
    };
}

VkEventCreateInfo vscEventCreateInfo(
    VkEventCreateFlags flags
) {
    return (VkEventCreateInfo){
        .sType = VK_STRUCTURE_TYPE_EVENT_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
    };
}

VkFenceCreateInfo vscFenceCreateInfo(
    VkFenceCreateFlags flags
) {
    return (VkFenceCreateInfo){
        .sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
    };
}

VkSemaphoreCreateInfo vscSemaphoreCreateInfo(
    VkSemaphoreCreateFlags flags
) {
    return (VkSemaphoreCreateInfo){
        .sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
    };
}

VkQueryPoolCreateInfo vscQueryPoolCreateInfo(
    VkQueryPoolCreateFlags flags,
    VkQueryType queryType,
    uint32_t queryCount,
    VkQueryPipelineStatisticFlags pipelineStatistics
) {
    return (VkQueryPoolCreateInfo){
        .sType = VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .queryType = queryType,
        .queryCount = queryCount,
        .pipelineStatistics = pipelineStatistics,
    };
}

VkFramebufferCreateInfo vscFramebufferCreateInfo(
    VkFramebufferCreateFlags flags,
    VkRenderPass renderPass,
    uint32_t attachmentCount,
    const VkImageView* pAttachments,
    uint32_t width,
    uint32_t height,
    uint32_t layers
) {
    return (VkFramebufferCreateInfo){
        .sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .renderPass = renderPass,
        .attachmentCount = attachmentCount,
        .pAttachments = pAttachments,
        .width = width,
        .height = height,
        .layers = layers,
    };
}

VkDevicePrivateDataCreateInfo vscDevicePrivateDataCreateInfo(
    uint32_t privateDataSlotRequestCount
) {
    return (VkDevicePrivateDataCreateInfo){
        .sType = VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO,
        .pNext = NULL,
        .privateDataSlotRequestCount = privateDataSlotRequestCount,
    };
}

VkPrivateDataSlotCreateInfo vscPrivateDataSlotCreateInfo(
    VkPrivateDataSlotCreateFlags flags
) {
    return (VkPrivateDataSlotCreateInfo){
        .sType = VK_STRUCTURE_TYPE_PRIVATE_DATA_SLOT_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
    };
}

VkExternalMemoryImageCreateInfo vscExternalMemoryImageCreateInfo(
    VkExternalMemoryHandleTypeFlags handleTypes
) {
    return (VkExternalMemoryImageCreateInfo){
        .sType = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO,
        .pNext = NULL,
        .handleTypes = handleTypes,
    };
}

VkExternalMemoryBufferCreateInfo vscExternalMemoryBufferCreateInfo(
    VkExternalMemoryHandleTypeFlags handleTypes
) {
    return (VkExternalMemoryBufferCreateInfo){
        .sType = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO,
        .pNext = NULL,
        .handleTypes = handleTypes,
    };
}

VkExportSemaphoreCreateInfo vscExportSemaphoreCreateInfo(
    VkExternalSemaphoreHandleTypeFlags handleTypes
) {
    return (VkExportSemaphoreCreateInfo){
        .sType = VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO,
        .pNext = NULL,
        .handleTypes = handleTypes,
    };
}

VkExportFenceCreateInfo vscExportFenceCreateInfo(
    VkExternalFenceHandleTypeFlags handleTypes
) {
    return (VkExportFenceCreateInfo){
        .sType = VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO,
        .pNext = NULL,
        .handleTypes = handleTypes,
    };
}

VkRenderPassMultiviewCreateInfo vscRenderPassMultiviewCreateInfo(
    uint32_t subpassCount,
    const uint32_t* pViewMasks,
    uint32_t dependencyCount,
    const int32_t* pViewOffsets,
    uint32_t correlationMaskCount,
    const uint32_t* pCorrelationMasks
) {
    return (VkRenderPassMultiviewCreateInfo){
        .sType = VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO,
        .pNext = NULL,
        .subpassCount = subpassCount,
        .pViewMasks = pViewMasks,
        .dependencyCount = dependencyCount,
        .pViewOffsets = pViewOffsets,
        .correlationMaskCount = correlationMaskCount,
        .pCorrelationMasks = pCorrelationMasks,
    };
}

VkDeviceGroupDeviceCreateInfo vscDeviceGroupDeviceCreateInfo(
    uint32_t physicalDeviceCount,
    const VkPhysicalDevice* pPhysicalDevices
) {
    return (VkDeviceGroupDeviceCreateInfo){
        .sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO,
        .pNext = NULL,
        .physicalDeviceCount = physicalDeviceCount,
        .pPhysicalDevices = pPhysicalDevices,
    };
}

VkDescriptorUpdateTemplateCreateInfo vscDescriptorUpdateTemplateCreateInfo(
    VkDescriptorUpdateTemplateCreateFlags flags,
    uint32_t descriptorUpdateEntryCount,
    const VkDescriptorUpdateTemplateEntry* pDescriptorUpdateEntries,
    VkDescriptorUpdateTemplateType templateType,
    VkDescriptorSetLayout descriptorSetLayout,
    VkPipelineBindPoint pipelineBindPoint,
    VkPipelineLayout pipelineLayout,
    uint32_t set
) {
    return (VkDescriptorUpdateTemplateCreateInfo){
        .sType = VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO,
        .pNext = NULL,
        .flags = flags,
        .descriptorUpdateEntryCount = descriptorUpdateEntryCount,
        .pDescriptorUpdateEntries = pDescriptorUpdateEntries,
        .templateType = templateType,
        .descriptorSetLayout = descriptorSetLayout,
        .pipelineBindPoint = pipelineBindPoint,
        .pipelineLayout = pipelineLayout,
        .set = set,
    };
}

VkRenderPassInputAttachmentAspectCreateInfo vscRenderPassInputAttachmentAspectCreateInfo(
    uint32_t aspectReferenceCount,
    const VkInputAttachmentAspectReference* pAspectReferences
) {
    return (VkRenderPassInputAttachmentAspectCreateInfo){
        .sType = VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO,
        .pNext = NULL,
        .aspectReferenceCount = aspectReferenceCount,
        .pAspectReferences = pAspectReferences,
    };
}

VkImageViewUsageCreateInfo vscImageViewUsageCreateInfo(
    VkImageUsageFlags usage
) {
    return (VkImageViewUsageCreateInfo){
        .sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO,
        .pNext = NULL,
        .usage = usage,
    };
}

VkPipelineTessellationDomainOriginStateCreateInfo vscPipelineTessellationDomainOriginStateCreateInfo(
    VkTessellationDomainOrigin domainOrigin
) {
    return (VkPipelineTessellationDomainOriginStateCreateInfo){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO,
        .pNext = NULL,
        .domainOrigin = domainOrigin,
    };
}

VkSamplerYcbcrConversionCreateInfo vscSamplerYcbcrConversionCreateInfo(
    VkFormat format,
    VkSamplerYcbcrModelConversion ycbcrModel,
    VkSamplerYcbcrRange ycbcrRange,
    VkComponentMapping components,
    VkChromaLocation xChromaOffset,
    VkChromaLocation yChromaOffset,
    VkFilter chromaFilter,
    VkBool32 forceExplicitReconstruction
) {
    return (VkSamplerYcbcrConversionCreateInfo){
        .sType = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO,
        .pNext = NULL,
        .format = format,
        .ycbcrModel = ycbcrModel,
        .ycbcrRange = ycbcrRange,
        .components = components,
        .xChromaOffset = xChromaOffset,
        .yChromaOffset = yChromaOffset,
        .chromaFilter = chromaFilter,
        .forceExplicitReconstruction = forceExplicitReconstruction,
    };
}

VkSamplerReductionModeCreateInfo vscSamplerReductionModeCreateInfo(
    VkSamplerReductionMode reductionMode
) {
    return (VkSamplerReductionModeCreateInfo){
        .sType = VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO,
        .pNext = NULL,
        .reductionMode = reductionMode,
    };
}

VkDescriptorPoolInlineUniformBlockCreateInfo vscDescriptorPoolInlineUniformBlockCreateInfo(
    uint32_t maxInlineUniformBlockBindings
) {
    return (VkDescriptorPoolInlineUniformBlockCreateInfo){
        .sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO,
        .pNext = NULL,
        .maxInlineUniformBlockBindings = maxInlineUniformBlockBindings,
    };
}

VkImageFormatListCreateInfo vscImageFormatListCreateInfo(
    uint32_t viewFormatCount,
    const VkFormat* pViewFormats
) {
    return (VkImageFormatListCreateInfo){
        .sType = VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO,
        .pNext = NULL,
        .viewFormatCount = viewFormatCount,
        .pViewFormats = pViewFormats,
    };
}

VkDescriptorSetLayoutBindingFlagsCreateInfo vscDescriptorSetLayoutBindingFlagsCreateInfo(
    uint32_t bindingCount,
    const VkDescriptorBindingFlags* pBindingFlags
) {
    return (VkDescriptorSetLayoutBindingFlagsCreateInfo){
        .sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO,
        .pNext = NULL,
        .bindingCount = bindingCount,
        .pBindingFlags = pBindingFlags,
    };
}

VkSemaphoreTypeCreateInfo vscSemaphoreTypeCreateInfo(
    VkSemaphoreType semaphoreType,
    uint64_t initialValue
) {
    return (VkSemaphoreTypeCreateInfo){
        .sType = VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO,
        .pNext = NULL,
        .semaphoreType = semaphoreType,
        .initialValue = initialValue,
    };
}

VkImageStencilUsageCreateInfo vscImageStencilUsageCreateInfo(
    VkImageUsageFlags stencilUsage
) {
    return (VkImageStencilUsageCreateInfo){
        .sType = VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO,
        .pNext = NULL,
        .stencilUsage = stencilUsage,
    };
}

VkBufferOpaqueCaptureAddressCreateInfo vscBufferOpaqueCaptureAddressCreateInfo(
    uint64_t opaqueCaptureAddress
) {
    return (VkBufferOpaqueCaptureAddressCreateInfo){
        .sType = VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO,
        .pNext = NULL,
        .opaqueCaptureAddress = opaqueCaptureAddress,
    };
}

VkFramebufferAttachmentsCreateInfo vscFramebufferAttachmentsCreateInfo(
    uint32_t attachmentImageInfoCount,
    const VkFramebufferAttachmentImageInfo* pAttachmentImageInfos
) {
    return (VkFramebufferAttachmentsCreateInfo){
        .sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO,
        .pNext = NULL,
        .attachmentImageInfoCount = attachmentImageInfoCount,
        .pAttachmentImageInfos = pAttachmentImageInfos,
    };
}

VkPipelineCreationFeedbackCreateInfo vscPipelineCreationFeedbackCreateInfo(
    VkPipelineCreationFeedback* pPipelineCreationFeedback,
    uint32_t pipelineStageCreationFeedbackCount,
    VkPipelineCreationFeedback* pPipelineStageCreationFeedbacks
) {
    return (VkPipelineCreationFeedbackCreateInfo){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO,
        .pNext = NULL,
        .pPipelineCreationFeedback = pPipelineCreationFeedback,
        .pipelineStageCreationFeedbackCount = pipelineStageCreationFeedbackCount,
        .pPipelineStageCreationFeedbacks = pPipelineStageCreationFeedbacks,
    };
}

VkPipelineShaderStageRequiredSubgroupSizeCreateInfo vscPipelineShaderStageRequiredSubgroupSizeCreateInfo(
    uint32_t requiredSubgroupSize
) {
    return (VkPipelineShaderStageRequiredSubgroupSizeCreateInfo){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO,
        .pNext = NULL,
        .requiredSubgroupSize = requiredSubgroupSize,
    };
}

VkPipelineRenderingCreateInfo vscPipelineRenderingCreateInfo(
    uint32_t viewMask,
    uint32_t colorAttachmentCount,
    const VkFormat* pColorAttachmentFormats,
    VkFormat depthAttachmentFormat,
    VkFormat stencilAttachmentFormat
) {
    return (VkPipelineRenderingCreateInfo){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO,
        .pNext = NULL,
        .viewMask = viewMask,
        .colorAttachmentCount = colorAttachmentCount,
        .pColorAttachmentFormats = pColorAttachmentFormats,
        .depthAttachmentFormat = depthAttachmentFormat,
        .stencilAttachmentFormat = stencilAttachmentFormat,
    };
}

