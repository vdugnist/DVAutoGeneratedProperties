//
//  DVAutoGeneratedPropertiesHelpers.h
//  DVAutoGeneratedProperties
//
//  Created by Vladislav Dugnist on 04/03/2018.
//

#import <objc/runtime.h>

extern BOOL sel_isGetterOrSetter(id target, SEL sel);
extern BOOL sel_isSetter(id target, SEL sel);
extern BOOL sel_isGetter(id target, SEL sel);
extern SEL sel_getterFromSetter(SEL setter);
extern objc_property_t propertyForSelector(id obj, SEL sel);
extern char *copySetterMethodTypesForProperty(objc_property_t property);
extern char *copyGetterMethodTypesForProperty(objc_property_t property);
extern const char typeEncodingForProperty(objc_property_t property);
