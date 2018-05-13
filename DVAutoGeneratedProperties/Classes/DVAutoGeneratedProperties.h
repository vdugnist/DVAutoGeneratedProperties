//
//  DVAutoGeneratedProperties.h
//  DVAutoGeneratedProperties
//
//  Created by Vladislav Dugnist on 03/03/2018.
//

#import <Foundation/Foundation.h>

typedef void (^dvPropertySetterBlock)(id blockSelf, id value);
typedef id (^dvPropertyGetterBlock)(id blockSelf);

@interface DVAutoGeneratedProperties : NSObject

+ (dvPropertySetterBlock)setterBlockForTarget:(id)target getterSelector:(SEL)getterSelector;
+ (dvPropertyGetterBlock)getterBlockForTarget:(id)target getterSelector:(SEL)getterSelector;

@end
