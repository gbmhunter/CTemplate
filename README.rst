=========
CTemplate
=========

-----------------------------------------------------------------------------------------
A template repository to quick-start C development.
-----------------------------------------------------------------------------------------

.. image:: https://travis-ci.org/mbedded-ninja/CTemplate.svg?branch=master
	:target: https://travis-ci.org/mbedded-ninja/CTemplate

.. image:: https://codecov.io/gh/mbedded-ninja/CTemplate/branch/master/graph/badge.svg
    :target: https://codecov.io/gh/mbedded-ninja/CTemplate

--------
Features
--------

- C template/example project with example header files and source files
- CMake-based build system
- Automatic build script in ./tools/
- gtest-based unit tests (and a make target to automatically build/run unit tests)
- CI functionality using TravisCI (with sudo available on Ubuntu 14.04)
- Semantic versioning and keepachangelog.com-based Changelog format
- Doyxgen support (example :code:`doxygen.conf` file provided) coupled with GitHub pages support, see https://mbedded-ninja.github.io/CTemplate/index.html for example documentation.
- Code coverage support using lcov and https://codecov.io. Code coverage is only generated for the files which matter, the source code in :code:`src/` and :code:`include/` directories.

---------------
Automatic Build
---------------

.. code:: bash

    ~/CTemplate$ ./tools/build.sh

------------
Manual Build
------------

.. code:: bash

    ~/CTemplate$ mkdir build
    ~/CTemplate$ cd build/
    ~/CTemplate/build$ cmake ..
    ~/CTemplate/build$ make
    ~/CTemplate/build$ make run_unit_tests
    ~/CTemplate/build$ sudo make install

-------------------------
To Generate Documentation
-------------------------

.. code:: bash

    ~/CTemplate$ doxygen doxygen.conf