/*
Copyright (C) 2018 Alexis Poncet <alexis.poncet@normalesup.org>

This file is part of EZng.

EZng is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
/*!
 * \file MainWindow.h
 * \author Alexis Poncet
 * \brief Header file for MainWindow.cpp.
 * \version 0.1
 * \date 2018-03-28
*/

#ifndef EZNG_MAINWINDOW_H_
#define EZNG_MAINWINDOW_H_

#include <QtWidgets>

/*!
 * \class MainWindow
 * \brief Main window
 *
 * Take care of the main window.
 */
class MainWindow : public QWidget
{
    Q_OBJECT

    public:
		MainWindow(); //!< Constructor
		~MainWindow(); //!< Destructor

    public slots:

    private:
		QVBoxLayout *mainLayout; //!< Main layout
		QPushButton *quitButton; //!< Quit button
};

#endif // EZNG_MAINWINDOW_H
