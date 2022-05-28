/***************************************************************
 * Name:      project1Main.h
 * Purpose:   Defines Application Frame
 * Author:    Rados ()
 * Created:   2022-04-29
 * Copyright: Rados ()
 * License:
 **************************************************************/

#ifndef PROJECT1MAIN_H
#define PROJECT1MAIN_H

//(*Headers(project1Dialog)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/stattext.h>
//*)

class project1Dialog: public wxDialog
{
    public:

        project1Dialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~project1Dialog();

    private:

        //(*Handlers(project1Dialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(project1Dialog)
        static const long ID_STATICTEXT1;
        static const long ID_BUTTON1;
        static const long ID_STATICLINE1;
        static const long ID_BUTTON2;
        //*)

        //(*Declarations(project1Dialog)
        wxBoxSizer* BoxSizer1;
        wxBoxSizer* BoxSizer2;
        wxButton* Button1;
        wxButton* Button2;
        wxStaticLine* StaticLine1;
        wxStaticText* StaticText1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // PROJECT1MAIN_H
