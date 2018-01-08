/*******************************************************************************
    File: PFrame.hpp
    Purpose: Defines the main frame (window) of the app.

    This file is property of Hashir Ahmad and Daud Akhtar Naveed from SEECS,
    NUST batch of 2k16, section 6C.
*******************************************************************************/

#ifndef PFRAME_HPP
#define PFRAME_HPP

#include <wx/frame.h>
#include <wx/textctrl.h>
#include <wx/stattext.h>

#include <string>
#include <vector>

bool update_filter_words();

class PFrame : public wxFrame {
public:
	PFrame(const wxString &title, const wxPoint &pos, const wxSize &size,
		long style = wxDEFAULT_FRAME_STYLE);

private:
	wxStaticText *plagiarismLabel;
	wxTextCtrl *inputCtrl;
	wxTextCtrl *matchCtrl;

	void highlightIndices(const std::vector<int> &indices,
		const std::string &haystack);

	// Handlers
	void onCheck(wxCommandEvent &event);

	wxDECLARE_EVENT_TABLE();
};

#endif // PFRAME_HPP
