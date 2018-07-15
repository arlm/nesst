//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("UnitMain.cpp", FormMain);
USEFORM("UnitCHREditor.cpp", FormCHREditor);
USEFORM("UnitSwapColors.cpp", FormSwapColors);
USEFORM("UnitNametableOffset.cpp", FormNameOffset);
USEFORM("UnitNESBank.cpp", FormBank);
USEFORM("UnitSetSize.cpp", FormSetSize);
USEFORM("UnitName.cpp", FormName);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	try
	{
		Application->Initialize();
		Application->Title = "NES Screen Tool";
		Application->CreateForm(__classid(TFormMain), &FormMain);
		Application->CreateForm(__classid(TFormCHREditor), &FormCHREditor);
		Application->CreateForm(__classid(TFormSwapColors), &FormSwapColors);
		Application->CreateForm(__classid(TFormNameOffset), &FormNameOffset);
		Application->CreateForm(__classid(TFormBank), &FormBank);
		Application->CreateForm(__classid(TFormSetSize), &FormSetSize);
		Application->CreateForm(__classid(TFormName), &FormName);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
