#!/bin/bash
PROJECT_HOME=`git rev-parse --show-toplevel`
BUILD_DIR=Build
BIN_DIR=Bin
LOG_DIR=Logs

cd $PROJECT_HOME/$BUILD_DIR

mkdir -p $LOG_DIR

cd $PROJECT_HOME/$BUILD_DIR/$BIN_DIR

./App
