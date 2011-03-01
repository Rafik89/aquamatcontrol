/*
AquamatControl - Interfejs graficzny do sterownika akwariowego Aquamat
Copyright (C) 2009 Wojciech Todryk (wojciech@todryk.pl)

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

$Id$
*/

/** @file aboutDialog.h
@brief Plik nagłówkowy - Okienko About
*/

#ifndef CLASSABOUTDIALOG_H
#define CLASSABOUTDIALOG_H

#include "ui_aboutDialog.h"

class AboutDialog : public QDialog
{
	Q_OBJECT

public:
    AboutDialog(QWidget *parent = 0);
		void setProgramName(QString);
		void setProgramVersion(QString);
		void setAuthor(QString);
		void setLogo(QPixmap);

private:
  Ui::AboutDialog ui;
};

#endif

