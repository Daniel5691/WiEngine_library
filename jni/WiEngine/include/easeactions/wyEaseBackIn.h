﻿/*
 * Copyright (c) 2010 WiYun Inc.

 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:

 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef __wyEaseBackIn_h__
#define __wyEaseBackIn_h__

#include "wyEaseAction.h"

/**
 * @class wyEaseBackIn
 *
 * \if English
 * See demo EaseActions\\EaseBackIn
 * \else
 * 详细了解可见示例 EaseActions\\EaseBackIn.
 * \endif
 */
class WIENGINE_API wyEaseBackIn : public wyEaseAction {
public:
	/**
	 * \if English
	 * Create a ease back in instance
	 *
	 * @param wrapped \link wyIntervalAction wyIntervalAction\endlink
	 * @return \link wyEaseBackIn wyEaseBackIn\endlink
	 * \else
	 * 静态构造函数
	 *
	 * @param wrapped 线性动作的\link wyIntervalAction wyIntervalAction\endlink的指针
	 * @return \link wyEaseBackIn wyEaseBackIn\endlink
	 * \endif
	 */
	static wyEaseBackIn* make(wyIntervalAction* wrapped = NULL);

	/**
	 * \if English
	 * Constructor
	 *
	 * @param wrapped \link wyIntervalAction wyIntervalAction\endlink
	 * \else
	 * 构造函数
	 *
	 * @param wrapped \link wyIntervalAction wyIntervalAction\endlink
	 * \endif
	 */
	wyEaseBackIn(wyIntervalAction* wrapped = NULL);

	virtual ~wyEaseBackIn();

	/// @see wyAction::copy
	virtual wyAction* copy();

	/// @see wyAction::reverse
	virtual wyAction* reverse();
	
	/// @see wyAction::update
	virtual void update(float t);
};

#endif // __wyEaseBackIn_h__
