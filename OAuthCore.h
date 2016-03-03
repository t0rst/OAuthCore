//
//  OAuthCore.h
//
//  Created by Loren Brichter on 6/9/10.
//  Copyright 2010 Loren Brichter. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *OAuthorizationHeader(NSURL *url,
									  NSString *method, 
									  NSData *body, 
									  NSString *_oAuthConsumerKey, 
									  NSString *_oAuthConsumerSecret, 
									  NSString *_oAuthToken, 
									  NSString *_oAuthTokenSecret);

extern NSString *OAuthorizationHeaderWithCallback(NSURL *url,
												  NSString *method,
												  NSData *body,
												  NSString *_oAuthConsumerKey,
												  NSString *_oAuthConsumerSecret,
												  NSString *_oAuthToken,
												  NSString *_oAuthTokenSecret,
												  NSString *_oAuthCallback);

typedef NS_ENUM(uint8_t, OAuthCoreSignatureMethod)
{
//	OAuthCoreSignatureMethod_PLAIN_TEXT,	// allowed by RFC5849, but you gotta be joking, right?
//	OAuthCoreSignatureMethod_RSA_SHA1,		// allowed by RFC5849, but not supported here
	OAuthCoreSignatureMethod_HMAC_SHA1,		// allowed by RFC5849
	OAuthCoreSignatureMethod_HMAC_SHA256,	// non-standard, but...

	OAuthCoreSignatureMethod_Default		= OAuthCoreSignatureMethod_HMAC_SHA1,
};

extern NSString *OAuthHeader(
					NSURL *url,
					NSString *method,
					NSData *body,
					NSString *_oAuthConsumerKey,
					NSString *_oAuthConsumerSecret,
					NSString *_oAuthToken, // nullable
					NSString *_oAuthTokenSecret, // nullable
					NSString *_oAuthVerifier, // nullable,
					NSString *_oAuthCallback, // nullable
					OAuthCoreSignatureMethod sigMethod);
