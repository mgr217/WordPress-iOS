#import <UIKit/UIKit.h>

typedef NSString * SupportSourceTag NS_EXTENSIBLE_STRING_ENUM;
extern SupportSourceTag const SupportSourceTagWPComLogin;
extern SupportSourceTag const SupportSourceTagWPComSignup;
extern SupportSourceTag const SupportSourceTagWPOrgLogin;
extern SupportSourceTag const SupportSourceTagJetpackLogin;
extern SupportSourceTag const SupportSourceTagGeneralLogin;
extern SupportSourceTag const SupportSourceTagInAppFeedback;
extern SupportSourceTag const SupportSourceTagAztecFeedback;

@interface SupportViewController : UITableViewController
@property (nonatomic, strong) SupportSourceTag sourceTag;
@property (nonatomic, strong) NSDictionary *helpshiftOptions;

- (void)showFromTabBar;

@end
