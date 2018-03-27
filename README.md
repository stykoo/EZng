# EZng

EZng (read 'Ising' [ˈiːzɪŋ]) is a program that computes and displays
simulations of the
[Ising model](http://www.scholarpedia.org/article/Ising_model:_exact_results)
on various lattices.

## Dependancies and compilation
The graphical display uses [Qt 5](http://doc.qt.io/qt-5/). 
See [here](http://doc.qt.io/qt-5/gettingstarted.html) for information
on how to install Qt.

Once Qt is installed, the program can be compiled with the command-line:
`qmake --qt=5 && make`.
The executable is called `EZng`.

The compilation was only tested on Linux but should work as well with
MacOS and Windows. Currently no binaries are provided.

## License

This software is licensed under
[GNU GPL 3](https://www.gnu.org/licenses/gpl-3.0.html).
You are very welcome to contribute to it!

Qt is licensed under [GNU LGPL](http://doc.qt.io/qt-5/licensing.html).
