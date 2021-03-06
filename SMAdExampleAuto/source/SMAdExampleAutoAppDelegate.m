
#import "SMAdExampleAutoAppDelegate.h"
#import "SMAdExampleAutoViewController.h"

@implementation SMAdExampleAutoAppDelegate

@synthesize window;
@synthesize viewController;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
	[self.window addSubview:viewController.view];
	[self.window makeKeyAndVisible];
	return YES;
}

- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}

@end
