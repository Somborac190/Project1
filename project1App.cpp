/***************************************************************
 * Name:      project1App.cpp
 * Purpose:   Code for Application Class
 * Author:    Rados ()
 * Created:   2022-04-29
 * Copyright: Rados ()
 * License:
 **************************************************************/

#include "project1App.h"

//(*AppHeaders
#include "project1Main.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(project1App);

bool project1App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	project1Dialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
