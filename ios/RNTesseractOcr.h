
#import "RCTBridgeModule.h"
#import <TesseractOCR.h>
#import "G8TesseractDelegate.h"

@interface RNTesseractOcr : NSObject <RCTBridgeModule, G8TesseractDelegate>

@end
