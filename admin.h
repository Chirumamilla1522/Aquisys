void ques_initialize(int questart_id,int quiz_id);
void preveiw_quiz(int quiz_Id);
void addquiz();
void change_marks(int quiz_id);
void response_admin(int quiz_id);
void showqlist_admin();
void add_extra_questions();
void edit_questions(int quiz_id);
void preveiw_quiz(int quiz_Id);
void addquestions_initial(int questart_id,int quiz_id);
void add_question(int quiz_id,int qustion_no,int alt);
void preview_question(int quiz_id,int ques_id);
void admin_quizdetails(int n);
void preview_all_questions(int quiz_id);
void change_max_attempts(int quiz_id);
void quiz_result_admin(int stu_id,int index, int attempt);
void see_response_admin(int stu_id,int i, int index, int attempt);
void admin_Matrix(int stu_id,int index, int attempt);
void delete_quiz(int quiz_id);
void delete_user(int id);
void view_user(int id);
void take_password(int id);
int authenticate();
char takeyorno();
void view_userlist();
void manage_tags();
void taguser(int id);