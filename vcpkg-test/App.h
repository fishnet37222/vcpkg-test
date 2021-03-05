#pragma once
#include "PCH.h"

class App final : public wxApp
{
public:
	bool OnInit() override;
};

wxDECLARE_APP(App);
