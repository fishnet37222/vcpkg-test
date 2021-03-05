#include "PCH.h"
#include "App.h"
#include "MainWindow.h"

wxIMPLEMENT_APP(App);

bool App::OnInit()
{
	auto* win = new MainWindow();
	this->SetTopWindow(win);
	win->Show();
	return true;
}
