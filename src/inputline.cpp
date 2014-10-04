// albert - a simple application launcher for linux
// Copyright (C) 2014 Manuel Schneider
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "inputline.h"

InputLine::InputLine(QWidget *parent) :
	QLineEdit(parent)
{
	setObjectName(QString::fromLocal8Bit("inputline"));
	setSizePolicy(QSizePolicy::Minimum,QSizePolicy::Minimum);

	_settingsButton = new SettingsButton(this);
	_settingsButton->setFocusProxy(this);
	this->setFocusPolicy(Qt::StrongFocus);

}

#include <QResizeEvent>
void InputLine::resizeEvent(QResizeEvent *event)
{
	_settingsButton->move(event->size().width()-_settingsButton->width(),0);
}
