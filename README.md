# Stellarium

## Installation Instructions & Quick Start

Please refer to the [User Guide, Getting Started section](https://github.com/Stellarium/stellarium/releases/download/v0.19.1/stellarium_user_guide-0.19.1-1.pdf).

## Get & build the code

Refer to our [wiki page](https://github.com/Stellarium/stellarium/wiki).

### Instalation steps:
```
sudo apt-get install -y build-essential cmake zlib1g-dev libgl1-mesa-dev gcc g++ \
    graphviz doxygen gettext git \
    qtscript5-dev libqt5svg5-dev qttools5-dev-tools qttools5-dev \
    libqt5opengl5-dev qtmultimedia5-dev libqt5multimedia5-plugins \
    libqt5serialport5 libqt5serialport5-dev qtpositioning5-dev libgps-dev \
    libqt5positioning5 libqt5positioning5-plugins qtcreator
mkdir -p builds/unix
cd builds/unix
cmake -DCMAKE_BUILD_TYPE="Release" ../../
make -j $(nproc)
sudo make install
```

## Full References and Credits

See the [full credit file](CREDITS.md).

## Contributing to Stellarium

See the [contributing guideline](https://github.com/Stellarium/stellarium/blob/master/CONTRIBUTING.md).

## Contributors

This project exists thanks to all the people who contribute! List of contributors [on Github](https://github.com/Stellarium/stellarium/graphs/contributors) (code contributors) and [on Open Collective page](https://opencollective.com/stellarium#contributors) (financial contributors).

## Our backers & sponsors

Thank you to all [our backers and sponsors](https://github.com/Stellarium/stellarium/blob/master/BACKERS.md)! 🙏 Become a [backer](https://opencollective.com/stellarium#backer) or [sponsor](https://opencollective.com/stellarium#sponsor).
