// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Autogenerated from Pigeon (v0.1.21), do not edit directly.
// See also: https://pub.dev/packages/pigeon
#import <Foundation/Foundation.h>
@protocol FlutterBinaryMessenger;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

@class CachedTextureMessage;
@class CachedCreateMessage;
@class CachedLoopingMessage;
@class CachedVolumeMessage;
@class CachedPlaybackSpeedMessage;
@class CachedPositionMessage;
@class CachedMixWithOthersMessage;

@interface CachedTextureMessage : NSObject
@property(nonatomic, strong, nullable) NSNumber *textureId;
@end

@interface CachedCreateMessage : NSObject
@property(nonatomic, copy, nullable) NSString *asset;
@property(nonatomic, copy, nullable) NSString *uri;
@property(nonatomic, copy, nullable) NSString *packageName;
@property(nonatomic, copy, nullable) NSString *formatHint;
@property(nonatomic, strong, nullable) NSDictionary *httpHeaders;
@end

@interface CachedLoopingMessage : NSObject
@property(nonatomic, strong, nullable) NSNumber *textureId;
@property(nonatomic, strong, nullable) NSNumber *isLooping;
@end

@interface CachedVolumeMessage : NSObject
@property(nonatomic, strong, nullable) NSNumber *textureId;
@property(nonatomic, strong, nullable) NSNumber *volume;
@end

@interface CachedPlaybackSpeedMessage : NSObject
@property(nonatomic, strong, nullable) NSNumber *textureId;
@property(nonatomic, strong, nullable) NSNumber *speed;
@end

@interface CachedPositionMessage : NSObject
@property(nonatomic, strong, nullable) NSNumber *textureId;
@property(nonatomic, strong, nullable) NSNumber *position;
@end

@interface CachedMixWithOthersMessage : NSObject
@property(nonatomic, strong, nullable) NSNumber *mixWithOthers;
@end

@protocol CachedVideoPlayerPlusApi
- (void)initialize:(FlutterError *_Nullable *_Nonnull)error;
- (nullable CachedTextureMessage *)create:(CachedCreateMessage *)input
                                 error:(FlutterError *_Nullable *_Nonnull)error;
- (void)dispose:(CachedTextureMessage *)input error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setLooping:(CachedLoopingMessage *)input error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setVolume:(CachedVolumeMessage *)input error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setPlaybackSpeed:(CachedPlaybackSpeedMessage *)input
                   error:(FlutterError *_Nullable *_Nonnull)error;
- (void)play:(CachedTextureMessage *)input error:(FlutterError *_Nullable *_Nonnull)error;
- (nullable CachedPositionMessage *)position:(CachedTextureMessage *)input
                                    error:(FlutterError *_Nullable *_Nonnull)error;
- (void)seekTo:(CachedPositionMessage *)input error:(FlutterError *_Nullable *_Nonnull)error;
- (void)pause:(CachedTextureMessage *)input error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setMixWithOthers:(CachedMixWithOthersMessage *)input
                   error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void CachedVideoPlayerPlusApiSetup(id<FlutterBinaryMessenger> binaryMessenger,
                                   id<CachedVideoPlayerPlusApi> _Nullable api);

NS_ASSUME_NONNULL_END
