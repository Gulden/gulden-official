// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#import "DBInputRecord.h"
#import "DBOutputRecord.h"
#import "DBTransactionStatus.h"
#import <Foundation/Foundation.h>

@interface DBTransactionRecord : NSObject
- (nonnull instancetype)initWithTxHash:(nonnull NSString *)txHash
                             timeStamp:(int64_t)timeStamp
                                amount:(int64_t)amount
                                   fee:(int64_t)fee
                                status:(DBTransactionStatus)status
                                height:(int32_t)height
                             blockTime:(int64_t)blockTime
                                 depth:(int32_t)depth
                                inputs:(nonnull NSArray<DBInputRecord *> *)inputs
                               outputs:(nonnull NSArray<DBOutputRecord *> *)outputs;
+ (nonnull instancetype)transactionRecordWithTxHash:(nonnull NSString *)txHash
                                          timeStamp:(int64_t)timeStamp
                                             amount:(int64_t)amount
                                                fee:(int64_t)fee
                                             status:(DBTransactionStatus)status
                                             height:(int32_t)height
                                          blockTime:(int64_t)blockTime
                                              depth:(int32_t)depth
                                             inputs:(nonnull NSArray<DBInputRecord *> *)inputs
                                            outputs:(nonnull NSArray<DBOutputRecord *> *)outputs;

@property (nonatomic, readonly, nonnull) NSString * txHash;

@property (nonatomic, readonly) int64_t timeStamp;

@property (nonatomic, readonly) int64_t amount;

@property (nonatomic, readonly) int64_t fee;

@property (nonatomic, readonly) DBTransactionStatus status;

@property (nonatomic, readonly) int32_t height;

@property (nonatomic, readonly) int64_t blockTime;

@property (nonatomic, readonly) int32_t depth;

@property (nonatomic, readonly, nonnull) NSArray<DBInputRecord *> * inputs;

@property (nonatomic, readonly, nonnull) NSArray<DBOutputRecord *> * outputs;

@end
