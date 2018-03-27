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
 * \file MainWindow.cpp
 * \author Alexis Poncet
 * \brief Main window.
 * \version 0.1
 * \date 2018-03-28
 *
 * Take care of the main window and of the user interface.
 */

#include "MainWindow.h"

/*!
 * \brief Constructor
 *
 * Construct the main window and all its widgets.
 */
MainWindow::MainWindow() {
    mainLayout = new QVBoxLayout;
    quitButton = new QPushButton(tr("Exit"));

    mainLayout->addWidget(quitButton, 0, Qt::AlignRight);
    setLayout(mainLayout);

    setWindowTitle(tr("EZng: Ising model as easy as it can be!"));
    connect(quitButton, SIGNAL(clicked()), this, SLOT(close()));
}

/*!
 * \brief Destructor
 */
MainWindow::~MainWindow() {
    delete mainLayout;
    delete quitButton;
}
