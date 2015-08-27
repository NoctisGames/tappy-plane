//
//  OpenGLESGpuProgramWrapper.h
//  gowengamedev-framework
//
//  Created by Stephen Gowen on 8/27/15.
//  Copyright (c) 2015 Gowen Game Dev. All rights reserved.
//

#ifndef __nosfuratu__OpenGLESTextureGpuProgramWrapper__
#define __nosfuratu__OpenGLESTextureGpuProgramWrapper__

#include "GpuProgramWrapper.h"
#include "TextureProgram.h"

class OpenGLESTextureGpuProgramWrapper : public GpuProgramWrapper
{
public:
    OpenGLESTextureGpuProgramWrapper(TextureProgramStruct textureProgramStruct);
    
    virtual void bind();
    
    virtual void unbind();
    
private:
    TextureProgramStruct m_textureProgram;
};

#endif /* defined(__nosfuratu__OpenGLESTextureGpuProgramWrapper__) */
