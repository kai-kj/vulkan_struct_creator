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

VkProtectedSubmitInfo vscProtectedSubmitInfo(
    VkBool32 protectedSubmit
) {
    return (VkProtectedSubmitInfo){
        .sType = VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO,
        .pNext = NULL,
        .protectedSubmit = protectedSubmit,
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

VkImageStencilUsageCreateInfo vscImageStencilUsageCreateInfo(
    VkImageUsageFlags stencilUsage
) {
    return (VkImageStencilUsageCreateInfo){
        .sType = VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO,
        .pNext = NULL,
        .stencilUsage = stencilUsage,
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

