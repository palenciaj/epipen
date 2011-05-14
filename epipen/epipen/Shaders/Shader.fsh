//
//  Shader.fsh
//  epipen
//
//  Created by Jose on 5/14/11.
//  Copyright 2011 IMT. All rights reserved.
//

varying lowp vec4 colorVarying;

void main()
{
    gl_FragColor = colorVarying;
}
