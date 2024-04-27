#!/bin/bash
PROJECT_HOME=`git rev-parse --show-toplevel`
BUILD_DIR=Build
LOG_DIR=Logs

cd $PROJECT_HOME/$BUILD_DIR

mkdir -p $LOG_DIR

./App/App