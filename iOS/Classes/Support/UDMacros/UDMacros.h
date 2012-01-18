//
//  UDMacros.h
//
//  Created by Rolandas Razma on 11/14/09.
//  Copyright 2009 UD7. All rights reserved.
//

#define _(format, ...) [NSString stringWithFormat: [[NSBundle mainBundle] localizedStringForKey:format value:@"" table:nil] , ##__VA_ARGS__]
#define MAX3(A,B,C) MAX(MAX(A, B), C)


static BOOL isDeviceIPad(){
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 30200
    if ( UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad ) {
        return YES;
    }
#endif
    return NO;
}
