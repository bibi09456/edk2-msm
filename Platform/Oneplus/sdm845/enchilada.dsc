[Defines]
  PLATFORM_NAME                  = enchilada
  PLATFORM_GUID                  = 28f1a3bf-193a-47e3-a7b9-5a435eaab2ee
  PLATFORM_VERSION               = 0.1
  DSC_SPECIFICATION              = 0x00010019
  OUTPUT_DIRECTORY               = Build/$(PLATFORM_NAME)
  SUPPORTED_ARCHITECTURES        = AARCH64
  BUILD_TARGETS                  = DEBUG|RELEASE
  SKUID_IDENTIFIER               = DEFAULT
  FLASH_DEFINITION               = Platform/Qualcomm/sdm845/sdm845.fdf
  DEVICE_DXE_FV_COMPONENTS       = Platform/Oneplus/sdm845/enchilada.fdf.inc

  # Enable A/B Slot Environment
  DEFINE AB_SLOTS_SUPPORT        = TRUE

!include Platform/Qualcomm/sdm845/sdm845.dsc

[BuildOptions.common]
  GCC:*_*_AARCH64_CC_FLAGS =  -DENABLE_SIMPLE_INIT -DENABLE_LINUX_SIMPLE_MASS_STORAGE

[PcdsFixedAtBuild.common]

  gQcomTokenSpaceGuid.PcdMipiFrameBufferWidth|1080
  gQcomTokenSpaceGuid.PcdMipiFrameBufferHeight|2280

  gRenegadePkgTokenSpaceGuid.PcdDeviceVendor|"Oneplus"
  gRenegadePkgTokenSpaceGuid.PcdDeviceProduct|"6"
  gRenegadePkgTokenSpaceGuid.PcdDeviceCodeName|"enchilada"

  # Simple Init
  gSimpleInitTokenSpaceGuid.PcdGuiDefaultDPI|440
