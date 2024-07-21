#include "vulkan_struct_creator.h"

VkApplicationInfo vscApplicationInfo(
    const char* pApplicationName,
    uint32_t applicationVersion,
    const char* pEngineName,
    uint32_t engineVersion,
    uint32_t apiVersion
) {
    return (VkApplicationInfo){
        .sType = VK_STRUCTURE_TYPE_APPLICATION_INFO,
        .pNext = NULL,
        .pApplicationName = pApplicationName,
        .applicationVersion = applicationVersion,
        .pEngineName = pEngineName,
        .engineVersion = engineVersion,
        .apiVersion = apiVersion,
    };
}

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

VkMemoryAllocateInfo vscMemoryAllocateInfo(
    VkDeviceSize allocationSize,
    uint32_t memoryTypeIndex
) {
    return (VkMemoryAllocateInfo){
        .sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO,
        .pNext = NULL,
        .allocationSize = allocationSize,
        .memoryTypeIndex = memoryTypeIndex,
    };
}

VkDescriptorBufferInfo vscDescriptorBufferInfo(
    VkBuffer buffer,
    VkDeviceSize offset,
    VkDeviceSize range
) {
    return (VkDescriptorBufferInfo){
        .buffer = buffer,
        .offset = offset,
        .range = range,
    };
}

VkDescriptorImageInfo vscDescriptorImageInfo(
    VkSampler sampler,
    VkImageView imageView,
    VkImageLayout imageLayout
) {
    return (VkDescriptorImageInfo){
        .sampler = sampler,
        .imageView = imageView,
        .imageLayout = imageLayout,
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

VkSparseBufferMemoryBindInfo vscSparseBufferMemoryBindInfo(
    VkBuffer buffer,
    uint32_t bindCount,
    const VkSparseMemoryBind* pBinds
) {
    return (VkSparseBufferMemoryBindInfo){
        .buffer = buffer,
        .bindCount = bindCount,
        .pBinds = pBinds,
    };
}

VkSparseImageOpaqueMemoryBindInfo vscSparseImageOpaqueMemoryBindInfo(
    VkImage image,
    uint32_t bindCount,
    const VkSparseMemoryBind* pBinds
) {
    return (VkSparseImageOpaqueMemoryBindInfo){
        .image = image,
        .bindCount = bindCount,
        .pBinds = pBinds,
    };
}

VkSparseImageMemoryBindInfo vscSparseImageMemoryBindInfo(
    VkImage image,
    uint32_t bindCount,
    const VkSparseImageMemoryBind* pBinds
) {
    return (VkSparseImageMemoryBindInfo){
        .image = image,
        .bindCount = bindCount,
        .pBinds = pBinds,
    };
}

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
) {
    return (VkBindSparseInfo){
        .sType = VK_STRUCTURE_TYPE_BIND_SPARSE_INFO,
        .pNext = NULL,
        .waitSemaphoreCount = waitSemaphoreCount,
        .pWaitSemaphores = pWaitSemaphores,
        .bufferBindCount = bufferBindCount,
        .pBufferBinds = pBufferBinds,
        .imageOpaqueBindCount = imageOpaqueBindCount,
        .pImageOpaqueBinds = pImageOpaqueBinds,
        .imageBindCount = imageBindCount,
        .pImageBinds = pImageBinds,
        .signalSemaphoreCount = signalSemaphoreCount,
        .pSignalSemaphores = pSignalSemaphores,
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

VkDescriptorSetAllocateInfo vscDescriptorSetAllocateInfo(
    VkDescriptorPool descriptorPool,
    uint32_t descriptorSetCount,
    const VkDescriptorSetLayout* pSetLayouts
) {
    return (VkDescriptorSetAllocateInfo){
        .sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO,
        .pNext = NULL,
        .descriptorPool = descriptorPool,
        .descriptorSetCount = descriptorSetCount,
        .pSetLayouts = pSetLayouts,
    };
}

VkSpecializationInfo vscSpecializationInfo(
    uint32_t mapEntryCount,
    const VkSpecializationMapEntry* pMapEntries,
    size_t dataSize,
    const void* pData
) {
    return (VkSpecializationInfo){
        .mapEntryCount = mapEntryCount,
        .pMapEntries = pMapEntries,
        .dataSize = dataSize,
        .pData = pData,
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

VkCommandBufferAllocateInfo vscCommandBufferAllocateInfo(
    VkCommandPool commandPool,
    VkCommandBufferLevel level,
    uint32_t commandBufferCount
) {
    return (VkCommandBufferAllocateInfo){
        .sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO,
        .pNext = NULL,
        .commandPool = commandPool,
        .level = level,
        .commandBufferCount = commandBufferCount,
    };
}

VkCommandBufferInheritanceInfo vscCommandBufferInheritanceInfo(
    VkRenderPass renderPass,
    uint32_t subpass,
    VkFramebuffer framebuffer,
    VkBool32 occlusionQueryEnable,
    VkQueryControlFlags queryFlags,
    VkQueryPipelineStatisticFlags pipelineStatistics
) {
    return (VkCommandBufferInheritanceInfo){
        .sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO,
        .pNext = NULL,
        .renderPass = renderPass,
        .subpass = subpass,
        .framebuffer = framebuffer,
        .occlusionQueryEnable = occlusionQueryEnable,
        .queryFlags = queryFlags,
        .pipelineStatistics = pipelineStatistics,
    };
}

VkCommandBufferBeginInfo vscCommandBufferBeginInfo(
    VkCommandBufferUsageFlags flags,
    const VkCommandBufferInheritanceInfo* pInheritanceInfo
) {
    return (VkCommandBufferBeginInfo){
        .sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO,
        .pNext = NULL,
        .flags = flags,
        .pInheritanceInfo = pInheritanceInfo,
    };
}

VkRenderPassBeginInfo vscRenderPassBeginInfo(
    VkRenderPass renderPass,
    VkFramebuffer framebuffer,
    VkRect2D renderArea,
    uint32_t clearValueCount,
    const VkClearValue* pClearValues
) {
    return (VkRenderPassBeginInfo){
        .sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO,
        .pNext = NULL,
        .renderPass = renderPass,
        .framebuffer = framebuffer,
        .renderArea = renderArea,
        .clearValueCount = clearValueCount,
        .pClearValues = pClearValues,
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

VkMultiDrawInfoEXT vscMultiDrawInfoEXT(
    uint32_t firstVertex,
    uint32_t vertexCount
) {
    return (VkMultiDrawInfoEXT){
        .firstVertex = firstVertex,
        .vertexCount = vertexCount,
    };
}

VkMultiDrawIndexedInfoEXT vscMultiDrawIndexedInfoEXT(
    uint32_t firstIndex,
    uint32_t indexCount,
    int32_t vertexOffset
) {
    return (VkMultiDrawIndexedInfoEXT){
        .firstIndex = firstIndex,
        .indexCount = indexCount,
        .vertexOffset = vertexOffset,
    };
}

VkSubmitInfo vscSubmitInfo(
    uint32_t waitSemaphoreCount,
    const VkSemaphore* pWaitSemaphores,
    const VkPipelineStageFlags* pWaitDstStageMask,
    uint32_t commandBufferCount,
    const VkCommandBuffer* pCommandBuffers,
    uint32_t signalSemaphoreCount,
    const VkSemaphore* pSignalSemaphores
) {
    return (VkSubmitInfo){
        .sType = VK_STRUCTURE_TYPE_SUBMIT_INFO,
        .pNext = NULL,
        .waitSemaphoreCount = waitSemaphoreCount,
        .pWaitSemaphores = pWaitSemaphores,
        .pWaitDstStageMask = pWaitDstStageMask,
        .commandBufferCount = commandBufferCount,
        .pCommandBuffers = pCommandBuffers,
        .signalSemaphoreCount = signalSemaphoreCount,
        .pSignalSemaphores = pSignalSemaphores,
    };
}

VkDisplayModeCreateInfoKHR vscDisplayModeCreateInfoKHR(
    VkDisplayModeCreateFlagsKHR flags,
    VkDisplayModeParametersKHR parameters
) {
    return (VkDisplayModeCreateInfoKHR){
        .sType = VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR,
        .pNext = NULL,
        .flags = flags,
        .parameters = parameters,
    };
}

VkDisplaySurfaceCreateInfoKHR vscDisplaySurfaceCreateInfoKHR(
    VkDisplaySurfaceCreateFlagsKHR flags,
    VkDisplayModeKHR displayMode,
    uint32_t planeIndex,
    uint32_t planeStackIndex,
    VkSurfaceTransformFlagBitsKHR transform,
    float globalAlpha,
    VkDisplayPlaneAlphaFlagBitsKHR alphaMode,
    VkExtent2D imageExtent
) {
    return (VkDisplaySurfaceCreateInfoKHR){
        .sType = VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR,
        .pNext = NULL,
        .flags = flags,
        .displayMode = displayMode,
        .planeIndex = planeIndex,
        .planeStackIndex = planeStackIndex,
        .transform = transform,
        .globalAlpha = globalAlpha,
        .alphaMode = alphaMode,
        .imageExtent = imageExtent,
    };
}

VkDisplayPresentInfoKHR vscDisplayPresentInfoKHR(
    VkRect2D srcRect,
    VkRect2D dstRect,
    VkBool32 persistent
) {
    return (VkDisplayPresentInfoKHR){
        .sType = VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR,
        .pNext = NULL,
        .srcRect = srcRect,
        .dstRect = dstRect,
        .persistent = persistent,
    };
}

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
) {
    return (VkSwapchainCreateInfoKHR){
        .sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR,
        .pNext = NULL,
        .flags = flags,
        .surface = surface,
        .minImageCount = minImageCount,
        .imageFormat = imageFormat,
        .imageColorSpace = imageColorSpace,
        .imageExtent = imageExtent,
        .imageArrayLayers = imageArrayLayers,
        .imageUsage = imageUsage,
        .imageSharingMode = imageSharingMode,
        .queueFamilyIndexCount = queueFamilyIndexCount,
        .pQueueFamilyIndices = pQueueFamilyIndices,
        .preTransform = preTransform,
        .compositeAlpha = compositeAlpha,
        .presentMode = presentMode,
        .clipped = clipped,
        .oldSwapchain = oldSwapchain,
    };
}

VkPresentInfoKHR vscPresentInfoKHR(
    uint32_t waitSemaphoreCount,
    const VkSemaphore* pWaitSemaphores,
    uint32_t swapchainCount,
    const VkSwapchainKHR* pSwapchains,
    const uint32_t* pImageIndices,
    VkResult* pResults
) {
    return (VkPresentInfoKHR){
        .sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR,
        .pNext = NULL,
        .waitSemaphoreCount = waitSemaphoreCount,
        .pWaitSemaphores = pWaitSemaphores,
        .swapchainCount = swapchainCount,
        .pSwapchains = pSwapchains,
        .pImageIndices = pImageIndices,
        .pResults = pResults,
    };
}

VkDebugReportCallbackCreateInfoEXT vscDebugReportCallbackCreateInfoEXT(
    VkDebugReportFlagsEXT flags,
    PFN_vkDebugReportCallbackEXT pfnCallback,
    void* pUserData
) {
    return (VkDebugReportCallbackCreateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT,
        .pNext = NULL,
        .flags = flags,
        .pfnCallback = pfnCallback,
        .pUserData = pUserData,
    };
}

VkDebugMarkerObjectNameInfoEXT vscDebugMarkerObjectNameInfoEXT(
    VkDebugReportObjectTypeEXT objectType,
    uint64_t object,
    const char* pObjectName
) {
    return (VkDebugMarkerObjectNameInfoEXT){
        .sType = VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT,
        .pNext = NULL,
        .objectType = objectType,
        .object = object,
        .pObjectName = pObjectName,
    };
}

VkDebugMarkerObjectTagInfoEXT vscDebugMarkerObjectTagInfoEXT(
    VkDebugReportObjectTypeEXT objectType,
    uint64_t object,
    uint64_t tagName,
    size_t tagSize,
    const void* pTag
) {
    return (VkDebugMarkerObjectTagInfoEXT){
        .sType = VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT,
        .pNext = NULL,
        .objectType = objectType,
        .object = object,
        .tagName = tagName,
        .tagSize = tagSize,
        .pTag = pTag,
    };
}

VkDedicatedAllocationImageCreateInfoNV vscDedicatedAllocationImageCreateInfoNV(
    VkBool32 dedicatedAllocation
) {
    return (VkDedicatedAllocationImageCreateInfoNV){
        .sType = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV,
        .pNext = NULL,
        .dedicatedAllocation = dedicatedAllocation,
    };
}

VkDedicatedAllocationBufferCreateInfoNV vscDedicatedAllocationBufferCreateInfoNV(
    VkBool32 dedicatedAllocation
) {
    return (VkDedicatedAllocationBufferCreateInfoNV){
        .sType = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV,
        .pNext = NULL,
        .dedicatedAllocation = dedicatedAllocation,
    };
}

VkDedicatedAllocationMemoryAllocateInfoNV vscDedicatedAllocationMemoryAllocateInfoNV(
    VkImage image,
    VkBuffer buffer
) {
    return (VkDedicatedAllocationMemoryAllocateInfoNV){
        .sType = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV,
        .pNext = NULL,
        .image = image,
        .buffer = buffer,
    };
}

VkExternalMemoryImageCreateInfoNV vscExternalMemoryImageCreateInfoNV(
    VkExternalMemoryHandleTypeFlagsNV handleTypes
) {
    return (VkExternalMemoryImageCreateInfoNV){
        .sType = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV,
        .pNext = NULL,
        .handleTypes = handleTypes,
    };
}

VkExportMemoryAllocateInfoNV vscExportMemoryAllocateInfoNV(
    VkExternalMemoryHandleTypeFlagsNV handleTypes
) {
    return (VkExportMemoryAllocateInfoNV){
        .sType = VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV,
        .pNext = NULL,
        .handleTypes = handleTypes,
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

VkGraphicsShaderGroupCreateInfoNV vscGraphicsShaderGroupCreateInfoNV(
    uint32_t stageCount,
    const VkPipelineShaderStageCreateInfo* pStages,
    const VkPipelineVertexInputStateCreateInfo* pVertexInputState,
    const VkPipelineTessellationStateCreateInfo* pTessellationState
) {
    return (VkGraphicsShaderGroupCreateInfoNV){
        .sType = VK_STRUCTURE_TYPE_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV,
        .pNext = NULL,
        .stageCount = stageCount,
        .pStages = pStages,
        .pVertexInputState = pVertexInputState,
        .pTessellationState = pTessellationState,
    };
}

VkGraphicsPipelineShaderGroupsCreateInfoNV vscGraphicsPipelineShaderGroupsCreateInfoNV(
    uint32_t groupCount,
    const VkGraphicsShaderGroupCreateInfoNV* pGroups,
    uint32_t pipelineCount,
    const VkPipeline* pPipelines
) {
    return (VkGraphicsPipelineShaderGroupsCreateInfoNV){
        .sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV,
        .pNext = NULL,
        .groupCount = groupCount,
        .pGroups = pGroups,
        .pipelineCount = pipelineCount,
        .pPipelines = pPipelines,
    };
}

VkIndirectCommandsLayoutCreateInfoNV vscIndirectCommandsLayoutCreateInfoNV(
    VkIndirectCommandsLayoutUsageFlagsNV flags,
    VkPipelineBindPoint pipelineBindPoint,
    uint32_t tokenCount,
    const VkIndirectCommandsLayoutTokenNV* pTokens,
    uint32_t streamCount,
    const uint32_t* pStreamStrides
) {
    return (VkIndirectCommandsLayoutCreateInfoNV){
        .sType = VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV,
        .pNext = NULL,
        .flags = flags,
        .pipelineBindPoint = pipelineBindPoint,
        .tokenCount = tokenCount,
        .pTokens = pTokens,
        .streamCount = streamCount,
        .pStreamStrides = pStreamStrides,
    };
}

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
) {
    return (VkGeneratedCommandsInfoNV){
        .sType = VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_NV,
        .pNext = NULL,
        .pipelineBindPoint = pipelineBindPoint,
        .pipeline = pipeline,
        .indirectCommandsLayout = indirectCommandsLayout,
        .streamCount = streamCount,
        .pStreams = pStreams,
        .sequencesCount = sequencesCount,
        .preprocessBuffer = preprocessBuffer,
        .preprocessOffset = preprocessOffset,
        .preprocessSize = preprocessSize,
        .sequencesCountBuffer = sequencesCountBuffer,
        .sequencesCountOffset = sequencesCountOffset,
        .sequencesIndexBuffer = sequencesIndexBuffer,
        .sequencesIndexOffset = sequencesIndexOffset,
    };
}

VkGeneratedCommandsMemoryRequirementsInfoNV vscGeneratedCommandsMemoryRequirementsInfoNV(
    VkPipelineBindPoint pipelineBindPoint,
    VkPipeline pipeline,
    VkIndirectCommandsLayoutNV indirectCommandsLayout,
    uint32_t maxSequencesCount
) {
    return (VkGeneratedCommandsMemoryRequirementsInfoNV){
        .sType = VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV,
        .pNext = NULL,
        .pipelineBindPoint = pipelineBindPoint,
        .pipeline = pipeline,
        .indirectCommandsLayout = indirectCommandsLayout,
        .maxSequencesCount = maxSequencesCount,
    };
}

VkPhysicalDeviceImageFormatInfo2 vscPhysicalDeviceImageFormatInfo2(
    VkFormat format,
    VkImageType type,
    VkImageTiling tiling,
    VkImageUsageFlags usage,
    VkImageCreateFlags flags
) {
    return (VkPhysicalDeviceImageFormatInfo2){
        .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2,
        .pNext = NULL,
        .format = format,
        .type = type,
        .tiling = tiling,
        .usage = usage,
        .flags = flags,
    };
}

VkPhysicalDeviceSparseImageFormatInfo2 vscPhysicalDeviceSparseImageFormatInfo2(
    VkFormat format,
    VkImageType type,
    VkSampleCountFlagBits samples,
    VkImageUsageFlags usage,
    VkImageTiling tiling
) {
    return (VkPhysicalDeviceSparseImageFormatInfo2){
        .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2,
        .pNext = NULL,
        .format = format,
        .type = type,
        .samples = samples,
        .usage = usage,
        .tiling = tiling,
    };
}

VkPhysicalDeviceExternalImageFormatInfo vscPhysicalDeviceExternalImageFormatInfo(
    VkExternalMemoryHandleTypeFlagBits handleType
) {
    return (VkPhysicalDeviceExternalImageFormatInfo){
        .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO,
        .pNext = NULL,
        .handleType = handleType,
    };
}

VkPhysicalDeviceExternalBufferInfo vscPhysicalDeviceExternalBufferInfo(
    VkBufferCreateFlags flags,
    VkBufferUsageFlags usage,
    VkExternalMemoryHandleTypeFlagBits handleType
) {
    return (VkPhysicalDeviceExternalBufferInfo){
        .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO,
        .pNext = NULL,
        .flags = flags,
        .usage = usage,
        .handleType = handleType,
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

VkExportMemoryAllocateInfo vscExportMemoryAllocateInfo(
    VkExternalMemoryHandleTypeFlags handleTypes
) {
    return (VkExportMemoryAllocateInfo){
        .sType = VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO,
        .pNext = NULL,
        .handleTypes = handleTypes,
    };
}

VkImportMemoryFdInfoKHR vscImportMemoryFdInfoKHR(
    VkExternalMemoryHandleTypeFlagBits handleType,
    int fd
) {
    return (VkImportMemoryFdInfoKHR){
        .sType = VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR,
        .pNext = NULL,
        .handleType = handleType,
        .fd = fd,
    };
}

VkMemoryGetFdInfoKHR vscMemoryGetFdInfoKHR(
    VkDeviceMemory memory,
    VkExternalMemoryHandleTypeFlagBits handleType
) {
    return (VkMemoryGetFdInfoKHR){
        .sType = VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR,
        .pNext = NULL,
        .memory = memory,
        .handleType = handleType,
    };
}

VkPhysicalDeviceExternalSemaphoreInfo vscPhysicalDeviceExternalSemaphoreInfo(
    VkExternalSemaphoreHandleTypeFlagBits handleType
) {
    return (VkPhysicalDeviceExternalSemaphoreInfo){
        .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO,
        .pNext = NULL,
        .handleType = handleType,
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

VkImportSemaphoreFdInfoKHR vscImportSemaphoreFdInfoKHR(
    VkSemaphore semaphore,
    VkSemaphoreImportFlags flags,
    VkExternalSemaphoreHandleTypeFlagBits handleType,
    int fd
) {
    return (VkImportSemaphoreFdInfoKHR){
        .sType = VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR,
        .pNext = NULL,
        .semaphore = semaphore,
        .flags = flags,
        .handleType = handleType,
        .fd = fd,
    };
}

VkSemaphoreGetFdInfoKHR vscSemaphoreGetFdInfoKHR(
    VkSemaphore semaphore,
    VkExternalSemaphoreHandleTypeFlagBits handleType
) {
    return (VkSemaphoreGetFdInfoKHR){
        .sType = VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR,
        .pNext = NULL,
        .semaphore = semaphore,
        .handleType = handleType,
    };
}

VkPhysicalDeviceExternalFenceInfo vscPhysicalDeviceExternalFenceInfo(
    VkExternalFenceHandleTypeFlagBits handleType
) {
    return (VkPhysicalDeviceExternalFenceInfo){
        .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO,
        .pNext = NULL,
        .handleType = handleType,
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

VkImportFenceFdInfoKHR vscImportFenceFdInfoKHR(
    VkFence fence,
    VkFenceImportFlags flags,
    VkExternalFenceHandleTypeFlagBits handleType,
    int fd
) {
    return (VkImportFenceFdInfoKHR){
        .sType = VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR,
        .pNext = NULL,
        .fence = fence,
        .flags = flags,
        .handleType = handleType,
        .fd = fd,
    };
}

VkFenceGetFdInfoKHR vscFenceGetFdInfoKHR(
    VkFence fence,
    VkExternalFenceHandleTypeFlagBits handleType
) {
    return (VkFenceGetFdInfoKHR){
        .sType = VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR,
        .pNext = NULL,
        .fence = fence,
        .handleType = handleType,
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

VkDisplayPowerInfoEXT vscDisplayPowerInfoEXT(
    VkDisplayPowerStateEXT powerState
) {
    return (VkDisplayPowerInfoEXT){
        .sType = VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT,
        .pNext = NULL,
        .powerState = powerState,
    };
}

VkDeviceEventInfoEXT vscDeviceEventInfoEXT(
    VkDeviceEventTypeEXT deviceEvent
) {
    return (VkDeviceEventInfoEXT){
        .sType = VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT,
        .pNext = NULL,
        .deviceEvent = deviceEvent,
    };
}

VkDisplayEventInfoEXT vscDisplayEventInfoEXT(
    VkDisplayEventTypeEXT displayEvent
) {
    return (VkDisplayEventInfoEXT){
        .sType = VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT,
        .pNext = NULL,
        .displayEvent = displayEvent,
    };
}

VkSwapchainCounterCreateInfoEXT vscSwapchainCounterCreateInfoEXT(
    VkSurfaceCounterFlagsEXT surfaceCounters
) {
    return (VkSwapchainCounterCreateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT,
        .pNext = NULL,
        .surfaceCounters = surfaceCounters,
    };
}

VkMemoryAllocateFlagsInfo vscMemoryAllocateFlagsInfo(
    VkMemoryAllocateFlags flags,
    uint32_t deviceMask
) {
    return (VkMemoryAllocateFlagsInfo){
        .sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO,
        .pNext = NULL,
        .flags = flags,
        .deviceMask = deviceMask,
    };
}

VkBindBufferMemoryInfo vscBindBufferMemoryInfo(
    VkBuffer buffer,
    VkDeviceMemory memory,
    VkDeviceSize memoryOffset
) {
    return (VkBindBufferMemoryInfo){
        .sType = VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO,
        .pNext = NULL,
        .buffer = buffer,
        .memory = memory,
        .memoryOffset = memoryOffset,
    };
}

VkBindBufferMemoryDeviceGroupInfo vscBindBufferMemoryDeviceGroupInfo(
    uint32_t deviceIndexCount,
    const uint32_t* pDeviceIndices
) {
    return (VkBindBufferMemoryDeviceGroupInfo){
        .sType = VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO,
        .pNext = NULL,
        .deviceIndexCount = deviceIndexCount,
        .pDeviceIndices = pDeviceIndices,
    };
}

VkBindImageMemoryInfo vscBindImageMemoryInfo(
    VkImage image,
    VkDeviceMemory memory,
    VkDeviceSize memoryOffset
) {
    return (VkBindImageMemoryInfo){
        .sType = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO,
        .pNext = NULL,
        .image = image,
        .memory = memory,
        .memoryOffset = memoryOffset,
    };
}

VkBindImageMemoryDeviceGroupInfo vscBindImageMemoryDeviceGroupInfo(
    uint32_t deviceIndexCount,
    const uint32_t* pDeviceIndices,
    uint32_t splitInstanceBindRegionCount,
    const VkRect2D* pSplitInstanceBindRegions
) {
    return (VkBindImageMemoryDeviceGroupInfo){
        .sType = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO,
        .pNext = NULL,
        .deviceIndexCount = deviceIndexCount,
        .pDeviceIndices = pDeviceIndices,
        .splitInstanceBindRegionCount = splitInstanceBindRegionCount,
        .pSplitInstanceBindRegions = pSplitInstanceBindRegions,
    };
}

VkDeviceGroupRenderPassBeginInfo vscDeviceGroupRenderPassBeginInfo(
    uint32_t deviceMask,
    uint32_t deviceRenderAreaCount,
    const VkRect2D* pDeviceRenderAreas
) {
    return (VkDeviceGroupRenderPassBeginInfo){
        .sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO,
        .pNext = NULL,
        .deviceMask = deviceMask,
        .deviceRenderAreaCount = deviceRenderAreaCount,
        .pDeviceRenderAreas = pDeviceRenderAreas,
    };
}

VkDeviceGroupCommandBufferBeginInfo vscDeviceGroupCommandBufferBeginInfo(
    uint32_t deviceMask
) {
    return (VkDeviceGroupCommandBufferBeginInfo){
        .sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO,
        .pNext = NULL,
        .deviceMask = deviceMask,
    };
}

VkDeviceGroupSubmitInfo vscDeviceGroupSubmitInfo(
    uint32_t waitSemaphoreCount,
    const uint32_t* pWaitSemaphoreDeviceIndices,
    uint32_t commandBufferCount,
    const uint32_t* pCommandBufferDeviceMasks,
    uint32_t signalSemaphoreCount,
    const uint32_t* pSignalSemaphoreDeviceIndices
) {
    return (VkDeviceGroupSubmitInfo){
        .sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO,
        .pNext = NULL,
        .waitSemaphoreCount = waitSemaphoreCount,
        .pWaitSemaphoreDeviceIndices = pWaitSemaphoreDeviceIndices,
        .commandBufferCount = commandBufferCount,
        .pCommandBufferDeviceMasks = pCommandBufferDeviceMasks,
        .signalSemaphoreCount = signalSemaphoreCount,
        .pSignalSemaphoreDeviceIndices = pSignalSemaphoreDeviceIndices,
    };
}

VkDeviceGroupBindSparseInfo vscDeviceGroupBindSparseInfo(
    uint32_t resourceDeviceIndex,
    uint32_t memoryDeviceIndex
) {
    return (VkDeviceGroupBindSparseInfo){
        .sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO,
        .pNext = NULL,
        .resourceDeviceIndex = resourceDeviceIndex,
        .memoryDeviceIndex = memoryDeviceIndex,
    };
}

VkImageSwapchainCreateInfoKHR vscImageSwapchainCreateInfoKHR(
    VkSwapchainKHR swapchain
) {
    return (VkImageSwapchainCreateInfoKHR){
        .sType = VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR,
        .pNext = NULL,
        .swapchain = swapchain,
    };
}

VkBindImageMemorySwapchainInfoKHR vscBindImageMemorySwapchainInfoKHR(
    VkSwapchainKHR swapchain,
    uint32_t imageIndex
) {
    return (VkBindImageMemorySwapchainInfoKHR){
        .sType = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR,
        .pNext = NULL,
        .swapchain = swapchain,
        .imageIndex = imageIndex,
    };
}

VkAcquireNextImageInfoKHR vscAcquireNextImageInfoKHR(
    VkSwapchainKHR swapchain,
    uint64_t timeout,
    VkSemaphore semaphore,
    VkFence fence,
    uint32_t deviceMask
) {
    return (VkAcquireNextImageInfoKHR){
        .sType = VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR,
        .pNext = NULL,
        .swapchain = swapchain,
        .timeout = timeout,
        .semaphore = semaphore,
        .fence = fence,
        .deviceMask = deviceMask,
    };
}

VkDeviceGroupPresentInfoKHR vscDeviceGroupPresentInfoKHR(
    uint32_t swapchainCount,
    const uint32_t* pDeviceMasks,
    VkDeviceGroupPresentModeFlagBitsKHR mode
) {
    return (VkDeviceGroupPresentInfoKHR){
        .sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR,
        .pNext = NULL,
        .swapchainCount = swapchainCount,
        .pDeviceMasks = pDeviceMasks,
        .mode = mode,
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

VkDeviceGroupSwapchainCreateInfoKHR vscDeviceGroupSwapchainCreateInfoKHR(
    VkDeviceGroupPresentModeFlagsKHR modes
) {
    return (VkDeviceGroupSwapchainCreateInfoKHR){
        .sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR,
        .pNext = NULL,
        .modes = modes,
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

VkSwapchainDisplayNativeHdrCreateInfoAMD vscSwapchainDisplayNativeHdrCreateInfoAMD(
    VkBool32 localDimmingEnable
) {
    return (VkSwapchainDisplayNativeHdrCreateInfoAMD){
        .sType = VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD,
        .pNext = NULL,
        .localDimmingEnable = localDimmingEnable,
    };
}

VkPresentTimesInfoGOOGLE vscPresentTimesInfoGOOGLE(
    uint32_t swapchainCount,
    const VkPresentTimeGOOGLE* pTimes
) {
    return (VkPresentTimesInfoGOOGLE){
        .sType = VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE,
        .pNext = NULL,
        .swapchainCount = swapchainCount,
        .pTimes = pTimes,
    };
}

VkPipelineViewportWScalingStateCreateInfoNV vscPipelineViewportWScalingStateCreateInfoNV(
    VkBool32 viewportWScalingEnable,
    uint32_t viewportCount,
    const VkViewportWScalingNV* pViewportWScalings
) {
    return (VkPipelineViewportWScalingStateCreateInfoNV){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV,
        .pNext = NULL,
        .viewportWScalingEnable = viewportWScalingEnable,
        .viewportCount = viewportCount,
        .pViewportWScalings = pViewportWScalings,
    };
}

VkPipelineViewportSwizzleStateCreateInfoNV vscPipelineViewportSwizzleStateCreateInfoNV(
    VkPipelineViewportSwizzleStateCreateFlagsNV flags,
    uint32_t viewportCount,
    const VkViewportSwizzleNV* pViewportSwizzles
) {
    return (VkPipelineViewportSwizzleStateCreateInfoNV){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV,
        .pNext = NULL,
        .flags = flags,
        .viewportCount = viewportCount,
        .pViewportSwizzles = pViewportSwizzles,
    };
}

VkPipelineDiscardRectangleStateCreateInfoEXT vscPipelineDiscardRectangleStateCreateInfoEXT(
    VkPipelineDiscardRectangleStateCreateFlagsEXT flags,
    VkDiscardRectangleModeEXT discardRectangleMode,
    uint32_t discardRectangleCount,
    const VkRect2D* pDiscardRectangles
) {
    return (VkPipelineDiscardRectangleStateCreateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT,
        .pNext = NULL,
        .flags = flags,
        .discardRectangleMode = discardRectangleMode,
        .discardRectangleCount = discardRectangleCount,
        .pDiscardRectangles = pDiscardRectangles,
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

VkPhysicalDeviceSurfaceInfo2KHR vscPhysicalDeviceSurfaceInfo2KHR(
    VkSurfaceKHR surface
) {
    return (VkPhysicalDeviceSurfaceInfo2KHR){
        .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR,
        .pNext = NULL,
        .surface = surface,
    };
}

VkDisplayPlaneInfo2KHR vscDisplayPlaneInfo2KHR(
    VkDisplayModeKHR mode,
    uint32_t planeIndex
) {
    return (VkDisplayPlaneInfo2KHR){
        .sType = VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR,
        .pNext = NULL,
        .mode = mode,
        .planeIndex = planeIndex,
    };
}

VkBufferMemoryRequirementsInfo2 vscBufferMemoryRequirementsInfo2(
    VkBuffer buffer
) {
    return (VkBufferMemoryRequirementsInfo2){
        .sType = VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2,
        .pNext = NULL,
        .buffer = buffer,
    };
}

VkImageMemoryRequirementsInfo2 vscImageMemoryRequirementsInfo2(
    VkImage image
) {
    return (VkImageMemoryRequirementsInfo2){
        .sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2,
        .pNext = NULL,
        .image = image,
    };
}

VkImageSparseMemoryRequirementsInfo2 vscImageSparseMemoryRequirementsInfo2(
    VkImage image
) {
    return (VkImageSparseMemoryRequirementsInfo2){
        .sType = VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2,
        .pNext = NULL,
        .image = image,
    };
}

VkMemoryDedicatedAllocateInfo vscMemoryDedicatedAllocateInfo(
    VkImage image,
    VkBuffer buffer
) {
    return (VkMemoryDedicatedAllocateInfo){
        .sType = VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO,
        .pNext = NULL,
        .image = image,
        .buffer = buffer,
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

VkSamplerYcbcrConversionInfo vscSamplerYcbcrConversionInfo(
    VkSamplerYcbcrConversion conversion
) {
    return (VkSamplerYcbcrConversionInfo){
        .sType = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO,
        .pNext = NULL,
        .conversion = conversion,
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

VkBindImagePlaneMemoryInfo vscBindImagePlaneMemoryInfo(
    VkImageAspectFlagBits planeAspect
) {
    return (VkBindImagePlaneMemoryInfo){
        .sType = VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO,
        .pNext = NULL,
        .planeAspect = planeAspect,
    };
}

VkImagePlaneMemoryRequirementsInfo vscImagePlaneMemoryRequirementsInfo(
    VkImageAspectFlagBits planeAspect
) {
    return (VkImagePlaneMemoryRequirementsInfo){
        .sType = VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO,
        .pNext = NULL,
        .planeAspect = planeAspect,
    };
}

VkConditionalRenderingBeginInfoEXT vscConditionalRenderingBeginInfoEXT(
    VkBuffer buffer,
    VkDeviceSize offset,
    VkConditionalRenderingFlagsEXT flags
) {
    return (VkConditionalRenderingBeginInfoEXT){
        .sType = VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT,
        .pNext = NULL,
        .buffer = buffer,
        .offset = offset,
        .flags = flags,
    };
}

VkProtectedSubmitInfo vscProtectedSubmitInfo(
    VkBool32 protectedSubmit
) {
    return (VkProtectedSubmitInfo){
        .sType = VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO,
        .pNext = NULL,
        .protectedSubmit = protectedSubmit,
    };
}

VkDeviceQueueInfo2 vscDeviceQueueInfo2(
    VkDeviceQueueCreateFlags flags,
    uint32_t queueFamilyIndex,
    uint32_t queueIndex
) {
    return (VkDeviceQueueInfo2){
        .sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2,
        .pNext = NULL,
        .flags = flags,
        .queueFamilyIndex = queueFamilyIndex,
        .queueIndex = queueIndex,
    };
}

VkPipelineCoverageToColorStateCreateInfoNV vscPipelineCoverageToColorStateCreateInfoNV(
    VkPipelineCoverageToColorStateCreateFlagsNV flags,
    VkBool32 coverageToColorEnable,
    uint32_t coverageToColorLocation
) {
    return (VkPipelineCoverageToColorStateCreateInfoNV){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV,
        .pNext = NULL,
        .flags = flags,
        .coverageToColorEnable = coverageToColorEnable,
        .coverageToColorLocation = coverageToColorLocation,
    };
}

VkSampleLocationsInfoEXT vscSampleLocationsInfoEXT(
    VkSampleCountFlagBits sampleLocationsPerPixel,
    VkExtent2D sampleLocationGridSize,
    uint32_t sampleLocationsCount,
    const VkSampleLocationEXT* pSampleLocations
) {
    return (VkSampleLocationsInfoEXT){
        .sType = VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT,
        .pNext = NULL,
        .sampleLocationsPerPixel = sampleLocationsPerPixel,
        .sampleLocationGridSize = sampleLocationGridSize,
        .sampleLocationsCount = sampleLocationsCount,
        .pSampleLocations = pSampleLocations,
    };
}

VkRenderPassSampleLocationsBeginInfoEXT vscRenderPassSampleLocationsBeginInfoEXT(
    uint32_t attachmentInitialSampleLocationsCount,
    const VkAttachmentSampleLocationsEXT* pAttachmentInitialSampleLocations,
    uint32_t postSubpassSampleLocationsCount,
    const VkSubpassSampleLocationsEXT* pPostSubpassSampleLocations
) {
    return (VkRenderPassSampleLocationsBeginInfoEXT){
        .sType = VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT,
        .pNext = NULL,
        .attachmentInitialSampleLocationsCount = attachmentInitialSampleLocationsCount,
        .pAttachmentInitialSampleLocations = pAttachmentInitialSampleLocations,
        .postSubpassSampleLocationsCount = postSubpassSampleLocationsCount,
        .pPostSubpassSampleLocations = pPostSubpassSampleLocations,
    };
}

VkPipelineSampleLocationsStateCreateInfoEXT vscPipelineSampleLocationsStateCreateInfoEXT(
    VkBool32 sampleLocationsEnable,
    VkSampleLocationsInfoEXT sampleLocationsInfo
) {
    return (VkPipelineSampleLocationsStateCreateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT,
        .pNext = NULL,
        .sampleLocationsEnable = sampleLocationsEnable,
        .sampleLocationsInfo = sampleLocationsInfo,
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

VkPipelineColorBlendAdvancedStateCreateInfoEXT vscPipelineColorBlendAdvancedStateCreateInfoEXT(
    VkBool32 srcPremultiplied,
    VkBool32 dstPremultiplied,
    VkBlendOverlapEXT blendOverlap
) {
    return (VkPipelineColorBlendAdvancedStateCreateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT,
        .pNext = NULL,
        .srcPremultiplied = srcPremultiplied,
        .dstPremultiplied = dstPremultiplied,
        .blendOverlap = blendOverlap,
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

VkPipelineCoverageModulationStateCreateInfoNV vscPipelineCoverageModulationStateCreateInfoNV(
    VkPipelineCoverageModulationStateCreateFlagsNV flags,
    VkCoverageModulationModeNV coverageModulationMode,
    VkBool32 coverageModulationTableEnable,
    uint32_t coverageModulationTableCount,
    const float* pCoverageModulationTable
) {
    return (VkPipelineCoverageModulationStateCreateInfoNV){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV,
        .pNext = NULL,
        .flags = flags,
        .coverageModulationMode = coverageModulationMode,
        .coverageModulationTableEnable = coverageModulationTableEnable,
        .coverageModulationTableCount = coverageModulationTableCount,
        .pCoverageModulationTable = pCoverageModulationTable,
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

VkValidationCacheCreateInfoEXT vscValidationCacheCreateInfoEXT(
    VkValidationCacheCreateFlagsEXT flags,
    size_t initialDataSize,
    const void* pInitialData
) {
    return (VkValidationCacheCreateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT,
        .pNext = NULL,
        .flags = flags,
        .initialDataSize = initialDataSize,
        .pInitialData = pInitialData,
    };
}

VkShaderModuleValidationCacheCreateInfoEXT vscShaderModuleValidationCacheCreateInfoEXT(
    VkValidationCacheEXT validationCache
) {
    return (VkShaderModuleValidationCacheCreateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT,
        .pNext = NULL,
        .validationCache = validationCache,
    };
}

VkDeviceQueueGlobalPriorityCreateInfoKHR vscDeviceQueueGlobalPriorityCreateInfoKHR(
    VkQueueGlobalPriorityKHR globalPriority
) {
    return (VkDeviceQueueGlobalPriorityCreateInfoKHR){
        .sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_KHR,
        .pNext = NULL,
        .globalPriority = globalPriority,
    };
}

VkDebugUtilsObjectNameInfoEXT vscDebugUtilsObjectNameInfoEXT(
    VkObjectType objectType,
    uint64_t objectHandle,
    const char* pObjectName
) {
    return (VkDebugUtilsObjectNameInfoEXT){
        .sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT,
        .pNext = NULL,
        .objectType = objectType,
        .objectHandle = objectHandle,
        .pObjectName = pObjectName,
    };
}

VkDebugUtilsObjectTagInfoEXT vscDebugUtilsObjectTagInfoEXT(
    VkObjectType objectType,
    uint64_t objectHandle,
    uint64_t tagName,
    size_t tagSize,
    const void* pTag
) {
    return (VkDebugUtilsObjectTagInfoEXT){
        .sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT,
        .pNext = NULL,
        .objectType = objectType,
        .objectHandle = objectHandle,
        .tagName = tagName,
        .tagSize = tagSize,
        .pTag = pTag,
    };
}

VkDebugUtilsMessengerCreateInfoEXT vscDebugUtilsMessengerCreateInfoEXT(
    VkDebugUtilsMessengerCreateFlagsEXT flags,
    VkDebugUtilsMessageSeverityFlagsEXT messageSeverity,
    VkDebugUtilsMessageTypeFlagsEXT messageType,
    PFN_vkDebugUtilsMessengerCallbackEXT pfnUserCallback,
    void* pUserData
) {
    return (VkDebugUtilsMessengerCreateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT,
        .pNext = NULL,
        .flags = flags,
        .messageSeverity = messageSeverity,
        .messageType = messageType,
        .pfnUserCallback = pfnUserCallback,
        .pUserData = pUserData,
    };
}

VkDeviceDeviceMemoryReportCreateInfoEXT vscDeviceDeviceMemoryReportCreateInfoEXT(
    VkDeviceMemoryReportFlagsEXT flags,
    PFN_vkDeviceMemoryReportCallbackEXT pfnUserCallback,
    void* pUserData
) {
    return (VkDeviceDeviceMemoryReportCreateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT,
        .pNext = NULL,
        .flags = flags,
        .pfnUserCallback = pfnUserCallback,
        .pUserData = pUserData,
    };
}

VkImportMemoryHostPointerInfoEXT vscImportMemoryHostPointerInfoEXT(
    VkExternalMemoryHandleTypeFlagBits handleType,
    void* pHostPointer
) {
    return (VkImportMemoryHostPointerInfoEXT){
        .sType = VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT,
        .pNext = NULL,
        .handleType = handleType,
        .pHostPointer = pHostPointer,
    };
}

VkPipelineRasterizationConservativeStateCreateInfoEXT vscPipelineRasterizationConservativeStateCreateInfoEXT(
    VkPipelineRasterizationConservativeStateCreateFlagsEXT flags,
    VkConservativeRasterizationModeEXT conservativeRasterizationMode,
    float extraPrimitiveOverestimationSize
) {
    return (VkPipelineRasterizationConservativeStateCreateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT,
        .pNext = NULL,
        .flags = flags,
        .conservativeRasterizationMode = conservativeRasterizationMode,
        .extraPrimitiveOverestimationSize = extraPrimitiveOverestimationSize,
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

VkDescriptorSetVariableDescriptorCountAllocateInfo vscDescriptorSetVariableDescriptorCountAllocateInfo(
    uint32_t descriptorSetCount,
    const uint32_t* pDescriptorCounts
) {
    return (VkDescriptorSetVariableDescriptorCountAllocateInfo){
        .sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO,
        .pNext = NULL,
        .descriptorSetCount = descriptorSetCount,
        .pDescriptorCounts = pDescriptorCounts,
    };
}

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
) {
    return (VkRenderPassCreateInfo2){
        .sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2,
        .pNext = NULL,
        .flags = flags,
        .attachmentCount = attachmentCount,
        .pAttachments = pAttachments,
        .subpassCount = subpassCount,
        .pSubpasses = pSubpasses,
        .dependencyCount = dependencyCount,
        .pDependencies = pDependencies,
        .correlatedViewMaskCount = correlatedViewMaskCount,
        .pCorrelatedViewMasks = pCorrelatedViewMasks,
    };
}

VkSubpassBeginInfo vscSubpassBeginInfo(
    VkSubpassContents contents
) {
    return (VkSubpassBeginInfo){
        .sType = VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO,
        .pNext = NULL,
        .contents = contents,
    };
}

VkSubpassEndInfo vscSubpassEndInfo(

) {
    return (VkSubpassEndInfo){
        .sType = VK_STRUCTURE_TYPE_SUBPASS_END_INFO,
        .pNext = NULL,
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

VkTimelineSemaphoreSubmitInfo vscTimelineSemaphoreSubmitInfo(
    uint32_t waitSemaphoreValueCount,
    const uint64_t* pWaitSemaphoreValues,
    uint32_t signalSemaphoreValueCount,
    const uint64_t* pSignalSemaphoreValues
) {
    return (VkTimelineSemaphoreSubmitInfo){
        .sType = VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO,
        .pNext = NULL,
        .waitSemaphoreValueCount = waitSemaphoreValueCount,
        .pWaitSemaphoreValues = pWaitSemaphoreValues,
        .signalSemaphoreValueCount = signalSemaphoreValueCount,
        .pSignalSemaphoreValues = pSignalSemaphoreValues,
    };
}

VkSemaphoreWaitInfo vscSemaphoreWaitInfo(
    VkSemaphoreWaitFlags flags,
    uint32_t semaphoreCount,
    const VkSemaphore* pSemaphores,
    const uint64_t* pValues
) {
    return (VkSemaphoreWaitInfo){
        .sType = VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO,
        .pNext = NULL,
        .flags = flags,
        .semaphoreCount = semaphoreCount,
        .pSemaphores = pSemaphores,
        .pValues = pValues,
    };
}

VkSemaphoreSignalInfo vscSemaphoreSignalInfo(
    VkSemaphore semaphore,
    uint64_t value
) {
    return (VkSemaphoreSignalInfo){
        .sType = VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO,
        .pNext = NULL,
        .semaphore = semaphore,
        .value = value,
    };
}

VkPhysicalDevicePCIBusInfoPropertiesEXT vscPhysicalDevicePCIBusInfoPropertiesEXT(
    uint32_t pciDomain,
    uint32_t pciBus,
    uint32_t pciDevice,
    uint32_t pciFunction
) {
    return (VkPhysicalDevicePCIBusInfoPropertiesEXT){
        .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT,
        .pNext = NULL,
        .pciDomain = pciDomain,
        .pciBus = pciBus,
        .pciDevice = pciDevice,
        .pciFunction = pciFunction,
    };
}

VkCommandBufferInheritanceConditionalRenderingInfoEXT vscCommandBufferInheritanceConditionalRenderingInfoEXT(
    VkBool32 conditionalRenderingEnable
) {
    return (VkCommandBufferInheritanceConditionalRenderingInfoEXT){
        .sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT,
        .pNext = NULL,
        .conditionalRenderingEnable = conditionalRenderingEnable,
    };
}

VkPipelineRasterizationStateStreamCreateInfoEXT vscPipelineRasterizationStateStreamCreateInfoEXT(
    VkPipelineRasterizationStateStreamCreateFlagsEXT flags,
    uint32_t rasterizationStream
) {
    return (VkPipelineRasterizationStateStreamCreateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT,
        .pNext = NULL,
        .flags = flags,
        .rasterizationStream = rasterizationStream,
    };
}

VkPipelineRepresentativeFragmentTestStateCreateInfoNV vscPipelineRepresentativeFragmentTestStateCreateInfoNV(
    VkBool32 representativeFragmentTestEnable
) {
    return (VkPipelineRepresentativeFragmentTestStateCreateInfoNV){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV,
        .pNext = NULL,
        .representativeFragmentTestEnable = representativeFragmentTestEnable,
    };
}

VkPipelineViewportExclusiveScissorStateCreateInfoNV vscPipelineViewportExclusiveScissorStateCreateInfoNV(
    uint32_t exclusiveScissorCount,
    const VkRect2D* pExclusiveScissors
) {
    return (VkPipelineViewportExclusiveScissorStateCreateInfoNV){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV,
        .pNext = NULL,
        .exclusiveScissorCount = exclusiveScissorCount,
        .pExclusiveScissors = pExclusiveScissors,
    };
}

VkPipelineViewportShadingRateImageStateCreateInfoNV vscPipelineViewportShadingRateImageStateCreateInfoNV(
    VkBool32 shadingRateImageEnable,
    uint32_t viewportCount,
    const VkShadingRatePaletteNV* pShadingRatePalettes
) {
    return (VkPipelineViewportShadingRateImageStateCreateInfoNV){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV,
        .pNext = NULL,
        .shadingRateImageEnable = shadingRateImageEnable,
        .viewportCount = viewportCount,
        .pShadingRatePalettes = pShadingRatePalettes,
    };
}

VkPipelineViewportCoarseSampleOrderStateCreateInfoNV vscPipelineViewportCoarseSampleOrderStateCreateInfoNV(
    VkCoarseSampleOrderTypeNV sampleOrderType,
    uint32_t customSampleOrderCount,
    const VkCoarseSampleOrderCustomNV* pCustomSampleOrders
) {
    return (VkPipelineViewportCoarseSampleOrderStateCreateInfoNV){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV,
        .pNext = NULL,
        .sampleOrderType = sampleOrderType,
        .customSampleOrderCount = customSampleOrderCount,
        .pCustomSampleOrders = pCustomSampleOrders,
    };
}

VkRayTracingShaderGroupCreateInfoNV vscRayTracingShaderGroupCreateInfoNV(
    VkRayTracingShaderGroupTypeKHR type,
    uint32_t generalShader,
    uint32_t closestHitShader,
    uint32_t anyHitShader,
    uint32_t intersectionShader
) {
    return (VkRayTracingShaderGroupCreateInfoNV){
        .sType = VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV,
        .pNext = NULL,
        .type = type,
        .generalShader = generalShader,
        .closestHitShader = closestHitShader,
        .anyHitShader = anyHitShader,
        .intersectionShader = intersectionShader,
    };
}

VkRayTracingShaderGroupCreateInfoKHR vscRayTracingShaderGroupCreateInfoKHR(
    VkRayTracingShaderGroupTypeKHR type,
    uint32_t generalShader,
    uint32_t closestHitShader,
    uint32_t anyHitShader,
    uint32_t intersectionShader,
    const void* pShaderGroupCaptureReplayHandle
) {
    return (VkRayTracingShaderGroupCreateInfoKHR){
        .sType = VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR,
        .pNext = NULL,
        .type = type,
        .generalShader = generalShader,
        .closestHitShader = closestHitShader,
        .anyHitShader = anyHitShader,
        .intersectionShader = intersectionShader,
        .pShaderGroupCaptureReplayHandle = pShaderGroupCaptureReplayHandle,
    };
}

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
) {
    return (VkRayTracingPipelineCreateInfoNV){
        .sType = VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV,
        .pNext = NULL,
        .flags = flags,
        .stageCount = stageCount,
        .pStages = pStages,
        .groupCount = groupCount,
        .pGroups = pGroups,
        .maxRecursionDepth = maxRecursionDepth,
        .layout = layout,
        .basePipelineHandle = basePipelineHandle,
        .basePipelineIndex = basePipelineIndex,
    };
}

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
) {
    return (VkRayTracingPipelineCreateInfoKHR){
        .sType = VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR,
        .pNext = NULL,
        .flags = flags,
        .stageCount = stageCount,
        .pStages = pStages,
        .groupCount = groupCount,
        .pGroups = pGroups,
        .maxPipelineRayRecursionDepth = maxPipelineRayRecursionDepth,
        .pLibraryInfo = pLibraryInfo,
        .pLibraryInterface = pLibraryInterface,
        .pDynamicState = pDynamicState,
        .layout = layout,
        .basePipelineHandle = basePipelineHandle,
        .basePipelineIndex = basePipelineIndex,
    };
}

VkAccelerationStructureInfoNV vscAccelerationStructureInfoNV(
    VkAccelerationStructureTypeNV type,
    VkBuildAccelerationStructureFlagsNV flags,
    uint32_t instanceCount,
    uint32_t geometryCount,
    const VkGeometryNV* pGeometries
) {
    return (VkAccelerationStructureInfoNV){
        .sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV,
        .pNext = NULL,
        .type = type,
        .flags = flags,
        .instanceCount = instanceCount,
        .geometryCount = geometryCount,
        .pGeometries = pGeometries,
    };
}

VkAccelerationStructureCreateInfoNV vscAccelerationStructureCreateInfoNV(
    VkDeviceSize compactedSize,
    VkAccelerationStructureInfoNV info
) {
    return (VkAccelerationStructureCreateInfoNV){
        .sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV,
        .pNext = NULL,
        .compactedSize = compactedSize,
        .info = info,
    };
}

VkBindAccelerationStructureMemoryInfoNV vscBindAccelerationStructureMemoryInfoNV(
    VkAccelerationStructureNV accelerationStructure,
    VkDeviceMemory memory,
    VkDeviceSize memoryOffset,
    uint32_t deviceIndexCount,
    const uint32_t* pDeviceIndices
) {
    return (VkBindAccelerationStructureMemoryInfoNV){
        .sType = VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV,
        .pNext = NULL,
        .accelerationStructure = accelerationStructure,
        .memory = memory,
        .memoryOffset = memoryOffset,
        .deviceIndexCount = deviceIndexCount,
        .pDeviceIndices = pDeviceIndices,
    };
}

VkAccelerationStructureMemoryRequirementsInfoNV vscAccelerationStructureMemoryRequirementsInfoNV(
    VkAccelerationStructureMemoryRequirementsTypeNV type,
    VkAccelerationStructureNV accelerationStructure
) {
    return (VkAccelerationStructureMemoryRequirementsInfoNV){
        .sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV,
        .pNext = NULL,
        .type = type,
        .accelerationStructure = accelerationStructure,
    };
}

VkPhysicalDeviceImageDrmFormatModifierInfoEXT vscPhysicalDeviceImageDrmFormatModifierInfoEXT(
    uint64_t drmFormatModifier,
    VkSharingMode sharingMode,
    uint32_t queueFamilyIndexCount,
    const uint32_t* pQueueFamilyIndices
) {
    return (VkPhysicalDeviceImageDrmFormatModifierInfoEXT){
        .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT,
        .pNext = NULL,
        .drmFormatModifier = drmFormatModifier,
        .sharingMode = sharingMode,
        .queueFamilyIndexCount = queueFamilyIndexCount,
        .pQueueFamilyIndices = pQueueFamilyIndices,
    };
}

VkImageDrmFormatModifierListCreateInfoEXT vscImageDrmFormatModifierListCreateInfoEXT(
    uint32_t drmFormatModifierCount,
    const uint64_t* pDrmFormatModifiers
) {
    return (VkImageDrmFormatModifierListCreateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT,
        .pNext = NULL,
        .drmFormatModifierCount = drmFormatModifierCount,
        .pDrmFormatModifiers = pDrmFormatModifiers,
    };
}

VkImageDrmFormatModifierExplicitCreateInfoEXT vscImageDrmFormatModifierExplicitCreateInfoEXT(
    uint64_t drmFormatModifier,
    uint32_t drmFormatModifierPlaneCount,
    const VkSubresourceLayout* pPlaneLayouts
) {
    return (VkImageDrmFormatModifierExplicitCreateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT,
        .pNext = NULL,
        .drmFormatModifier = drmFormatModifier,
        .drmFormatModifierPlaneCount = drmFormatModifierPlaneCount,
        .pPlaneLayouts = pPlaneLayouts,
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

VkDeviceMemoryOverallocationCreateInfoAMD vscDeviceMemoryOverallocationCreateInfoAMD(
    VkMemoryOverallocationBehaviorAMD overallocationBehavior
) {
    return (VkDeviceMemoryOverallocationCreateInfoAMD){
        .sType = VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD,
        .pNext = NULL,
        .overallocationBehavior = overallocationBehavior,
    };
}

VkRenderPassFragmentDensityMapCreateInfoEXT vscRenderPassFragmentDensityMapCreateInfoEXT(
    VkAttachmentReference fragmentDensityMapAttachment
) {
    return (VkRenderPassFragmentDensityMapCreateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT,
        .pNext = NULL,
        .fragmentDensityMapAttachment = fragmentDensityMapAttachment,
    };
}

VkSubpassFragmentDensityMapOffsetEndInfoQCOM vscSubpassFragmentDensityMapOffsetEndInfoQCOM(
    uint32_t fragmentDensityOffsetCount,
    const VkOffset2D* pFragmentDensityOffsets
) {
    return (VkSubpassFragmentDensityMapOffsetEndInfoQCOM){
        .sType = VK_STRUCTURE_TYPE_SUBPASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_QCOM,
        .pNext = NULL,
        .fragmentDensityOffsetCount = fragmentDensityOffsetCount,
        .pFragmentDensityOffsets = pFragmentDensityOffsets,
    };
}

VkPipelineRasterizationDepthClipStateCreateInfoEXT vscPipelineRasterizationDepthClipStateCreateInfoEXT(
    VkPipelineRasterizationDepthClipStateCreateFlagsEXT flags,
    VkBool32 depthClipEnable
) {
    return (VkPipelineRasterizationDepthClipStateCreateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT,
        .pNext = NULL,
        .flags = flags,
        .depthClipEnable = depthClipEnable,
    };
}

VkMemoryPriorityAllocateInfoEXT vscMemoryPriorityAllocateInfoEXT(
    float priority
) {
    return (VkMemoryPriorityAllocateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT,
        .pNext = NULL,
        .priority = priority,
    };
}

VkBufferDeviceAddressInfo vscBufferDeviceAddressInfo(
    VkBuffer buffer
) {
    return (VkBufferDeviceAddressInfo){
        .sType = VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO,
        .pNext = NULL,
        .buffer = buffer,
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

VkBufferDeviceAddressCreateInfoEXT vscBufferDeviceAddressCreateInfoEXT(
    VkDeviceAddress deviceAddress
) {
    return (VkBufferDeviceAddressCreateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT,
        .pNext = NULL,
        .deviceAddress = deviceAddress,
    };
}

VkPhysicalDeviceImageViewImageFormatInfoEXT vscPhysicalDeviceImageViewImageFormatInfoEXT(
    VkImageViewType imageViewType
) {
    return (VkPhysicalDeviceImageViewImageFormatInfoEXT){
        .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT,
        .pNext = NULL,
        .imageViewType = imageViewType,
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

VkFramebufferAttachmentImageInfo vscFramebufferAttachmentImageInfo(
    VkImageCreateFlags flags,
    VkImageUsageFlags usage,
    uint32_t width,
    uint32_t height,
    uint32_t layerCount,
    uint32_t viewFormatCount,
    const VkFormat* pViewFormats
) {
    return (VkFramebufferAttachmentImageInfo){
        .sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO,
        .pNext = NULL,
        .flags = flags,
        .usage = usage,
        .width = width,
        .height = height,
        .layerCount = layerCount,
        .viewFormatCount = viewFormatCount,
        .pViewFormats = pViewFormats,
    };
}

VkRenderPassAttachmentBeginInfo vscRenderPassAttachmentBeginInfo(
    uint32_t attachmentCount,
    const VkImageView* pAttachments
) {
    return (VkRenderPassAttachmentBeginInfo){
        .sType = VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO,
        .pNext = NULL,
        .attachmentCount = attachmentCount,
        .pAttachments = pAttachments,
    };
}

VkImageViewHandleInfoNVX vscImageViewHandleInfoNVX(
    VkImageView imageView,
    VkDescriptorType descriptorType,
    VkSampler sampler
) {
    return (VkImageViewHandleInfoNVX){
        .sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX,
        .pNext = NULL,
        .imageView = imageView,
        .descriptorType = descriptorType,
        .sampler = sampler,
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

VkQueryPoolPerformanceCreateInfoKHR vscQueryPoolPerformanceCreateInfoKHR(
    uint32_t queueFamilyIndex,
    uint32_t counterIndexCount,
    const uint32_t* pCounterIndices
) {
    return (VkQueryPoolPerformanceCreateInfoKHR){
        .sType = VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR,
        .pNext = NULL,
        .queueFamilyIndex = queueFamilyIndex,
        .counterIndexCount = counterIndexCount,
        .pCounterIndices = pCounterIndices,
    };
}

VkAcquireProfilingLockInfoKHR vscAcquireProfilingLockInfoKHR(
    VkAcquireProfilingLockFlagsKHR flags,
    uint64_t timeout
) {
    return (VkAcquireProfilingLockInfoKHR){
        .sType = VK_STRUCTURE_TYPE_ACQUIRE_PROFILING_LOCK_INFO_KHR,
        .pNext = NULL,
        .flags = flags,
        .timeout = timeout,
    };
}

VkPerformanceQuerySubmitInfoKHR vscPerformanceQuerySubmitInfoKHR(
    uint32_t counterPassIndex
) {
    return (VkPerformanceQuerySubmitInfoKHR){
        .sType = VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR,
        .pNext = NULL,
        .counterPassIndex = counterPassIndex,
    };
}

VkHeadlessSurfaceCreateInfoEXT vscHeadlessSurfaceCreateInfoEXT(
    VkHeadlessSurfaceCreateFlagsEXT flags
) {
    return (VkHeadlessSurfaceCreateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT,
        .pNext = NULL,
        .flags = flags,
    };
}

VkPipelineCoverageReductionStateCreateInfoNV vscPipelineCoverageReductionStateCreateInfoNV(
    VkPipelineCoverageReductionStateCreateFlagsNV flags,
    VkCoverageReductionModeNV coverageReductionMode
) {
    return (VkPipelineCoverageReductionStateCreateInfoNV){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV,
        .pNext = NULL,
        .flags = flags,
        .coverageReductionMode = coverageReductionMode,
    };
}

VkInitializePerformanceApiInfoINTEL vscInitializePerformanceApiInfoINTEL(
    void* pUserData
) {
    return (VkInitializePerformanceApiInfoINTEL){
        .sType = VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL,
        .pNext = NULL,
        .pUserData = pUserData,
    };
}

VkQueryPoolPerformanceQueryCreateInfoINTEL vscQueryPoolPerformanceQueryCreateInfoINTEL(
    VkQueryPoolSamplingModeINTEL performanceCountersSampling
) {
    return (VkQueryPoolPerformanceQueryCreateInfoINTEL){
        .sType = VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL,
        .pNext = NULL,
        .performanceCountersSampling = performanceCountersSampling,
    };
}

VkPerformanceMarkerInfoINTEL vscPerformanceMarkerInfoINTEL(
    uint64_t marker
) {
    return (VkPerformanceMarkerInfoINTEL){
        .sType = VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL,
        .pNext = NULL,
        .marker = marker,
    };
}

VkPerformanceStreamMarkerInfoINTEL vscPerformanceStreamMarkerInfoINTEL(
    uint32_t marker
) {
    return (VkPerformanceStreamMarkerInfoINTEL){
        .sType = VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL,
        .pNext = NULL,
        .marker = marker,
    };
}

VkPerformanceOverrideInfoINTEL vscPerformanceOverrideInfoINTEL(
    VkPerformanceOverrideTypeINTEL type,
    VkBool32 enable,
    uint64_t parameter
) {
    return (VkPerformanceOverrideInfoINTEL){
        .sType = VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL,
        .pNext = NULL,
        .type = type,
        .enable = enable,
        .parameter = parameter,
    };
}

VkPerformanceConfigurationAcquireInfoINTEL vscPerformanceConfigurationAcquireInfoINTEL(
    VkPerformanceConfigurationTypeINTEL type
) {
    return (VkPerformanceConfigurationAcquireInfoINTEL){
        .sType = VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL,
        .pNext = NULL,
        .type = type,
    };
}

VkPipelineInfoKHR vscPipelineInfoKHR(
    VkPipeline pipeline
) {
    return (VkPipelineInfoKHR){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR,
        .pNext = NULL,
        .pipeline = pipeline,
    };
}

VkPipelineExecutableInfoKHR vscPipelineExecutableInfoKHR(
    VkPipeline pipeline,
    uint32_t executableIndex
) {
    return (VkPipelineExecutableInfoKHR){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR,
        .pNext = NULL,
        .pipeline = pipeline,
        .executableIndex = executableIndex,
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

VkSubpassShadingPipelineCreateInfoHUAWEI vscSubpassShadingPipelineCreateInfoHUAWEI(
    VkRenderPass renderPass,
    uint32_t subpass
) {
    return (VkSubpassShadingPipelineCreateInfoHUAWEI){
        .sType = VK_STRUCTURE_TYPE_SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI,
        .pNext = NULL,
        .renderPass = renderPass,
        .subpass = subpass,
    };
}

VkMemoryOpaqueCaptureAddressAllocateInfo vscMemoryOpaqueCaptureAddressAllocateInfo(
    uint64_t opaqueCaptureAddress
) {
    return (VkMemoryOpaqueCaptureAddressAllocateInfo){
        .sType = VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO,
        .pNext = NULL,
        .opaqueCaptureAddress = opaqueCaptureAddress,
    };
}

VkDeviceMemoryOpaqueCaptureAddressInfo vscDeviceMemoryOpaqueCaptureAddressInfo(
    VkDeviceMemory memory
) {
    return (VkDeviceMemoryOpaqueCaptureAddressInfo){
        .sType = VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO,
        .pNext = NULL,
        .memory = memory,
    };
}

VkPipelineCompilerControlCreateInfoAMD vscPipelineCompilerControlCreateInfoAMD(
    VkPipelineCompilerControlFlagsAMD compilerControlFlags
) {
    return (VkPipelineCompilerControlCreateInfoAMD){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD,
        .pNext = NULL,
        .compilerControlFlags = compilerControlFlags,
    };
}

VkSamplerCustomBorderColorCreateInfoEXT vscSamplerCustomBorderColorCreateInfoEXT(
    VkClearColorValue customBorderColor,
    VkFormat format
) {
    return (VkSamplerCustomBorderColorCreateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT,
        .pNext = NULL,
        .customBorderColor = customBorderColor,
        .format = format,
    };
}

VkSamplerBorderColorComponentMappingCreateInfoEXT vscSamplerBorderColorComponentMappingCreateInfoEXT(
    VkComponentMapping components,
    VkBool32 srgb
) {
    return (VkSamplerBorderColorComponentMappingCreateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT,
        .pNext = NULL,
        .components = components,
        .srgb = srgb,
    };
}

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
) {
    return (VkAccelerationStructureBuildGeometryInfoKHR){
        .sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR,
        .pNext = NULL,
        .type = type,
        .flags = flags,
        .mode = mode,
        .srcAccelerationStructure = srcAccelerationStructure,
        .dstAccelerationStructure = dstAccelerationStructure,
        .geometryCount = geometryCount,
        .pGeometries = pGeometries,
        .ppGeometries = ppGeometries,
        .scratchData = scratchData,
    };
}

VkAccelerationStructureBuildRangeInfoKHR vscAccelerationStructureBuildRangeInfoKHR(
    uint32_t primitiveCount,
    uint32_t primitiveOffset,
    uint32_t firstVertex,
    uint32_t transformOffset
) {
    return (VkAccelerationStructureBuildRangeInfoKHR){
        .primitiveCount = primitiveCount,
        .primitiveOffset = primitiveOffset,
        .firstVertex = firstVertex,
        .transformOffset = transformOffset,
    };
}

VkAccelerationStructureCreateInfoKHR vscAccelerationStructureCreateInfoKHR(
    VkAccelerationStructureCreateFlagsKHR createFlags,
    VkBuffer buffer,
    VkDeviceSize offset,
    VkDeviceSize size,
    VkAccelerationStructureTypeKHR type,
    VkDeviceAddress deviceAddress
) {
    return (VkAccelerationStructureCreateInfoKHR){
        .sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR,
        .pNext = NULL,
        .createFlags = createFlags,
        .buffer = buffer,
        .offset = offset,
        .size = size,
        .type = type,
        .deviceAddress = deviceAddress,
    };
}

VkAccelerationStructureDeviceAddressInfoKHR vscAccelerationStructureDeviceAddressInfoKHR(
    VkAccelerationStructureKHR accelerationStructure
) {
    return (VkAccelerationStructureDeviceAddressInfoKHR){
        .sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR,
        .pNext = NULL,
        .accelerationStructure = accelerationStructure,
    };
}

VkAccelerationStructureVersionInfoKHR vscAccelerationStructureVersionInfoKHR(
    const uint8_t* pVersionData
) {
    return (VkAccelerationStructureVersionInfoKHR){
        .sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_VERSION_INFO_KHR,
        .pNext = NULL,
        .pVersionData = pVersionData,
    };
}

VkCopyAccelerationStructureInfoKHR vscCopyAccelerationStructureInfoKHR(
    VkAccelerationStructureKHR src,
    VkAccelerationStructureKHR dst,
    VkCopyAccelerationStructureModeKHR mode
) {
    return (VkCopyAccelerationStructureInfoKHR){
        .sType = VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_INFO_KHR,
        .pNext = NULL,
        .src = src,
        .dst = dst,
        .mode = mode,
    };
}

VkCopyAccelerationStructureToMemoryInfoKHR vscCopyAccelerationStructureToMemoryInfoKHR(
    VkAccelerationStructureKHR src,
    VkDeviceOrHostAddressKHR dst,
    VkCopyAccelerationStructureModeKHR mode
) {
    return (VkCopyAccelerationStructureToMemoryInfoKHR){
        .sType = VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR,
        .pNext = NULL,
        .src = src,
        .dst = dst,
        .mode = mode,
    };
}

VkCopyMemoryToAccelerationStructureInfoKHR vscCopyMemoryToAccelerationStructureInfoKHR(
    VkDeviceOrHostAddressConstKHR src,
    VkAccelerationStructureKHR dst,
    VkCopyAccelerationStructureModeKHR mode
) {
    return (VkCopyMemoryToAccelerationStructureInfoKHR){
        .sType = VK_STRUCTURE_TYPE_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR,
        .pNext = NULL,
        .src = src,
        .dst = dst,
        .mode = mode,
    };
}

VkRayTracingPipelineInterfaceCreateInfoKHR vscRayTracingPipelineInterfaceCreateInfoKHR(
    uint32_t maxPipelineRayPayloadSize,
    uint32_t maxPipelineRayHitAttributeSize
) {
    return (VkRayTracingPipelineInterfaceCreateInfoKHR){
        .sType = VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR,
        .pNext = NULL,
        .maxPipelineRayPayloadSize = maxPipelineRayPayloadSize,
        .maxPipelineRayHitAttributeSize = maxPipelineRayHitAttributeSize,
    };
}

VkPipelineLibraryCreateInfoKHR vscPipelineLibraryCreateInfoKHR(
    uint32_t libraryCount,
    const VkPipeline* pLibraries
) {
    return (VkPipelineLibraryCreateInfoKHR){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR,
        .pNext = NULL,
        .libraryCount = libraryCount,
        .pLibraries = pLibraries,
    };
}

VkRenderPassTransformBeginInfoQCOM vscRenderPassTransformBeginInfoQCOM(
    VkSurfaceTransformFlagBitsKHR transform
) {
    return (VkRenderPassTransformBeginInfoQCOM){
        .sType = VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM,
        .pNext = NULL,
        .transform = transform,
    };
}

VkCopyCommandTransformInfoQCOM vscCopyCommandTransformInfoQCOM(
    VkSurfaceTransformFlagBitsKHR transform
) {
    return (VkCopyCommandTransformInfoQCOM){
        .sType = VK_STRUCTURE_TYPE_COPY_COMMAND_TRANSFORM_INFO_QCOM,
        .pNext = NULL,
        .transform = transform,
    };
}

VkCommandBufferInheritanceRenderPassTransformInfoQCOM vscCommandBufferInheritanceRenderPassTransformInfoQCOM(
    VkSurfaceTransformFlagBitsKHR transform,
    VkRect2D renderArea
) {
    return (VkCommandBufferInheritanceRenderPassTransformInfoQCOM){
        .sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM,
        .pNext = NULL,
        .transform = transform,
        .renderArea = renderArea,
    };
}

VkDeviceDiagnosticsConfigCreateInfoNV vscDeviceDiagnosticsConfigCreateInfoNV(
    VkDeviceDiagnosticsConfigFlagsNV flags
) {
    return (VkDeviceDiagnosticsConfigCreateInfoNV){
        .sType = VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV,
        .pNext = NULL,
        .flags = flags,
    };
}

VkCopyBufferInfo2 vscCopyBufferInfo2(
    VkBuffer srcBuffer,
    VkBuffer dstBuffer,
    uint32_t regionCount,
    const VkBufferCopy2* pRegions
) {
    return (VkCopyBufferInfo2){
        .sType = VK_STRUCTURE_TYPE_COPY_BUFFER_INFO_2,
        .pNext = NULL,
        .srcBuffer = srcBuffer,
        .dstBuffer = dstBuffer,
        .regionCount = regionCount,
        .pRegions = pRegions,
    };
}

VkCopyImageInfo2 vscCopyImageInfo2(
    VkImage srcImage,
    VkImageLayout srcImageLayout,
    VkImage dstImage,
    VkImageLayout dstImageLayout,
    uint32_t regionCount,
    const VkImageCopy2* pRegions
) {
    return (VkCopyImageInfo2){
        .sType = VK_STRUCTURE_TYPE_COPY_IMAGE_INFO_2,
        .pNext = NULL,
        .srcImage = srcImage,
        .srcImageLayout = srcImageLayout,
        .dstImage = dstImage,
        .dstImageLayout = dstImageLayout,
        .regionCount = regionCount,
        .pRegions = pRegions,
    };
}

VkBlitImageInfo2 vscBlitImageInfo2(
    VkImage srcImage,
    VkImageLayout srcImageLayout,
    VkImage dstImage,
    VkImageLayout dstImageLayout,
    uint32_t regionCount,
    const VkImageBlit2* pRegions,
    VkFilter filter
) {
    return (VkBlitImageInfo2){
        .sType = VK_STRUCTURE_TYPE_BLIT_IMAGE_INFO_2,
        .pNext = NULL,
        .srcImage = srcImage,
        .srcImageLayout = srcImageLayout,
        .dstImage = dstImage,
        .dstImageLayout = dstImageLayout,
        .regionCount = regionCount,
        .pRegions = pRegions,
        .filter = filter,
    };
}

VkCopyBufferToImageInfo2 vscCopyBufferToImageInfo2(
    VkBuffer srcBuffer,
    VkImage dstImage,
    VkImageLayout dstImageLayout,
    uint32_t regionCount,
    const VkBufferImageCopy2* pRegions
) {
    return (VkCopyBufferToImageInfo2){
        .sType = VK_STRUCTURE_TYPE_COPY_BUFFER_TO_IMAGE_INFO_2,
        .pNext = NULL,
        .srcBuffer = srcBuffer,
        .dstImage = dstImage,
        .dstImageLayout = dstImageLayout,
        .regionCount = regionCount,
        .pRegions = pRegions,
    };
}

VkCopyImageToBufferInfo2 vscCopyImageToBufferInfo2(
    VkImage srcImage,
    VkImageLayout srcImageLayout,
    VkBuffer dstBuffer,
    uint32_t regionCount,
    const VkBufferImageCopy2* pRegions
) {
    return (VkCopyImageToBufferInfo2){
        .sType = VK_STRUCTURE_TYPE_COPY_IMAGE_TO_BUFFER_INFO_2,
        .pNext = NULL,
        .srcImage = srcImage,
        .srcImageLayout = srcImageLayout,
        .dstBuffer = dstBuffer,
        .regionCount = regionCount,
        .pRegions = pRegions,
    };
}

VkResolveImageInfo2 vscResolveImageInfo2(
    VkImage srcImage,
    VkImageLayout srcImageLayout,
    VkImage dstImage,
    VkImageLayout dstImageLayout,
    uint32_t regionCount,
    const VkImageResolve2* pRegions
) {
    return (VkResolveImageInfo2){
        .sType = VK_STRUCTURE_TYPE_RESOLVE_IMAGE_INFO_2,
        .pNext = NULL,
        .srcImage = srcImage,
        .srcImageLayout = srcImageLayout,
        .dstImage = dstImage,
        .dstImageLayout = dstImageLayout,
        .regionCount = regionCount,
        .pRegions = pRegions,
    };
}

VkFragmentShadingRateAttachmentInfoKHR vscFragmentShadingRateAttachmentInfoKHR(
    const VkAttachmentReference2* pFragmentShadingRateAttachment,
    VkExtent2D shadingRateAttachmentTexelSize
) {
    return (VkFragmentShadingRateAttachmentInfoKHR){
        .sType = VK_STRUCTURE_TYPE_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR,
        .pNext = NULL,
        .pFragmentShadingRateAttachment = pFragmentShadingRateAttachment,
        .shadingRateAttachmentTexelSize = shadingRateAttachmentTexelSize,
    };
}

VkAccelerationStructureBuildSizesInfoKHR vscAccelerationStructureBuildSizesInfoKHR(
    VkDeviceSize accelerationStructureSize,
    VkDeviceSize updateScratchSize,
    VkDeviceSize buildScratchSize
) {
    return (VkAccelerationStructureBuildSizesInfoKHR){
        .sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR,
        .pNext = NULL,
        .accelerationStructureSize = accelerationStructureSize,
        .updateScratchSize = updateScratchSize,
        .buildScratchSize = buildScratchSize,
    };
}

VkPipelineViewportDepthClipControlCreateInfoEXT vscPipelineViewportDepthClipControlCreateInfoEXT(
    VkBool32 negativeOneToOne
) {
    return (VkPipelineViewportDepthClipControlCreateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT,
        .pNext = NULL,
        .negativeOneToOne = negativeOneToOne,
    };
}

VkPipelineColorWriteCreateInfoEXT vscPipelineColorWriteCreateInfoEXT(
    uint32_t attachmentCount,
    const VkBool32* pColorWriteEnables
) {
    return (VkPipelineColorWriteCreateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_WRITE_CREATE_INFO_EXT,
        .pNext = NULL,
        .attachmentCount = attachmentCount,
        .pColorWriteEnables = pColorWriteEnables,
    };
}

VkDependencyInfo vscDependencyInfo(
    VkDependencyFlags dependencyFlags,
    uint32_t memoryBarrierCount,
    const VkMemoryBarrier2* pMemoryBarriers,
    uint32_t bufferMemoryBarrierCount,
    const VkBufferMemoryBarrier2* pBufferMemoryBarriers,
    uint32_t imageMemoryBarrierCount,
    const VkImageMemoryBarrier2* pImageMemoryBarriers
) {
    return (VkDependencyInfo){
        .sType = VK_STRUCTURE_TYPE_DEPENDENCY_INFO,
        .pNext = NULL,
        .dependencyFlags = dependencyFlags,
        .memoryBarrierCount = memoryBarrierCount,
        .pMemoryBarriers = pMemoryBarriers,
        .bufferMemoryBarrierCount = bufferMemoryBarrierCount,
        .pBufferMemoryBarriers = pBufferMemoryBarriers,
        .imageMemoryBarrierCount = imageMemoryBarrierCount,
        .pImageMemoryBarriers = pImageMemoryBarriers,
    };
}

VkSemaphoreSubmitInfo vscSemaphoreSubmitInfo(
    VkSemaphore semaphore,
    uint64_t value,
    VkPipelineStageFlags2 stageMask,
    uint32_t deviceIndex
) {
    return (VkSemaphoreSubmitInfo){
        .sType = VK_STRUCTURE_TYPE_SEMAPHORE_SUBMIT_INFO,
        .pNext = NULL,
        .semaphore = semaphore,
        .value = value,
        .stageMask = stageMask,
        .deviceIndex = deviceIndex,
    };
}

VkCommandBufferSubmitInfo vscCommandBufferSubmitInfo(
    VkCommandBuffer commandBuffer,
    uint32_t deviceMask
) {
    return (VkCommandBufferSubmitInfo){
        .sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_SUBMIT_INFO,
        .pNext = NULL,
        .commandBuffer = commandBuffer,
        .deviceMask = deviceMask,
    };
}

VkSubmitInfo2 vscSubmitInfo2(
    VkSubmitFlags flags,
    uint32_t waitSemaphoreInfoCount,
    const VkSemaphoreSubmitInfo* pWaitSemaphoreInfos,
    uint32_t commandBufferInfoCount,
    const VkCommandBufferSubmitInfo* pCommandBufferInfos,
    uint32_t signalSemaphoreInfoCount,
    const VkSemaphoreSubmitInfo* pSignalSemaphoreInfos
) {
    return (VkSubmitInfo2){
        .sType = VK_STRUCTURE_TYPE_SUBMIT_INFO_2,
        .pNext = NULL,
        .flags = flags,
        .waitSemaphoreInfoCount = waitSemaphoreInfoCount,
        .pWaitSemaphoreInfos = pWaitSemaphoreInfos,
        .commandBufferInfoCount = commandBufferInfoCount,
        .pCommandBufferInfos = pCommandBufferInfos,
        .signalSemaphoreInfoCount = signalSemaphoreInfoCount,
        .pSignalSemaphoreInfos = pSignalSemaphoreInfos,
    };
}

VkCommandBufferInheritanceViewportScissorInfoNV vscCommandBufferInheritanceViewportScissorInfoNV(
    VkBool32 viewportScissor2D,
    uint32_t viewportDepthCount,
    const VkViewport* pViewportDepths
) {
    return (VkCommandBufferInheritanceViewportScissorInfoNV){
        .sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV,
        .pNext = NULL,
        .viewportScissor2D = viewportScissor2D,
        .viewportDepthCount = viewportDepthCount,
        .pViewportDepths = pViewportDepths,
    };
}

VkPipelineRasterizationProvokingVertexStateCreateInfoEXT vscPipelineRasterizationProvokingVertexStateCreateInfoEXT(
    VkProvokingVertexModeEXT provokingVertexMode
) {
    return (VkPipelineRasterizationProvokingVertexStateCreateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT,
        .pNext = NULL,
        .provokingVertexMode = provokingVertexMode,
    };
}

VkCuModuleCreateInfoNVX vscCuModuleCreateInfoNVX(
    size_t dataSize,
    const void* pData
) {
    return (VkCuModuleCreateInfoNVX){
        .sType = VK_STRUCTURE_TYPE_CU_MODULE_CREATE_INFO_NVX,
        .pNext = NULL,
        .dataSize = dataSize,
        .pData = pData,
    };
}

VkCuFunctionCreateInfoNVX vscCuFunctionCreateInfoNVX(
    VkCuModuleNVX module,
    const char* pName
) {
    return (VkCuFunctionCreateInfoNVX){
        .sType = VK_STRUCTURE_TYPE_CU_FUNCTION_CREATE_INFO_NVX,
        .pNext = NULL,
        .module = module,
        .pName = pName,
    };
}

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
) {
    return (VkCuLaunchInfoNVX){
        .sType = VK_STRUCTURE_TYPE_CU_LAUNCH_INFO_NVX,
        .pNext = NULL,
        .function = function,
        .gridDimX = gridDimX,
        .gridDimY = gridDimY,
        .gridDimZ = gridDimZ,
        .blockDimX = blockDimX,
        .blockDimY = blockDimY,
        .blockDimZ = blockDimZ,
        .sharedMemBytes = sharedMemBytes,
        .paramCount = paramCount,
        .pParams = pParams,
        .extraCount = extraCount,
        .pExtras = pExtras,
    };
}

VkAccelerationStructureMotionInfoNV vscAccelerationStructureMotionInfoNV(
    uint32_t maxInstances,
    VkAccelerationStructureMotionInfoFlagsNV flags
) {
    return (VkAccelerationStructureMotionInfoNV){
        .sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MOTION_INFO_NV,
        .pNext = NULL,
        .maxInstances = maxInstances,
        .flags = flags,
    };
}

VkMemoryGetRemoteAddressInfoNV vscMemoryGetRemoteAddressInfoNV(
    VkDeviceMemory memory,
    VkExternalMemoryHandleTypeFlagBits handleType
) {
    return (VkMemoryGetRemoteAddressInfoNV){
        .sType = VK_STRUCTURE_TYPE_MEMORY_GET_REMOTE_ADDRESS_INFO_NV,
        .pNext = NULL,
        .memory = memory,
        .handleType = handleType,
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

VkRenderingInfo vscRenderingInfo(
    VkRenderingFlags flags,
    VkRect2D renderArea,
    uint32_t layerCount,
    uint32_t viewMask,
    uint32_t colorAttachmentCount,
    const VkRenderingAttachmentInfo* pColorAttachments,
    const VkRenderingAttachmentInfo* pDepthAttachment,
    const VkRenderingAttachmentInfo* pStencilAttachment
) {
    return (VkRenderingInfo){
        .sType = VK_STRUCTURE_TYPE_RENDERING_INFO,
        .pNext = NULL,
        .flags = flags,
        .renderArea = renderArea,
        .layerCount = layerCount,
        .viewMask = viewMask,
        .colorAttachmentCount = colorAttachmentCount,
        .pColorAttachments = pColorAttachments,
        .pDepthAttachment = pDepthAttachment,
        .pStencilAttachment = pStencilAttachment,
    };
}

VkRenderingAttachmentInfo vscRenderingAttachmentInfo(
    VkImageView imageView,
    VkImageLayout imageLayout,
    VkResolveModeFlagBits resolveMode,
    VkImageView resolveImageView,
    VkImageLayout resolveImageLayout,
    VkAttachmentLoadOp loadOp,
    VkAttachmentStoreOp storeOp,
    VkClearValue clearValue
) {
    return (VkRenderingAttachmentInfo){
        .sType = VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO,
        .pNext = NULL,
        .imageView = imageView,
        .imageLayout = imageLayout,
        .resolveMode = resolveMode,
        .resolveImageView = resolveImageView,
        .resolveImageLayout = resolveImageLayout,
        .loadOp = loadOp,
        .storeOp = storeOp,
        .clearValue = clearValue,
    };
}

VkRenderingFragmentShadingRateAttachmentInfoKHR vscRenderingFragmentShadingRateAttachmentInfoKHR(
    VkImageView imageView,
    VkImageLayout imageLayout,
    VkExtent2D shadingRateAttachmentTexelSize
) {
    return (VkRenderingFragmentShadingRateAttachmentInfoKHR){
        .sType = VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR,
        .pNext = NULL,
        .imageView = imageView,
        .imageLayout = imageLayout,
        .shadingRateAttachmentTexelSize = shadingRateAttachmentTexelSize,
    };
}

VkRenderingFragmentDensityMapAttachmentInfoEXT vscRenderingFragmentDensityMapAttachmentInfoEXT(
    VkImageView imageView,
    VkImageLayout imageLayout
) {
    return (VkRenderingFragmentDensityMapAttachmentInfoEXT){
        .sType = VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT,
        .pNext = NULL,
        .imageView = imageView,
        .imageLayout = imageLayout,
    };
}

VkCommandBufferInheritanceRenderingInfo vscCommandBufferInheritanceRenderingInfo(
    VkRenderingFlags flags,
    uint32_t viewMask,
    uint32_t colorAttachmentCount,
    const VkFormat* pColorAttachmentFormats,
    VkFormat depthAttachmentFormat,
    VkFormat stencilAttachmentFormat,
    VkSampleCountFlagBits rasterizationSamples
) {
    return (VkCommandBufferInheritanceRenderingInfo){
        .sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDERING_INFO,
        .pNext = NULL,
        .flags = flags,
        .viewMask = viewMask,
        .colorAttachmentCount = colorAttachmentCount,
        .pColorAttachmentFormats = pColorAttachmentFormats,
        .depthAttachmentFormat = depthAttachmentFormat,
        .stencilAttachmentFormat = stencilAttachmentFormat,
        .rasterizationSamples = rasterizationSamples,
    };
}

VkAttachmentSampleCountInfoAMD vscAttachmentSampleCountInfoAMD(
    uint32_t colorAttachmentCount,
    const VkSampleCountFlagBits* pColorAttachmentSamples,
    VkSampleCountFlagBits depthStencilAttachmentSamples
) {
    return (VkAttachmentSampleCountInfoAMD){
        .sType = VK_STRUCTURE_TYPE_ATTACHMENT_SAMPLE_COUNT_INFO_AMD,
        .pNext = NULL,
        .colorAttachmentCount = colorAttachmentCount,
        .pColorAttachmentSamples = pColorAttachmentSamples,
        .depthStencilAttachmentSamples = depthStencilAttachmentSamples,
    };
}

VkMultiviewPerViewAttributesInfoNVX vscMultiviewPerViewAttributesInfoNVX(
    VkBool32 perViewAttributes,
    VkBool32 perViewAttributesPositionXOnly
) {
    return (VkMultiviewPerViewAttributesInfoNVX){
        .sType = VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX,
        .pNext = NULL,
        .perViewAttributes = perViewAttributes,
        .perViewAttributesPositionXOnly = perViewAttributesPositionXOnly,
    };
}

VkImageViewMinLodCreateInfoEXT vscImageViewMinLodCreateInfoEXT(
    float minLod
) {
    return (VkImageViewMinLodCreateInfoEXT){
        .sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT,
        .pNext = NULL,
        .minLod = minLod,
    };
}

