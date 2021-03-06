//<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>
// TAOverlay
// Copyright (c) 2015 TAIMUR AYAZ
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>

#import <UIKit/UIKit.h>

#pragma mark DEFINITIONS

/**
 * Font for overlay status.
 */
#define OVERLAY_LABEL_FONT              [UIFont fontWithName:@"AvenirNext-Regular" size:16]

/**
 * Text color for overlay status.
 */
#define OVERLAY_LABEL_COLOR            [UIColor blackColor]

/**
 * Fill color for activity default icon.
 */
#define OVERLAY_ACTIVITY_DEFAULT_COLOR	[UIColor colorWithRed:102.0/255.0 green:204.0/255.0 blue:255.0/255.0 alpha:1.0]

/**
 * Fill color for activity leaf icon.
 */
#define OVERLAY_ACTIVITY_LEAF_COLOR     [UIColor colorWithRed:102.0/255.0 green:204.0/255.0 blue:255.0/255.0 alpha:1.0]

/**
 * Fill color for activity blur icon.
 */
#define OVERLAY_ACTIVITY_BLUR_COLOR     [UIColor colorWithRed:102.0/255.0 green:204.0/255.0 blue:255.0/255.0 alpha:1.0]

/**
 * Fill color for activity square icon.
 */
#define OVERLAY_ACTIVITY_SQUARE_COLOR   [UIColor colorWithRed:102.0/255.0 green:204.0/255.0 blue:255.0/255.0 alpha:1.0]

/**
 * Fill color for shadow.
 */
#define OVERLAY_SHADOW_COLOR            [UIColor colorWithRed:0.0 green:0.0 blue:0.0 alpha:0.8]

/**
 * Fill color for background. Default is white.
 */
#define OVERLAY_BACKGROUND_COLOR        [UIColor colorWithRed:1.0 green:1.0 blue:1.0 alpha:1.0]

/**
 * Blur tint color. Default is clear.
 */
#define OVERLAY_BLUR_TINT_COLOR        [UIColor colorWithRed:1.0 green:1.0 blue:1.0 alpha:0.0]

/**
 * Fill color for success icon.
 */
#define OVERLAY_SUCCESS_COLOR           [UIColor colorWithRed:0.0/255.0 green:255.0/255.0 blue:128.0/255.0 alpha:1.0]

/**
 * Fill color for warning icon.
 */
#define OVERLAY_WARNING_COLOR           [UIColor colorWithRed:255.0/255.0 green:184.0/255.0 blue:0.0/255.0 alpha:1.0]

/**
 * Fill color for error icon.
 */
#define OVERLAY_ERROR_COLOR             [UIColor colorWithRed:255.0/255.0 green:102.0/255.0 blue:102.0/255.0 alpha:1.0]

/**
 * Fill color for information icon.
 */
#define OVERLAY_INFO_COLOR              [UIColor colorWithRed:102.0/255.0 green:204.0/255.0 blue:255.0/255.0 alpha:1.0]

/**
 * Thickness of success, error, warning and info icons.
 */
#define OVERLAY_ICON_THICKNESS  3.0

/**
 * Duration of Overlay appear and disappear animations.
 */
#define ANIMATION_DURATION      0.15

/**
 * Default scale to value.
 */
#define SCALE_TO                1.4

/**
 * Default scale from value.
 */
#define SCALE_UNITY             1.0

/**
 * Label padding value for X-axis.
 */
#define LABEL_PADDING_X         12.0

/**
 * Label padding value for Y-axis.
 */
#define LABEL_PADDING_Y         66.0

/**
 * Check if given option is present.
 */
#define OptionPresent(options, value) (((options & (value)) == (value))

/**
 * get point with an offset.
 */
#define CGPointWithOffset(originPoint, offsetPoint) \
CGPointMake(originPoint.x + offsetPoint.x, originPoint.y + offsetPoint.y)

/**
 * Image array for leaf type activity.
 */
#define OVERLAY_ACTIVITY_LEAF_ARRAY                                                                                                         [NSArray arrayWithObjects:                                                                                                                                                                                             [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_leaf/1.png"]  maskImageWithColor:OVERLAY_ACTIVITY_LEAF_COLOR],                                       [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_leaf/2.png"]  maskImageWithColor:OVERLAY_ACTIVITY_LEAF_COLOR],                                               [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_leaf/3.png"]  maskImageWithColor:OVERLAY_ACTIVITY_LEAF_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_leaf/4.png"]  maskImageWithColor:OVERLAY_ACTIVITY_LEAF_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_leaf/5.png"]  maskImageWithColor:OVERLAY_ACTIVITY_LEAF_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_leaf/6.png"]  maskImageWithColor:OVERLAY_ACTIVITY_LEAF_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_leaf/7.png"]  maskImageWithColor:OVERLAY_ACTIVITY_LEAF_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_leaf/8.png"]  maskImageWithColor:OVERLAY_ACTIVITY_LEAF_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_leaf/9.png"]  maskImageWithColor:OVERLAY_ACTIVITY_LEAF_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_leaf/10.png"] maskImageWithColor:OVERLAY_ACTIVITY_LEAF_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_leaf/11.png"] maskImageWithColor:OVERLAY_ACTIVITY_LEAF_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_leaf/12.png"] maskImageWithColor:OVERLAY_ACTIVITY_LEAF_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_leaf/13.png"] maskImageWithColor:OVERLAY_ACTIVITY_LEAF_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_leaf/14.png"] maskImageWithColor:OVERLAY_ACTIVITY_LEAF_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_leaf/15.png"] maskImageWithColor:OVERLAY_ACTIVITY_LEAF_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_leaf/16.png"] maskImageWithColor:OVERLAY_ACTIVITY_LEAF_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_leaf/17.png"] maskImageWithColor:OVERLAY_ACTIVITY_LEAF_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_leaf/18.png"] maskImageWithColor:OVERLAY_ACTIVITY_LEAF_COLOR], nil]

/**
 * Image array for blur type activity.
 */
#define OVERLAY_ACTIVITY_BLUR_ARRAY                                                                                                                   [[NSArray alloc] initWithObjects:                                                                                                                                             [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/1.png"]  maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/2.png"]  maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/3.png"]  maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/4.png"]  maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/5.png"]  maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/6.png"]  maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/7.png"]  maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/8.png"]  maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/9.png"]  maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/10.png"] maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/11.png"] maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/12.png"] maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/13.png"] maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/14.png"] maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/15.png"] maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/16.png"] maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/17.png"] maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/18.png"] maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/19.png"] maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/18.png"] maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/17.png"] maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/16.png"] maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/15.png"] maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/14.png"] maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/13.png"] maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/12.png"] maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/11.png"] maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/10.png"] maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/9.png"]  maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/8.png"]  maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/7.png"]  maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/6.png"]  maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/5.png"]  maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/4.png"]  maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/3.png"]  maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],                                                                                              [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_blur/2.png"]  maskImageWithColor:OVERLAY_ACTIVITY_BLUR_COLOR],nil]

/**
 * Image array for square type activity.
 */
#define OVERLAY_ACTIVITY_SQUARE_ARRAY                                                                                                         [NSArray arrayWithObjects:                                                                                                                                                                                             [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_square/1.png"]  maskImageWithColor:OVERLAY_ACTIVITY_SQUARE_COLOR],                                       [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_square/2.png"]  maskImageWithColor:OVERLAY_ACTIVITY_SQUARE_COLOR],                                               [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_square/3.png"]  maskImageWithColor:OVERLAY_ACTIVITY_SQUARE_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_square/4.png"]  maskImageWithColor:OVERLAY_ACTIVITY_SQUARE_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_square/5.png"]  maskImageWithColor:OVERLAY_ACTIVITY_SQUARE_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_square/6.png"]  maskImageWithColor:OVERLAY_ACTIVITY_SQUARE_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_square/7.png"]  maskImageWithColor:OVERLAY_ACTIVITY_SQUARE_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_square/8.png"]  maskImageWithColor:OVERLAY_ACTIVITY_SQUARE_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_square/9.png"]  maskImageWithColor:OVERLAY_ACTIVITY_SQUARE_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_square/10.png"] maskImageWithColor:OVERLAY_ACTIVITY_SQUARE_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_square/11.png"] maskImageWithColor:OVERLAY_ACTIVITY_SQUARE_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_square/12.png"] maskImageWithColor:OVERLAY_ACTIVITY_SQUARE_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_square/13.png"] maskImageWithColor:OVERLAY_ACTIVITY_SQUARE_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_square/14.png"] maskImageWithColor:OVERLAY_ACTIVITY_SQUARE_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_square/15.png"] maskImageWithColor:OVERLAY_ACTIVITY_SQUARE_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_square/16.png"] maskImageWithColor:OVERLAY_ACTIVITY_SQUARE_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_square/17.png"] maskImageWithColor:OVERLAY_ACTIVITY_SQUARE_COLOR],                                                [[UIImage imageNamed:@"TAOverlay.bundle/ACTIVITY_square/18.png"] maskImageWithColor:OVERLAY_ACTIVITY_SQUARE_COLOR], nil]


/** Available notifications for TAOverlay. */
extern NSString * const TAOverlayWillDisappearNotification;
extern NSString * const TAOverlayDidDisappearNotification;
extern NSString * const TAOverlayWillAppearNotification;
extern NSString * const TAOverlayDidAppearNotification;

/** TAOverlay user info key. Notifications can provide current status, if not 'nil'. */
extern NSString * const TAOverlayLabelTextUserInfoKey;

/** Overlay enum indicating the type of the overlay. */
typedef NS_ENUM(NSInteger, TOverlayType)
{
    tOverlayTypeActivityDefault,
    tOverlayTypeActivityLeaf,
    tOverlayTypeActivityBlur,
    tOverlayTypeActivitySquare,
    tOverlayTypeSucess,
    tOverlayTypeError,
    tOverlayTypeWarning,
    tOverlayTypeInfo,
    tOverlayTypeImage,
    tOverlayTypeImageArray
};

/** Overlay enum indicating the size of the overlay. */
typedef NS_ENUM(NSInteger, TOverlaySize)
{
    tOverlaySizeFullScreen,
    tOverlaySizeBar,
    tOverlaySizeRoundedRect
};

/** Overlay options indicating the type and appearence of the overlay. */
typedef NS_OPTIONS(NSInteger, TAOverlayOptions)
{
    TAOverlayOptionNone                       = 0,
    TAOverlayOptionOpaqueBackground           = 1 << 0,     // Opaque overlay background
    TAOverlayOptionOverlayShadow              = 1 << 1,     // Show overlay shadow
    TAOverlayOptionAllowUserInteraction       = 1 << 2,     // Allow User to interact with objects behind the overlay
    TAOverlayOptionAutoHide                   = 1 << 3,     // Hide the overlay automatically

    TAOverlayOptionOverlayTypeActivityDefault = 1 << 4,     // Show default activity indicator
    TAOverlayOptionOverlayTypeActivityLeaf    = 1 << 5,     // Show leaf activity indicator
    TAOverlayOptionOverlayTypeActivityBlur    = 1 << 6,     // Show blur activity indicator
    TAOverlayOptionOverlayTypeActivitySquare  = 1 << 7,     // Show blur activity indicator
    TAOverlayOptionOverlayTypeSuccess         = 1 << 8,     // Show success
    TAOverlayOptionOverlayTypeWarning         = 1 << 9,     // Show warning
    TAOverlayOptionOverlayTypeError           = 1 << 10,    // Show error
    TAOverlayOptionOverlayTypeInfo            = 1 << 11,    // Show info

    TAOverlayOptionOverlaySizeFullScreen      = 1 << 12,    // Show fullscreen overlay
    TAOverlayOptionOverlaySizeBar             = 1 << 13,    // Show bar overlay
    TAOverlayOptionOverlaySizeRoundedRect     = 1 << 14     // Show standard rounded rectangle overlay
};


#pragma mark UIImage Category Interface

/** Category for creating color masked images. */
@interface UIImage (TAOverlay)

/**
 *  Creates and returns a new image object that is masked with the specified mask color.
 *
 *  @param color The color value for the mask. This value must not be `nil`.
 *
 *  @return A new image object masked with the specified color.
 */
- (UIImage *) maskImageWithColor:(UIColor *)color;

@end


#pragma mark TAOverlay Interface

/** A minimalistic overlay for providing the user with useful information. */
@interface TAOverlay : UIView

+ (TAOverlay *)shared;

/**
 *  hides currently shown overlay.
 */
+ (void) hideOverlay;

/**
 * Creates and returns a new image object that is masked with the specified mask color.
 *
 * @param status The text to display on the overlay. If the value is 'nil', overlay is shown without a label.
 * @param options A mask of options indicating the type and appearence of the overlay.
 */
+ (void) showOverlayWithLabel:(NSString *)status Options:(TAOverlayOptions)options;

/**
 * Creates and returns a new image object that is masked with the specified mask color.
 *
 * @param status The text to display on the overlay. If the value is 'nil', overlay is shown without a label.
 * @param image The image to display as an icon on the overlay. The image cannot be 'nil'.
 * @param options A mask of options indicating the type and appearence of the overlay.
 */
+ (void) showOverlayWithLabel:(NSString *)status Image:(UIImage *)image Options:(TAOverlayOptions)options;

/**
 * Creates and returns a new image object that is masked with the specified mask color.
 *
 * @param status The text to display on the overlay. If the value is 'nil', overlay is shown without a label.
 * @param imageArray The array containing UIImage objects. Use this if your animation is easily expressable in images. The array cannot be 'nil'.
 * @param duration The duration of the animation to cycle through the array of images.
 * @param options A mask of options indicating the type and appearence of the overlay.
 */
+ (void) showOverlayWithLabel:(NSString *)status ImageArray:(NSArray *)imageArray Duration:(CGFloat)duration Options:(TAOverlayOptions)options;

#pragma mark PROPERTIES

/** A boolean value indicating if the overlay allows user interaction. */
@property (nonatomic, assign) BOOL interaction;

/** A boolean value indicating if the overlay shows a shadow background. */
@property (nonatomic, assign) BOOL showBackground;

/** A boolean value indicating if the overlay's background is blurred. */
@property (nonatomic, assign) BOOL showBlurred;

/** A boolean value indicating if the overlay auto hides. */
@property (nonatomic, assign) BOOL shouldHide;

/** The current application window. */
@property (nonatomic, retain) UIWindow                 *window;

/** The shadow of the overlay. */
@property (nonatomic, retain) UIView                   *background;

/** The overlay view. */
@property (nonatomic, retain) UIToolbar                *overlay;

/** The default activity indicator */
@property (nonatomic, retain) UIActivityIndicatorView  *spinner;

/** The image view for image and image array based icons */
@property (nonatomic, retain) UIImageView              *image;

/** The status label of the overlay */
@property (nonatomic, retain) UILabel                  *label;

/** The Layer for warning, error, info and success icons. */
@property (nonatomic, retain) CAShapeLayer             *icon;

/** An array of images for use as a custom activity indicator. */
@property (nonatomic, strong) NSArray                  *imageArray;

/** The current label text. */
@property (nonatomic, strong) NSString                 *labelText;

/** The current icon image. */
@property (nonatomic, strong) UIImage                  *iconImage;

/** The animation duration of custom array. */
@property (nonatomic) CGFloat                          customAnimationDuration;

/** The type of current overlay. */
@property (nonatomic) TOverlayType  overlayType;

/** The size of current overlay. */
@property (nonatomic) TOverlaySize  overlaySize;

@end
