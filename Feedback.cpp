#include "Feedback.h"
#include <cstring>
Feedback::Feedback(int fbNo, int userID, const char* mail, const char* fb)
{
	feedbackNo = fbNo;
	user_ID = userID;
	strcpy(email, mail);
	strcpy(feedbackmsg, fb);
}

char Feedback::setFeedback()
{
}

char Feedback::UpdateFeedback()
{
	return 0;
}


char Feedback::getFeedback()
{
	return 0;
}

Feedback::~Feedback()
{
}
