#!/bin/bash

if is_command pacman then;

elif is_command apt then;
# Debian/Ubuntu
sudo apt install build-essential libreadline-dev zlib1g-dev \
  flex bison libxml2-dev libxslt-dev libssl-dev \
  autoconf automake libtool pkg-config
else
	exit 1
fi

# GitHub mirror
cd
git clone https://github.com/postgres/postgres.git
cd postgres
git checkout master

# Configure
./configure --help
./configure --prefix=/usr/local/pgsql   --with-python --with-openssl 
# --prefix=/usr/local/pgsql =  install Postgre at  

# Build 
make -j$(nproc)

# Test
make check

# Install
sudo make install
