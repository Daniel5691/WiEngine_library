/*
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
#ifndef __wyBottomTilesShrinkOut_h__
#define __wyBottomTilesShrinkOut_h__

#include "wyTiledGrid3DAction.h"
#include "wyTypes.h"

/**
 * @class wyBottomTilesShrinkOut
 *
 * \if English
 * The node which run this action will be divided into tiles, and it will disappear in tiles
 * one row after another, from bottom to top, looks like the node shrinks from the bottom.
 * \else
 * 把屏幕分成网格，从底部开始收缩每行的网格
 * \endif
 */
class WIENGINE_API wyBottomTilesShrinkOut : public wyTiledGrid3DAction {
private:
	float tileTest(wyDimension pos, float time);
	void turnOnTile(wyDimension pos);
	void turnOffTile(wyDimension pos);
	void transformTile(wyDimension pos, float distance);

public:
	/**
	 * \if English
	 * factory function, used to create a new instance with autoRelease enabled
	 *
	 * @param duration time, in seconds
	 * @param gridX row count
	 * @param gridY column count
	 * \else
	 * 静态构造函数
	 *
	 * @param duration 动作持续时间
	 * @param gridX 网格行数
	 * @param gridY 网格列数
	 * \endif
	 */
	static wyBottomTilesShrinkOut* make(float duration, int gridX, int gridY);

	/**
	 * \if English
	 * constructor
	 *
	 * @param duration time, in seconds
	 * @param gridX row count
	 * @param gridY column count
	 * \else
	 * 构造函数
	 *
	 * @param duration 动作持续时间
	 * @param gridX 网格行数
	 * @param gridY 网格列数
	 * \endif
	 */
	wyBottomTilesShrinkOut(float duration, int gridX, int gridY);

	/**
	 * \if English
	 * destructor
	 * \else
	 * 析构函数
	 * \endif
	 */
	virtual ~wyBottomTilesShrinkOut();

	/// @see wyAction::copy
	virtual wyAction* copy();

	/// @see wyAction::update
	virtual void update(float t);
};

#endif // __wyBottomTilesShrinkOut_h__
