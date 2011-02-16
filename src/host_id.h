/*
 * Copyright (C) 2010-2011 Red Hat, Inc.  All rights reserved.
 *
 * This copyrighted material is made available to anyone wishing to use,
 * modify, copy, or redistribute it subject to the terms and conditions
 * of the GNU General Public License v.2.
 */

#ifndef __HOST_ID_H__
#define __HOST_ID__H__

int print_space_state(struct space *sp, char *str);
int get_space_info(char *space_name, struct space *sp_out);
uint64_t get_our_host_id(char *space_name);
int host_id_leader_read(char *space_name, uint64_t host_id, struct leader_record *leader_ret);
int host_id_renewed(struct space *sp);
int add_space(struct space *sp);
int rem_space(char *space_name);
void clear_spaces(int wait);
int space_exists(char *space_name);
void setup_spaces(void);

#endif