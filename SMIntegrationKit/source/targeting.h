#ifndef kCFCoreFoundationVersionNumber_iPhoneOS_2_0
	#define kCFCoreFoundationVersionNumber_iPhoneOS_2_0 478.23
#endif

#ifndef kCFCoreFoundationVersionNumber_iPhoneOS_2_1
	#define kCFCoreFoundationVersionNumber_iPhoneOS_2_1 478.26
#endif

#ifndef kCFCoreFoundationVersionNumber_iPhoneOS_2_2
	#define kCFCoreFoundationVersionNumber_iPhoneOS_2_2 478.29
#endif

#ifndef kCFCoreFoundationVersionNumber_iPhoneOS_3_0
	#define kCFCoreFoundationVersionNumber_iPhoneOS_3_0 478.47
#endif

#ifndef kCFCoreFoundationVersionNumber_iPhoneOS_3_1
	#define kCFCoreFoundationVersionNumber_iPhoneOS_3_1 478.52
#endif

#ifndef kCFCoreFoundationVersionNumber_iPhoneOS_3_2
	#define kCFCoreFoundationVersionNumber_iPhoneOS_3_2 478.61
#endif

#ifndef kCFCoreFoundationVersionNumber_iPhoneOS_4_0
	#define kCFCoreFoundationVersionNumber_iPhoneOS_4_0 550.32
#endif

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 40000
	#define IF_IOS4_OR_GREATER(...) \
		if(kCFCoreFoundationVersionNumber >= kCFCoreFoundationVersionNumber_iPhoneOS_4_0) { \
			__VA_ARGS__ \
		}
#else
	#define IF_IOS4_OR_GREATER(...)
#endif

#define IF_PRE_IOS4(...) \
	if (kCFCoreFoundationVersionNumber < kCFCoreFoundationVersionNumber_iPhoneOS_4_0) { \
		__VA_ARGS__ \
	}
