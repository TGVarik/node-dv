/*
 * node-dv - Document Vision for node.js
 *
 * Copyright (c) 2012 Christoph Schulz
 * Copyright (c) 2013-2015 creatale GmbH, contributors listed under AUTHORS
 * 
 * MIT License <https://github.com/creatale/node-dv/blob/master/LICENSE>
 */
#include <node.h> // Side-effects required for VS build!
#include <nan.h>
#include "image.h"
#include "tesseract.h"
#include "zxing.h"

NAN_MODULE_INIT(InitAll)
{
    binding::Image::Init(target);
    binding::Tesseract::Init(target);
    binding::ZXing::Init(target);
}

NODE_MODULE(dvBinding, InitAll)
