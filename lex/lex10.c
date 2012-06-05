/*

	Copyright 2009, 2010 Vlad Manea, Sebastian Codrin Ditu

	This file is part of newshaolin.

    	newshaolin is free software: you can redistribute it and/or modify
    	it under the terms of the GNU General Public License as published by
    	the Free Software Foundation, either version 3 of the License, or
    	(at your option) any later version.

    	newshaolin is distributed in the hope that it will be useful,
    	but WITHOUT ANY WARRANTY; without even the implied warranty of
    	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    	GNU General Public License for more details.

    	You should have received a copy of the GNU General Public License
    	along with newshaolin.  If not, see <http://www.gnu.org/licenses/>.

*/

#include "newssql.h"
#include "globals.h"

/* definesc functia de adaugare a unei stiri, care intoarce identificatorul stirii adaugate */
int sql_new_add(char *name, char *text, int catid)
{
	/* declar variabila care retine rezultatul */
	int ans;

	/* declar variabila care retine interogarea */
	char *query = NULL;

	/* declar variabila care retine conexiunea la serverul MySQL */
	MYSQL *conn = NULL;

	/* declar variabila care retine rezultatul interogarii */
	MYSQL_RES *result = NULL;

	/* declar variabila care retine randul interogarii */
	MYSQL_ROW row;

	/* aloc memorie pentru query */
	if ((query = (char *)realloc(query, sizeof(char) * (128 + inlength))) == NULL)
		handle_error("newssql::sql_new_add::realloc(query, 128 + inlength)");

	/* initializez conexiunea la baza de date, CU TRATAREA ERORILOR */
	if ((conn = mysql_init(NULL)) == NULL)
		handle_error("newssql::sql_new_add::mysql_init(conn)");

	/* conectez la baza de date, CU TRATAREA ERORILOR */
	if (mysql_real_connect(conn, "localhost", "root", "root", "rcnews", 0, NULL, 0) == NULL)
		handle_error("newssql::sql_new_add::mysql_real_connect(conn, rcnews)");

	/* creez sirul de caractere pentru query INSERT */
	sprintf(query, "INSERT INTO news VALUES ('', '%s', '%s', CONCAT(CURRENT_DATE(), ' ', CURRENT_TIME()), '%d', '%d');", name, text, catid, connected);

	/* adaug stirea, CU TRATAREA ERORILOR */
	if (mysql_query(conn, query))
		handle_error("newssql::sql_new_add::mysql_query(conn, insert)");

	/* creez sirul de caractere pentru query SELECT */
	sprintf(query, "SELECT id FROM news WHERE category_id='%d' and user_id='%d' and name='%s' and text='%s';", catid, connected, name, text);

	/* aflu stirea, CU TRATAREA ERORILOR */
	if (mysql_query(conn, query))
		handle_error("newssql::sql_new_add::mysql_query(conn, select)");

	/* citesc rezultatul interogarii */
	if (!(result = mysql_store_result(conn)))
		handle_error("newssql::sql_new_add::mysql_store_result(conn, select)");

	/* verific valoarea raspunsului */
	if (row = mysql_fetch_row(result))
	{
		/* retin primul camp */
		ans = atoi(row[0]);
	}
	else
	{
		/* consider utilizator fictiv, dar e posibil sa fi fost sters! */
		ans = 0;
	}

	/* eliberez rezultatul */
	mysql_free_result(result);

	/* inchid conexiunea la baza de date */
	mysql_close(conn);

	/* intorc raspunsul */
	return ans;	
}

/* definesc functia de modificare a unei stiri, care intoarce idul stirii modificate */
int sql_new_modify(int id, char *name, char *text, int catid)
{
	/* declar variabila care retine rezultatul */
	int ans;

	/* declar variabila care retine interogarea */
	char *query = NULL;

	/* declar variabila care retine conexiunea la serverul MySQL */
	MYSQL *conn = NULL;

	/* declar variabila care retine rezultatul interogarii */
	MYSQL_RES *result = NULL;

	/* declar variabila care retine randul interogarii */
	MYSQL_ROW row;

	/* aloc memorie pentru query */
	if ((query = (char *)realloc(query, sizeof(char) * (128 + inlength))) == NULL)
		handle_error("newssql::sql_new_modify::realloc(query, 128 + inlength)");

	/* initializez conexiunea la baza de date, CU TRATAREA ERORILOR */
	if ((conn = mysql_init(NULL)) == NULL)
		handle_error("newssql::sql_new_modify::mysql_init(conn)");

	/* conectez la baza de date, CU TRATAREA ERORILOR */
	if (mysql_real_connect(conn, "localhost", "root", "root", "rcnews", 0, NULL, 0) == NULL)
		handle_error("newssql::sql_new_modify::mysql_real_connect(conn, rcnews)");

	/* creez sirul de caractere pentru query INSERT */
	sprintf(query, "UPDATE news SET name='%s', moment=CONCAT(CURRENT_DATE(), ' ', CURRENT_TIME()), text='%s', category_id='%d' WHERE id='%d';", name, text, catid, id);

	/* adaug stirea, CU TRATAREA ERORILOR */
	if (mysql_query(conn, query))
		ans = 0;
	else
		ans = id;

	/* eliberez rezultatul */
	mysql_free_result(result);

	/* inchid conexiunea la baza de date */
	mysql_close(conn);

	/* intorc raspunsul */
	return ans;	
}

/* definesc functia de stergere a unei stiri */
int sql_new_remove(int id)
{
	/* declar variabila care retine rezultatul */
	int ans;

	/* declar variabila care retine interogarea */
	char *query = NULL;

	/* declar variabila care retine conexiunea la serverul MySQL */
	MYSQL *conn = NULL;

	/* aloc memorie pentru query */
	if ((query = (char *)realloc(query, sizeof(char) * (128 + inlength))) == NULL)
		handle_error("newssql::sql_new_remove::realloc(query, 128 + inlength)");

	/* initializez conexiunea la baza de date, CU TRATAREA ERORILOR */
	if ((conn = mysql_init(NULL)) == NULL)
		handle_error("newssql::sql_new_remove::mysql_init(conn)");

	/* conectez la baza de date, CU TRATAREA ERORILOR */
	if (mysql_real_connect(conn, "localhost", "root", "root", "rcnews", 0, NULL, 0) == NULL)
		handle_error("newssql::sql_new_remove::mysql_real_connect(conn, rcnews)");

	/* construiesc cererea sql */
	sprintf(query, "DELETE FROM news WHERE id = '%d';", id);

	/* adaug stirea, CU TRATAREA ERORILOR */
	if (mysql_query(conn, query))
		handle_error("newssql::sql_new_remove::mysql_query(conn, insert)");

	/* am sters cu succes stirea */
	return 1;
}

/* definesc functia recursiva de vizualizare a stirilor */
void sql_news_view(int catid, int levmax, int lev, int limit)
{
	/* declar variabila care verifica validitatea categoriei */
	int user;

	/* declar variabila care retine identificatorul categoriei curente */
	int id;

	/* declar variabila care retine numarul nivelului stirii */
	char number[11];

	/* declar variabila care retine interogarea */
	char *query = NULL;

	/* declar variabila care retine conexiunea la serverul MySQL */
	MYSQL *conn = NULL;

	/* declar variabila care retine rezultatul interogarii */
	MYSQL_RES *result = NULL;

	/* declar variabila care retine randul interogarii */
	MYSQL_ROW row;

	/* verific sa nu fi depasit nivelul */
	if (levmax > 0 && lev >= levmax)
	{
		/* intorc */
		return;
	}

	/* initializez conexiunea la baza de date, CU TRATAREA ERORILOR */
	if ((conn = mysql_init(NULL)) == NULL)
		handle_error("newssql::sql_news_view::mysql_init(conn)");

	/* conectez la baza de date, CU TRATAREA ERORILOR */
	if (mysql_real_connect(conn, "localhost", "root", "root", "rcnews", 0, NULL, 0) == NULL)
		handle_error("newssql::sql_news_view::mysql_real_connect(conn, rcnews)");

	/* aloc memorie pentru query */
	if ((query = (char *)realloc(query, sizeof(char) * (128 + inlength))) == NULL)
		handle_error("newssql::sql_news_view::realloc(query, 128 + inlength)");

	/* verific validitatea categoriei */
	if ((user = sql_cat_user_exists(catid)) <= 0)
	{
		/* creez sirul de caractere pentru query SELECT */
		sprintf(query, "SELECT id FROM categories WHERE parent_id IS NULL;");

		/* gasesc categoriile, CU TRATAREA ERORILOR */
		if (mysql_query(conn, query))
			handle_error("newssql::sql_news_view::mysql_query(conn, select)");

		/* retin rezultatul */
		if ((result = mysql_store_result(conn)) == NULL)
			handle_error("newssql::sql_news_view::mysql_store_result(conn, select)");	

		/* parcurg intrarile selectate din baza de date */
		while (row = mysql_fetch_row(result))
		{
			/* retin valoarea identificatorului*/
			if ((id = atoi(row[0])) > 0)
			{
				/* reapelez cu categorie valida */
				sql_news_view(id, levmax, lev, limit); 
			}
	
			/* tratez si celalalt caz */
			else
			{
				/* trec la randul urmator extras */
				continue;
			}
		}
	}
	
	/* tratez cazul cand categoria e valida */
	else
	{
		/* creez sirul de caractere pentru query SELECT */
		if (limit > 0)		
			sprintf(query, "SELECT id, name, text, moment, category_id, user_id FROM news WHERE category_id = '%d' ORDER BY moment DESC LIMIT %d;", catid, limit);
		else
			sprintf(query, "SELECT id, name, text, moment, category_id, user_id FROM news WHERE category_id = '%d' ORDER BY moment DESC;", catid);

		/* gasesc stirile, CU TRATAREA ERORILOR */
		if (mysql_query(conn, query))
			handle_error("newssql::sql_news_view::mysql_query(conn, select)");

		/* retin rezultatul */
		if ((result = mysql_store_result(conn)) == NULL)
			handle_error("newssql::sql_news_view::mysql_store_result(conn, select)");	

		/* parcurg intrarile selectate din baza de date */
		while (row = mysql_fetch_row(result))
		{
			/* construiesc numarul */
			sprintf(number, "%d", lev);

			/* scriu bara in raspus */
			handle_output("|", 1);

			/* scriu nivelul in raspuns */
			handle_output(number, 1);

			/* scriu bara in raspus */
			handle_output("|", 1);

			/* scriu identificatorul stirii */
			handle_output(row[0], 1);
			
			/* scriu bara in raspus */
			handle_output("|", 1);

			/* scriu numele stirii */
			handle_output(row[1], 1);

			/* scriu bara in raspus */
			handle_output("|", 1);

			/* scriu textul stirii */
			handle_output(row[2], 1);

			/* scriu bara in raspus */
			handle_output("|", 1);

			/* scriu momentul stirii */
			handle_output(row[3], 1);

			/* scriu bara in raspus */
			handle_output("|", 1);

			/* scriu categoria stirii */
			handle_output(row[4], 1);

			/* scriu bara in raspus */
			handle_output("|", 1);

			/* scriu identificatorul propunatorului stirii */
			handle_output(row[5], 1);
		}

		/* creez sirul de caractere pentru query SELECT */
		sprintf(query, "SELECT id FROM categories WHERE parent_id = '%d';", catid);

		/* gasesc categoriile, CU TRATAREA ERORILOR */
		if (mysql_query(conn, query))
			handle_error("newssql::sql_news_view::mysql_query(conn, select)");

		/* retin rezultatul */
		if ((result = mysql_store_result(conn)) == NULL)
			handle_error("newssql::sql_news_view::mysql_store_result(conn, select)");	

		/* parcurg intrarile selectate din baza de date */
		while (row = mysql_fetch_row(result))
		{
			/* retin valoarea identificatorului*/
			if ((id = atoi(row[0])) > 0)
			{
				/* reapelez cu categorie valida */
				sql_news_view(id, levmax, lev + 1, limit); 
			}

			/* tratez si celalalt caz */
			else
			{
				/* trec la randul urmator extras */
				continue;
			}
		}
	}

	/* eliberez rezultatul */
	mysql_free_result(result);

	/* inchid conexiunea la baza de date */
	mysql_close(conn);
}

/* definesc functia de vizualizareaa a news */
int sql_new_view(int id)
{
	/* declar raspunsul */
	int ans;
	
	/* declar variabila care retine interogarea */
	char *query = NULL;

	/* declar variabila care retine conexiunea la serverul MySQL */
	MYSQL *conn = NULL;

	/* declar variabila care retine rezultatul interogarii */
	MYSQL_RES *result = NULL;

	/* declar variabila care retine randul interogarii */
	MYSQL_ROW row;	

	/* aloc memorie pentru query */
	if ((query = (char *)realloc(query, sizeof(char) * (128 + inlength))) == NULL)
		handle_error("newssql::sql_new_view::realloc(query, 128 + inlength)");

	/* initializez conexiunea la baza de date, CU TRATAREA ERORILOR */
	if ((conn = mysql_init(NULL)) == NULL)
		handle_error("newssql::sql_new_view::mysql_init(conn)");

	/* conectez la baza de date, CU TRATAREA ERORILOR */
	if (mysql_real_connect(conn, "localhost", "root", "root", "rcnews", 0, NULL, 0) == NULL)
		handle_error("newssql::sql_new_view::mysql_real_connect(conn, rcnews)");

	/* creez sirul de caractere pentru query SELECT */
	sprintf(query, "SELECT * FROM news WHERE id ='%d';", id);

	/* gasesc utilizatorul, CU TRATAREA ERORILOR */
	if (mysql_query(conn, query))
		handle_error("newssql::sql_new_view::mysql_query(conn, select)");

	/* retin rezultatul */
	if ((result = mysql_store_result(conn)) == NULL)
		handle_error("newssql::sql_new_view::mysql_store_result(conn, select)");	

	/* parcurg intrarile selectate din baza de date */
	if (row = mysql_fetch_row(result))
	{
		/* construiesc raspunsul */
		handle_output("success", 0);
		
		/* scriu bara in raspuns */
		handle_output("|", 1);

		/* scriu identificatorul stirii */
		handle_output(row[0], 1);

		/* scriu bara in raspuns */
		handle_output("|", 1);

		/* scriu numele stirii */
		handle_output(row[1], 1);

		/* scriu bara in raspuns */
		handle_output("|", 1);

		/* scriu textul stirii */
		handle_output(row[2], 1);

		/* scriu bara in raspuns */
		handle_output("|", 1);

		/* scriu momentul stirii */
		handle_output(row[3], 1);

		/* scriu bara in raspuns */
		handle_output("|", 1);

		/* scriu categoria parinte stirii */
		handle_output(row[4], 1);

		/* scriu bara in raspuns */
		handle_output("|", 1);

		/* scriu identificatorul propunatorului stirii */
		handle_output(row[5], 1);

		/* raspunsul este valid */
		ans = 1;
	}
	else
	{
		/* scriu eroare de id */
		handle_output(errors[1], 0);

		/* raspunsul este invalid */
		ans = 0;
	}

	/* eliberez rezultatul */
	mysql_free_result(result);

	/* inchid conexiunea la baza de date */
	mysql_close(conn);

	/* intorc starea */
	return ans;
}


/* definesc functia de test a existentei unei stiri dupa id */
int sql_new_user_exists(int id)
{
	/* declar variabila care retine interogarea */
	char *query = NULL;

	/* declar variabila care retine rezultatul */
	int ans;
	
	/* declar variabila care retine conexiunea la serverul MySQL */
	MYSQL *conn = NULL;

	/* declar variabila care retine rezultatul interogarii */
	MYSQL_RES *result = NULL;

	/* declar variabila care retine randul interogarii */
	MYSQL_ROW row;

	/* aloc memorie pentru query */
	if ((query = (char *)realloc(query, sizeof(char) * (128 + inlength))) == NULL)
		handle_error("newssql::sql_new_user_exists::realloc(query, 128 + inlength)");

	/* initializez conexiunea la baza de date, CU TRATAREA ERORILOR */
	if ((conn = mysql_init(NULL)) == NULL)
		handle_error("newssql::sql_new_user_exists::mysql_init(conn)");

	/* conectez la baza de date, CU TRATAREA ERORILOR */
	if (mysql_real_connect(conn, "localhost", "root", "root", "rcnews", 0, NULL, 0) == NULL)
		handle_error("newssql::sql_new_user_exists::mysql_real_connect(conn, rcnews)");

	/* creez sirul de caractere pentru query SELECT */
	sprintf(query, "SELECT user_id FROM news WHERE id = '%d';", id);

	/* gasesc utilizatorul, CU TRATAREA ERORILOR */
	if (mysql_query(conn, query))
		handle_error("newssql::sql_new_user_exists::mysql_query(conn, select)");

	if ((result = mysql_store_result(conn)) == NULL)
		handle_error("newssql::sql_new_user_exists::mysql_store_result(conn, select)");	

	/* verific daca am raspuns */
	if (row = mysql_fetch_row(result))
	{
		/* retin primul camp */
		ans = atoi(row[0]);
	}
	
	/* verific celalalt caz */
	else
	{
		/* consider stire fictiva, dar e posibil sa fi fost stearsa! */
		ans = 0;
	}

	/* eliberez rezultatul */
	mysql_free_result(result);

	/* inchid conexiunea la baza de date */
	mysql_close(conn);

	/* intorc raspunsul */
	return ans;	
}
