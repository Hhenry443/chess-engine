//
// Created by Henry Barnes on 11/11/2026.
//

#include "board.h"

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include "ranks_and_files.h"

/**
 * Chessboard Constructor
 */
Chessboard::Chessboard() {
    board = static_cast<int *>(calloc(64, sizeof(int)));
}

/**
 * Chessboard::setupBoard()
 *
 * Puts all pieces on the board.
 *
 */
void Chessboard::setupBoard() {
    // White pieces
    setSquare(RANK_A, FILE_1, 0, 4);
    setSquare(RANK_B, FILE_1, 0, 2);
    setSquare(RANK_C, FILE_1, 0, 3);
    setSquare(RANK_D, FILE_1, 0, 5);
    setSquare(RANK_E, FILE_1, 0, 6);
    setSquare(RANK_F, FILE_1, 0, 3);
    setSquare(RANK_G, FILE_1, 0, 2);
    setSquare(RANK_H, FILE_1, 0, 4);

    setSquare(RANK_A, FILE_2, 0, 1);
    setSquare(RANK_B, FILE_2, 0, 1);
    setSquare(RANK_C, FILE_2, 0, 1);
    setSquare(RANK_D, FILE_2, 0, 1);
    setSquare(RANK_E, FILE_2, 0, 1);
    setSquare(RANK_F, FILE_2, 0, 1);
    setSquare(RANK_G, FILE_2, 0, 1);
    setSquare(RANK_H, FILE_2, 0, 1);

    // Black Pieces
    setSquare(RANK_A, FILE_8, 1, 4);
    setSquare(RANK_B, FILE_8, 1, 2);
    setSquare(RANK_C, FILE_8, 1, 3);
    setSquare(RANK_D, FILE_8, 1, 5);
    setSquare(RANK_E, FILE_8, 1, 6);
    setSquare(RANK_F, FILE_8, 1, 3);
    setSquare(RANK_G, FILE_8, 1, 2);
    setSquare(RANK_H, FILE_8, 1, 4);

    setSquare(RANK_A, FILE_7, 1, 1);
    setSquare(RANK_B, FILE_7, 1, 1);
    setSquare(RANK_C, FILE_7, 1, 1);
    setSquare(RANK_D, FILE_7, 1, 1);
    setSquare(RANK_E, FILE_7, 1, 1);
    setSquare(RANK_F, FILE_7, 1, 1);
    setSquare(RANK_G, FILE_7, 1, 1);
    setSquare(RANK_H, FILE_7, 1, 1);
}

/**
 * Chessboard::output()
 *
 * Simple utility function to output a representation of the current board state
 *
 */
void Chessboard::output() {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            int index = j + (i * 8);

            std::cout << std::hex << std::setw(2) << std::setfill('0') << board[index] << " ";
        }

        std::cout << std::endl;
    }
}

/**
 * Chessboard::getSquare()
 *
 * Simple utility function to return the data held within a square on the board.
 *
 * @param rank The X position of the square
 * @param file The Y position of the square
 *
 * @returns The integer held at that rank and file.
 *
 */
int Chessboard::getSquare(int rank, int file) {
    // say we are given rank
    int index = rank + (file * 8);

    std::cout << std::hex << board[index];

    return board[index];
}

/**
 * Chessboard::setSquare()
 *
 * Another utility to set a piece at a square
 *
 * @param rank The X position of the square
 * @param file The Y position of the square
 * @param colour The suit of the square, 1 for black, 0 for white
 * @param type The type of the piece. See the header for encoding details
 *
 */
void Chessboard::setSquare(int rank, int file, int colour, int type) {
    // rank is x
    // file is y
    int piece = colour << 7; // set the colour.

    piece = piece | type;

    int index = rank + (file * 8);

    board[index] = piece;
}
