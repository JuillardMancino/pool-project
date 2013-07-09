#include "GraphicView.h"

#ifndef GAMECONTROLER_H
#define GAMECONTROLER_H


class GameControler
{
    public:
        GameControler();
        ~GameControler();
        void launchGame();
    protected:
    private:
        GraphicView *view;
};

#endif // GAMECONTROLER_H
