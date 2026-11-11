cmake_minimum_required(VERSION 4.3)
project(chess_engine)

set(CMAKE_CXX_STANDARD 20)

add_executable(chess_engine main.cpp
        board.cpp
        board.h
        ranks_and_files.h
        piece.cpp
        piece.h)
