/*
   FSearch - A fast file search utility
   Copyright © 2020 Christian Boxdörfer

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, see <http://www.gnu.org/licenses/>.
   */

#pragma once

#include "fsearch_config.h"
#include <gtk/gtk.h>

typedef enum FsearchPreferencesPage {
    PREF_PAGE_GENERAL = 0,
    PREF_PAGE_SEARCH,
    PREF_PAGE_DATABASE,
    N_PREF_PAGES,

} FsearchPreferencesPage;

typedef struct _FsearchPreferences {
    FsearchConfig *config;
    GtkTreeModel *include_model;
    GtkTreeModel *exclude_model;
    bool update_db;
    bool update_list;
    bool update_search;
} FsearchPreferences;

FsearchConfig *
preferences_ui_launch(FsearchConfig *main_config,
                      GtkWindow *window,
                      FsearchPreferencesPage page,
                      bool *update_db,
                      bool *update_list,
                      bool *update_search);
