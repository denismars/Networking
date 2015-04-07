@import Foundation;
@import UIKit;

@interface Networking : NSObject

- (instancetype)initWithBaseURL:(NSString *)baseURL;

- (void)GET:(NSString *)path
 completion:(void (^)(id JSON, NSError *error))completion;

+ (void)stubGET:(NSString *)path response:(id)JSON;

@end