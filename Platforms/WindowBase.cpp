#include "WindowBase.hpp"

namespace HorizonEngine::Plaforms {
    WindowBase::WindowBase(std::string pWindowName, int pPosX, int pPosY, int pWidth, int pHeight)
    {
        WindowBase::windowName = pWindowName;
        WindowBase::posX = pPosX;
        WindowBase::posY = pPosY;
        WindowBase::width = pWidth;
        WindowBase::height = pHeight;

        WindowBase::create_window(windowName, posX, posY, width, height);
    }

    WindowBase::~WindowBase()
    {
        WindowBase::destroy_window(WindowBase::window);
    }
}