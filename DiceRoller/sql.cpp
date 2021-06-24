#include <iostream>
#include <sqlite3.h>
#include <stdio.h>

using namespace std;

sqlite3* DB;
const char* dir = "D:\\Documents\\Programming\\Databases\\test.db";

void createDB();
void createTable();
void insert();
void select();
static int callback(void* NotUsed, int argc, char** argv, char** azColName);
void update();
void deleteRecord();

void con() {
	createDB();
	createTable();
	deleteRecord();
	insert();
	select();
	update();
}

static void createDB()
{
	int exit = 0;

	exit = sqlite3_open(dir, &DB);

	sqlite3_close(DB);
}

static void createTable()
{
	string sql = "CREATE TABLE IF NOT EXISTS GRADES("
		"ID INTEGER PRIMARY KEY AUTOINCREMENT,"
		"Name        TEXT NOT NULL,"
		"Class       TEXT NOT NULL,"
		"Stats       TEXT NOT NULL);";

	try
	{
		int exit = 0;
		exit = sqlite3_open(dir, &DB);
		char* messageError;

		exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messageError);

		if (exit != SQLITE_OK)
		{
			cerr << "Error creating table" << endl;
			sqlite3_free(messageError);
		}
		else
		{
			sqlite3_close(DB);
		}
	}
	catch(const exception & e)
	{
		cerr << e.what();
	}
}

void insert()
{
	char* messageError;
	int exit = sqlite3_open(dir, &DB);

	string sql("INSERT INTO GRADES (Name, Class, Stats) VALUES('Cal', 'Fighter', '18,18,18,18,18,18')");
	exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messageError);
	if (exit != SQLITE_OK)
	{
		cerr << "Error inserting record";
		sqlite3_free(messageError);
	}
}

void select()
{
	int exit = sqlite3_open(dir, &DB);
	string sql = "SELECT * FROM GRADES;";

	sqlite3_exec(DB, sql.c_str(), callback, NULL, NULL);

	system("pause");

	system("cls");
}

static int callback(void* NotUsed, int argc, char** argv, char**azColName)
{
	for (int i = 0; i < argc; i++)
	{
		cout << azColName[i] << ": " << argv[i] << endl;
	}
	cout << endl;

	return 0;
}

void update()
{
	char* messageError;
	int exit = sqlite3_open(dir, &DB);
	string userinput;
	cout << "Insert new class name" << endl;
	cin >> userinput;
	string sql("UPDATE GRADES SET Class ='" + userinput + "' WHERE Name = 'Cal' AND ID = '2'");

	exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messageError);
	if (exit != SQLITE_OK)
	{
		cerr << "Error updating record" << endl;
		sqlite3_free(messageError);
	}

	system("cls");
	select();
}

void deleteRecord()
{
	int exit = sqlite3_open(dir, &DB);
	string sql = "DELETE FROM GRADES;";

	sqlite3_exec(DB, sql.c_str(), callback, NULL, NULL);
}