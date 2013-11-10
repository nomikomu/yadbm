/**
 * yadbm.h
 *
 * @author: Kamil Żak (楊文里) <defm03@outlook.jp>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * @date: 2013-11-10
 */

#ifndef __yadbm_h__
#define __yadbm_h__

// Basic structs to work with.
struct Address {
	int id;
	int set;
	char name[MAX_DATA];
	char email[MAX_DATA]
};

struct Database {
	struct Address rows[MAX_ROWS];
};

struct Connection
{
	FILE *file;
	struct Database *db;
};

// Extern for functions to prevent errors
extern void Database_delete(struct, int);
extern void Database_get(struct, int);
extern void Database_set(struct, int, const char, const char);
extern void Database_create(struct);
extern void Database_write(struct);
extern void Database_list(struct);
extern void Database_print(struct);
extern void Database_close(struct);
extern void die(const char);

#endif