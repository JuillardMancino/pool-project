#include "include/GameControler.h"
#include "include/GraphicView.h"
GameControler::GameControler()
{
    this->view = new GraphicView();
}

GameControler::~GameControler()
{
    //dtor
}

void GameControler::launchGame()
{
    this->view->LaunchView();
}
