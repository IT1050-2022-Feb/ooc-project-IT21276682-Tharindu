//IT21276682
//R.M.T.B.Rathnayake
//MLB_05.01_12
//Vehicle Rental System


class Feedback
{
private:
	int feedbackNo;
	int user_ID;
	char email[50];
	char feedbackmsg[100];
  
public:
	Feedback(int fbNo, int userID, const char* mail, const char* fb);
	char setFeedback();
	char UpdateFeedback();
	char getFeedback();
	~Feedback();
};

