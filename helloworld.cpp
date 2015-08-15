#include <wx/wxprec.h>

#ifndef W_PRECOMP
#include <wx/wx.h>
#endif

#if 0
class CHelloWorldFrame : public wxFrame
{
    public:
        CHelloWorldFrame(wxWindow* parent, 
            wxWindowID id, const wxString& title);

}; 

CHelloWorldFrame::CHelloWorldFrame(wxWindow* parent, 
            wxWindowID id, const wxString& title) :
        wxFrame(parent, id, title)
{
}
#endif

class CHelloWorldApp : public wxApp
{
    public:
        virtual bool OnInit();
};

bool CHelloWorldApp::OnInit()
{
    wxFrame* frame = new wxFrame(NULL, wxID_ANY, "HelloWorld");
    frame->Show();

    return true;    
}

IMPLEMENT_APP(CHelloWorldApp);
