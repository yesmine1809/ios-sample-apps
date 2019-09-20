/**
 * @class      OOManagedAdSpot OOManagedAdSpot.h "OOManagedAdSpot.h"
 * @brief      OOAdSpot
 * @details    OOAdSpot.h in OoyalaSDK
 * @warning    This is an abstract class. It is not meant to be instantiated.
 * @date       11/29/11
 * @copyright Copyright © 2015 Ooyala, Inc. All rights reserved.
 */

#import "OOAdSpot.h"
/**
 * Base class for concrete ad spot implementations.
 * Should not be used directly by app developers, instead use OOOoyalaAdSpot or OOVASTAd
 */
@interface OOManagedAdSpot : OOAdSpot

@property (nonatomic, readonly) NSURL *clickURL;        /**< The URL which should be opened when the OOAdSpot is clicked */
@property (nonatomic, readonly) NSArray *trackingURLs;  /**< The Array of URLs which should be pinged when the OOAdSpot plays */

@end
