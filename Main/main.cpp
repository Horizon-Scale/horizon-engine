#include <iostream>

#if _HORIZON_WIN32
#include <Windows.h>

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow){
#else
int main(int argc, char** argv)
{
#endif
    std::cout << "Hello, world!\n";

    return 0;
}
