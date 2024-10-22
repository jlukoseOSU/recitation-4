/*
 * This file contains basic linked list declarations.  Only a forward
 * declaration of the list structure is included, thus preventing users of the
 * list structure from accessing its internals.
 */

#ifndef __LIST_H
#define __LIST_H

struct list;

struct list* list_setup();

struct link* get_head(struct list* list);

struct link* get_next(struct link* link);

int get_val(struct link* link);

#endif
