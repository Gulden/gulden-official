// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#import <Foundation/Foundation.h>


/**
 * Interface to handle result of RPC commands
 * Calls either onSuccess or onError depending on whether command suceedes or fails
 */
@protocol DBIRpcListener

/**
 * Returns a filtered version of the command with sensitive information like passwords removed
 * Any kind of 'command history' functionality should store this filtered command and not the original command
 */
- (void)onFilteredCommand:(nonnull NSString *)filteredCommand;

/**
 * Returns the result and a filtered version of the command with sensitive information like passwords removed
 * Any kind of 'command history' functionality should store this filtered command and not the original command
 */
- (void)onSuccess:(nonnull NSString *)filteredCommand
           result:(nonnull NSString *)result;

/**
 * Returns an error message which might be a plain string or JSON depending on the type of error
 * Also returns a filtered version of the command with sensitive information like passwords removed
 * Any kind of 'command history' functionality should store this filtered command and not the original command
 */
- (void)onError:(nonnull NSString *)filteredCommand
   errorMessage:(nonnull NSString *)errorMessage;

@end
