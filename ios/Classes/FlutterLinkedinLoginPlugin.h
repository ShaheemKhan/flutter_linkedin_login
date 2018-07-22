#import <Flutter/Flutter.h>

@interface FlutterLinkedinLoginPlugin : NSObject<FlutterPlugin>

+ (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;

+ (void)clearSession:(FlutterResult) result;
@end
