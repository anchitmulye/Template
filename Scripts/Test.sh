#!/bin/bash
PROJECT_HOME=`git rev-parse --show-toplevel`
BUILD_DIR=Build
BIN_DIR=Bin

cd $PROJECT_HOME/$BUILD_DIR/$BIN_DIR

./EngineTest
