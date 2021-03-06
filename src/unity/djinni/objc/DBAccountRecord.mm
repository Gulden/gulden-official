// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#import "DBAccountRecord.h"


@implementation DBAccountRecord

- (nonnull instancetype)initWithUUID:(nonnull NSString *)UUID
                               label:(nonnull NSString *)label
                               state:(nonnull NSString *)state
                                type:(nonnull NSString *)type
                                isHD:(BOOL)isHD
{
    if (self = [super init]) {
        _UUID = [UUID copy];
        _label = [label copy];
        _state = [state copy];
        _type = [type copy];
        _isHD = isHD;
    }
    return self;
}

+ (nonnull instancetype)accountRecordWithUUID:(nonnull NSString *)UUID
                                        label:(nonnull NSString *)label
                                        state:(nonnull NSString *)state
                                         type:(nonnull NSString *)type
                                         isHD:(BOOL)isHD
{
    return [(DBAccountRecord*)[self alloc] initWithUUID:UUID
                                                  label:label
                                                  state:state
                                                   type:type
                                                   isHD:isHD];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p UUID:%@ label:%@ state:%@ type:%@ isHD:%@>", self.class, (void *)self, self.UUID, self.label, self.state, self.type, @(self.isHD)];
}

@end
