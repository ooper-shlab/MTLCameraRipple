//
//  ShaderTypes.h
//  MTLCameraRipple
//
//  Created by 開発 on 2019/05/25.
//  Copyright © 2019 OOPer's. All rights reserved.
//

#ifndef ShaderTypes_h
#define ShaderTypes_h

#ifdef __METAL_VERSION__
#define NS_ENUM(_type, _name) enum _name : _type _name; enum _name : _type
#define NSInteger metal::int32_t
#else
#import <Foundation/Foundation.h>
#endif

#include <simd/simd.h>

typedef NS_ENUM(NSInteger, BufferIndex) {
    BufferIndexVertexPosition = 0,
    BufferIndexVertexTexCoord = 1,
    BufferIndexVertexUniforms = 2,
};

typedef NS_ENUM(NSInteger, TextureIndex) {
    TextureIndexY  = 0,
    TextureIndexUV = 1,
};

typedef NS_ENUM(NSInteger, VertexAttribute) {
    VertexAttributePosition  = 0,
    VertexAttributeTexCoord  = 1,
};


#endif /* ShaderTypes_h */
