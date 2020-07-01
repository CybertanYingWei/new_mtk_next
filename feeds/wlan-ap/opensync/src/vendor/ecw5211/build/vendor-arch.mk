OS_TARGETS +=ECW5211

ifeq ($(TARGET),ECW5211)
PLATFORM=openwrt
VENDOR=ecw5211
PLATFORM_DIR := platform/$(PLATFORM)
KCONFIG_TARGET ?= $(PLATFORM_DIR)/kconfig/openwrt_generic
ARCH_MK := $(PLATFORM_DIR)/build/$(PLATFORM).mk
endif
