#ifndef _H_WINDOW_BASE
#define _H_WINDOW_BASE

#include <string>

namespace HorizonEngine::Plaforms
{
    class WindowBase
    {
    protected:
        virtual WindowBase create_window(std::string pWindowName, int pPosX, int pPosY, int pWidth, int pHeight);
        virtual void destroy_window(WindowBase *window);
    public:
        WindowBase* window = nullptr;
        std::string windowName;
        int posX = 0;
        int posY = 0;
        int width = 500;
        int height = 500;


        WindowBase(std::string pWindowName, int pPosX, int pPosY, int pWidth, int pHeight);
        ~WindowBase();
    };   
}

#endif //_H_WINDOW_BASE