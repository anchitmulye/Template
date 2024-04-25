#!/bin/bash
PROJECT_HOME=`git rev-parse --show-toplevel`
BUILD_DIR=Build
BUILD_TYPE=Release

cmake_project() {
    echo "Cmake project $BUILD_TYPE"
    clean_project
    cd $PROJECT_HOME
    mkdir -p $BUILD_DIR
    pushd $BUILD_DIR
    cmake .. -DCMAKE_BUILD_TYPE=$BUILD_TYPE 
    popd
    make_project
}

make_project() {
    echo "Make project"
    cd $PROJECT_HOME
    pushd $BUILD_DIR
    cmake --build .
    popd
}

clean_project() {
    echo "Clean project"
    cd $PROJECT_HOME
    pushd $BUILD_DIR
    cmake --build . --target clean
    popd
}

delete_project() {
    echo "Delete project"
    cd $PROJECT_HOME
    rm -rf $BUILD_DIR
}

if [ $# == 0 ]; then
    echo "Provide all the arguments!"
elif [ $# == 1 ]; then
    case "$1" in
        cmake)
            cmake_project ;;
        make)
            make_project ;;
        clean)
            clean_project ;;
        delete)
            delete_project ;;
        *)
            echo "Invalid argument '$1'." ;;
    esac
elif [ $# == 2 ]; then
    case "$2" in
        debug)
            BUILD_TYPE=Debug
            cmake_project ;;
        release)
            BUILD_TYPE=Release
            cmake_project ;;
        *)
            echo "Invalid build type '$2'." ;;
    esac
fi