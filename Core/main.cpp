#include "file.h"
#include "function.h"

void main()
{
	//__Set_calender();
	//__Create_index_file();
	//__Create_dir(CATEGORY);

	//__Create_category("식비", 10);
	//__Create_category("교통비", 1);
	//__Create_category("경조사비", 31);
	//__Remove_category("식비");

	__Insert_cate_data("식비", __today_date() + '-' + __current_time(), "수입1", 10, INCOME);
	__Insert_cate_data("식비", __today_date() + '-' + __current_time(), "수입2", 100, INCOME);
	__Insert_cate_data("식비", __today_date() + '-' + __current_time(), "수입3", 1000, INCOME);
	__Insert_cate_data("식비", __today_date() + '-' + __current_time(), "수입4", 10000, INCOME);
	__Insert_cate_data("식비", __today_date() + '-' + __current_time(), "수입5", 10, INCOME);
	__Insert_cate_data("식비", __today_date() + '-' + __current_time(), "수입6", 100, INCOME);
	__Insert_cate_data("식비", __today_date() + '-' + __current_time(), "수입7", 1000, INCOME);
	__Insert_cate_data("식비", __today_date() + '-' + __current_time(), "지출0", 10, EXPENSE);
	__Insert_cate_data("식비", __today_date() + '-' + __current_time(), "지출1", 100, EXPENSE);
	__Insert_cate_data("식비", __today_date() + '-' + __current_time(), "지출2", 1000, EXPENSE);
	__Insert_cate_data("식비", __today_date() + '-' + __current_time(), "지출3", 10000, EXPENSE);
	__Insert_cate_data("식비", __today_date() + '-' + __current_time(), "지출4", 10, EXPENSE);
	__Insert_cate_data("식비", __today_date() + '-' + __current_time(), "지출5", 100, EXPENSE);
	__Insert_cate_data("식비", __today_date() + '-' + __current_time(), "지출6", 1000, EXPENSE);


	//std::cout << __Get_total_from_to("식비", "2000-01-01", "2019-07-30", INCOME) << std::endl;


	std::string *buffer = new std::string[100];
	int status = __Get_data(buffer, "식비", "2019-04", 0, 16);
	std::cout << status << std::endl;
	std::cout << buffer[13] << std::endl;
	delete[] buffer;



}