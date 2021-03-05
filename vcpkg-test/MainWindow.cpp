#include "PCH.h"
#include "MainWindow.h"

MainWindow::MainWindow() : wxFrame(nullptr, wxID_ANY, "Hello World")
{
	this->InitUI();
}

void MainWindow::InitUI()
{
	this->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_FRAMEBK));
	this->CenterOnScreen();
}
