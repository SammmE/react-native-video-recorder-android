
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNVideoRecorderAndroidSpec.h"

@interface VideoRecorderAndroid : NSObject <NativeVideoRecorderAndroidSpec>
#else
#import <React/RCTBridgeModule.h>

@interface VideoRecorderAndroid : NSObject <RCTBridgeModule>
#endif

@end
