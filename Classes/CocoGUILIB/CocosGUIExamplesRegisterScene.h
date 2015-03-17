/****************************************************************************
 Copyright (c) 2013 cocos2d-x.org
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#ifndef __TestCpp__CocosGUIExamplesRegisterScene__
#define __TestCpp__CocosGUIExamplesRegisterScene__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "COcoGUILIB/System/UILayer.h"
#include "COcoGUILIB/System/UIHelper.h"
USING_NS_CC;
USING_NS_CC_EXT;


#define CCUIHELPER cocos2d::extension::UIHelper::instance()

#define MAP_BUTTON_TAG                           1000

class CocosGUIExamplesMapScene : public Scene
{
public:
    CocosGUIExamplesMapScene();
    ~CocosGUIExamplesMapScene();
    
    virtual void onEnter();
    virtual void onExit();
    
    virtual void runThisTest();
    
protected:

    
    // map
    void MapInit();
    void buildTouchEvent(Object* pSender);
    
    // map alert
    void MapAlertInit();
    void MapAlertClose(Object* pSender);
    
protected:
    UILayer* m_pUILayer;
};







#endif /* defined(__TestCpp__CocosGUIExamplesRegisterScene__) */
