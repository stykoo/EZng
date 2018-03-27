/*
Copyright (C) 2018 Alexis Poncet <alexis.poncet@normalesup.org>

EZng is a computer program that computes and displays simulations of the
Ising model on various lattices.

This program is free software: you can redistribute it and/or modify
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
 * \mainpage EZng
 *
 * EZng is a computer program that computes and displays simulations of
 * the Ising model. Ideally several lattices (square, triangular, ...),
 * several observables (magnetization, correlations, ...) and several
 * interactions (ferromagnetic, anti-ferromagnetic, spin glasses) will
 * be provided.
 */
/*!
 * \file main.cpp
 * \author Alexis Poncet
 * \brief Main file of EZing.
 * \version 0.1
 * \date 2018-03-28
 *
 * Lauch the GUI application of EZng.
 */

#include <QApplication>
#include "gui/MainWindow.h"

/*
 * \brief Main function
 *
 * Launch the Qt GUI application.
 */
int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    MainWindow window;
    window.show();
    return app.exec();
}
