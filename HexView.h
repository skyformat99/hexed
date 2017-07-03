#pragma once

#include "Window.h"
#include <stdio.h>

class HexView : public Window
{
    public:
        HexView(ConsoleBuffer* consoleBuffer, const char* filename);
        ~HexView();

        virtual void Draw();
        virtual void OnWindowResize(int newWidth, int newHeight);

    private:
        void CacheFile();

        FILE* m_fp;
        char* m_buffer;
        int m_offset;
        int m_fileSize;
};
