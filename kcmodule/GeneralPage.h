/***************************************************************************
 *   Copyright (C) 2008 by Dario Freddi <drf@kdemod.ath.cx>                *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA .        *
 ***************************************************************************/

#ifndef GENERALPAGE_H
#define GENERALPAGE_H

#include <QWidget>

#include "ui_generalPage.h"

class GeneralPage : public QWidget, private Ui_generalPage
{
        Q_OBJECT

    public:
        GeneralPage( QWidget *parent = 0 );
        ~GeneralPage();
        void fillUi();

        void load();
        void save();

    signals:
        void changed( bool ch );

    private slots:
        void emitChanged();

        void enableBoxes();

    private:
        enum IdleAction {
            Shutdown = 1,
            S2Disk = 2,
            S2Ram = 3,
            Standby = 4,
            Lock = 5,
            None = 0
        };
};

#endif /* GENERALPAGE_H */