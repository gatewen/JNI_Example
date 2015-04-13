LOCAL_PATH := $(call my-dir)
CLASSES_PATH := $(LOCAL_PATH)/../../Classes

include $(CLEAR_VARS)

#$(warning "LOCAL_PATH:" $(LOCAL_PATH))
#$(warning "CLEAR_VARS:" $(CLEAR_VARS))


LOCAL_MODULE    := NativeCode
LOCAL_SRC_FILES := NativeCode.cpp \
$(subst $(LOCAL_PATH)/,,$(wildcard $(CLASSES_PATH)/*.cpp)) 

include $(BUILD_SHARED_LIBRARY)


