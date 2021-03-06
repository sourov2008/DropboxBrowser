///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSharedFolderLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedFolderLogInfo` struct.
///
/// SharedFolder's logged information.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedFolderLogInfo : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Namespace ID. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *nsId;

/// Shared folder display name.
@property (nonatomic, readonly, copy) NSString *displayName;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param displayName Shared folder display name.
/// @param nsId Namespace ID. Might be missing due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDisplayName:(NSString *)displayName nsId:(nullable NSString *)nsId;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param displayName Shared folder display name.
///
/// @return An initialized instance.
///
- (instancetype)initWithDisplayName:(NSString *)displayName;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedFolderLogInfo` struct.
///
@interface DBTEAMLOGSharedFolderLogInfoSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedFolderLogInfo` instances.
///
/// @param instance An instance of the `DBTEAMLOGSharedFolderLogInfo` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedFolderLogInfo` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGSharedFolderLogInfo *)instance;

///
/// Deserializes `DBTEAMLOGSharedFolderLogInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedFolderLogInfo` API object.
///
/// @return An instantiation of the `DBTEAMLOGSharedFolderLogInfo` object.
///
+ (DBTEAMLOGSharedFolderLogInfo *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
